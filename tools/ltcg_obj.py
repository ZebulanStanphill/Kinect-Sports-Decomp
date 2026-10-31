#!/usr/bin/env python3

###
# Builds the object of a unit that needs link-time code generation (LTCG).
#
# Usage (normally run by ninja for units with "ltcg_units" in objects.json):
#   python3 tools/ltcg_obj.py SPEC.json
#   python3 tools/ltcg_obj.py --probe [--wrapper WIBO] --cl CL.EXE --link LINK.EXE --work DIR
#
# The game was linked with /LTCG, so the code generated for a function could
# depend on other units: how a callee was compiled (its frame if it is variadic,
# the registers it leaves alone) and which string literals the program pools.
# A unit's own object, compiled normally, can't show that. This script compiles
# the unit and the units LTCG showed it (its "ltcg_units") with /GL, each with
# its own flags, links them with link.exe /LTCG into a throwaway DLL, and turns
# the code the linker generated for the unit back into an ordinary COFF object
# that objdiff can compare with the original split object.
#
# The link uses these options:
# - /ltcgasmlist:machinecode, an undocumented switch that writes a listing
#   (<module>.cod) of every module during code generation. A listing holds each
#   function's unrelocated bytes and its symbolic operands, which is all a
#   COFF object needs. The linked image is never read.
# - /DLL /NOENTRY and /EXPORT of every function the units define, so LTCG keeps
#   their real interface: the game had callers outside this small link set.
#   Without exports, LTCG drops constant arguments and changes signatures.
# - A non-/GL object defining every external the units use but don't define:
#   `nop; blr` for a function and a 16-byte zeroed slot for data. LTCG can't see
#   into them, as with a unit it was not shown.
# - A generated /GL unit that takes the address of every data symbol. LTCG keeps
#   a global whose address is never taken anywhere in the program in a register
#   across stores through pointers; in the whole game nearly all were taken.
# - The listed units are compiled with /Ob1 unless their flags choose an /Ob:
#   the game calls its callees rather than inlining them.
#
# The converted object has one .text section per generated function with
# REL24 (b, bl), REL14 (bc), REFHI and REFLO relocations, each REFHI/REFLO
# followed by a PAIR as cl writes them, and a .pdata entry per function.
# Symbols are only relocated if a listing declares them or a unit's plain
# object names them. LTCG pools a function's float constants as
# `__pool@_N` + offset; they are renamed to the `__real@<bits>` constant at that
# offset, the name cl and the split objects use.
#
# Needs a wibo that can run link.exe /LTCG (see CONTRIBUTING.md). link.exe may
# still crash after code generation, when its PDB writer finds no mspdbsrv;
# the listings are complete by then, so a crash is accepted once the unit's
# listing ends with END.
###

import argparse
import json
import os
import re
import shutil
import struct
import subprocess
import sys
from pathlib import Path
from typing import Dict, List, Optional, Sequence, Set, Tuple

MACHINE_PPCBE = 0x1F2
REL_ADDR32, REL_REL24, REL_REL14, REL_REFHI, REL_REFLO, REL_PAIR = 0x2, 0x6, 0x7, 0x10, 0x11, 0x12
TEXT_FLAGS = 0x60500020  # code, execute|read, 16-byte alignment
DATA_FLAGS = 0xC0500040  # initialised data, read|write, 16-byte alignment
PDATA_FLAGS = 0x40400040  # initialised data, read, 8-byte alignment
INCLUDE_PREFIX = "Note: including file:"
LINK_OPTIONS = [
    "/nologo", "/LTCG", "/ltcgasmlist:machinecode", "/NODEFAULTLIB", "/DLL", "/NOENTRY",
    "/FORCE:UNRESOLVED", "/FORCE:MULTIPLE", "/OPT:NOICF", "/SUBSYSTEM:XBOX", "/XEX:NO",
    "/OUT:ltcg.dll",
]


class LtcgError(Exception):
    pass


# ---------------------------------------------------------------- running tools


def run_tool(wrapper: Optional[str], exe: str, args: Sequence[str], cwd: Path, tmp: Path,
             timeout: int) -> subprocess.CompletedProcess:
    command = [*([wrapper] if wrapper else []), exe, *args]
    # cl.exe and link.exe put temporary files in TMPDIR, which wibo scans for
    # each one, so keep it small. WIBO_QUIET_SEGV makes the patched wibo exit
    # quietly (no macOS crash report) when link.exe crashes after writing.
    env = {**os.environ, "TMPDIR": str(tmp.resolve()), "TMP": str(tmp.resolve()),
           "WIBO_QUIET_SEGV": "1"}
    try:
        return subprocess.run(command, cwd=cwd, capture_output=True, text=True, errors="replace",
                              timeout=timeout, env=env)
    except subprocess.TimeoutExpired:
        raise LtcgError(f"timed out after {timeout}s: {Path(exe).name} {' '.join(args)[:200]}")


def relative(path: Path) -> str:
    if os.name != "nt" and path.is_absolute():
        return Path(os.path.relpath(path)).as_posix()
    return path.as_posix()


def compile_unit(spec: dict, unit: dict, name: str, work: Path, gl: bool, extra: Sequence[str] = ()
                 ) -> Tuple[Path, List[str]]:
    """Compile a unit as work/<name>.obj (/GL) or work/<name>.plain.obj; return the
    object and the headers it included."""
    obj = work / (f"{name}.obj" if gl else f"{name}.plain.obj")
    # relative paths: cl.exe reads an absolute Unix path as an option
    args = [*unit["cflags"], *extra, *(["/GL", "/showIncludes"] if gl else []),
            f"/Fo{relative(obj)}", relative(Path(unit["source"]))]
    r = run_tool(spec.get("wrapper"), spec["cl"], args, Path.cwd(), work, 300)
    includes = [l for l in r.stdout.splitlines() if l.startswith(INCLUDE_PREFIX)]
    if r.returncode or not obj.exists():
        lines = [l for l in (r.stdout + r.stderr).splitlines() if not l.startswith(INCLUDE_PREFIX)]
        raise LtcgError(f"compiling {unit['source']} (flags {' '.join(args[:-2])}) failed:\n"
                        + "\n".join(lines)[-3000:])
    return obj, includes


# ---------------------------------------------------------------- COFF


def read_coff_symbols(path: Path) -> Dict[str, Tuple[int, int]]:
    """{name: (section_number, type)} of the external symbols of a plain object."""
    d = path.read_bytes()
    _, _, _, symptr, nsym, _, _ = struct.unpack_from("<HHIIIHH", d, 0)
    strtab = symptr + nsym * 18
    out: Dict[str, Tuple[int, int]] = {}
    i = 0
    while i < nsym:
        o = symptr + 18 * i
        raw = d[o:o + 8]
        if raw[:4] == b"\0\0\0\0":
            so = strtab + struct.unpack_from("<I", raw, 4)[0]
            name = d[so:d.index(b"\0", so)].decode("latin-1")
        else:
            name = raw.rstrip(b"\0").decode("latin-1")
        _, sec, typ, cls, naux = struct.unpack_from("<IhHBB", d, o + 8)
        if cls == 2:  # external
            prev = out.get(name)
            if prev is None or (prev[0] == 0 and sec != 0):
                out[name] = (sec, typ)
        i += 1 + naux
    return out


def write_coff(path: Path, sections: list, symbols: list) -> None:
    """sections: [(name, flags, data, [(offset, symbol_index, type)])];
    symbols: [(name, value, section_number, type, storage_class)]."""
    pos = 20 + 40 * len(sections)
    layout = []
    for _, _, data, relocs in sections:
        layout.append((pos, pos + len(data)))
        pos += len(data) + 10 * len(relocs)
    strtab = bytearray(4)
    out = bytearray(struct.pack("<HHIIIHH", MACHINE_PPCBE, len(sections), 0, pos, len(symbols), 0, 0))
    for (name, flags, data, relocs), (dp, rp) in zip(sections, layout):
        out += name.encode().ljust(8, b"\0")[:8]
        out += struct.pack("<IIIIIIHHI", 0, 0, len(data), dp, rp if relocs else 0, 0, len(relocs), 0, flags)
    for _, _, data, relocs in sections:
        out += data
        for off, si, typ in relocs:
            out += struct.pack("<IIH", off, si, typ)
    for name, value, secno, typ, cls in symbols:
        enc = name.encode("latin-1")
        if len(enc) <= 8:
            raw = enc.ljust(8, b"\0")
        else:
            raw = struct.pack("<II", 0, len(strtab))
            strtab += enc + b"\0"
        out += raw + struct.pack("<IhHBB", value, secno, typ, cls, 0)
    struct.pack_into("<I", strtab, 0, len(strtab))
    path.write_bytes(bytes(out + strtab))


def write_stub_object(path: Path, funcs: List[str], data: List[str]) -> None:
    """A plain object defining each function as `nop; blr` and each data symbol as 16 zero bytes."""
    text = b"".join(struct.pack(">II", 0x60000000, 0x4E800020) for _ in funcs)
    syms = [(n, 8 * i, 1, 0x20, 2) for i, n in enumerate(funcs)]
    syms += [(n, 16 * i, 2, 0, 2) for i, n in enumerate(data)]
    write_coff(path, [(".text", TEXT_FLAGS, text, []), (".data", DATA_FLAGS, bytes(16 * len(data)), [])], syms)


def write_escape_unit(path: Path, names: List[str]) -> List[str]:
    """C source that takes the address of every data symbol in names; returns the
    /ALTERNATENAME options that reach names which are not C identifiers."""
    decls, refs, alt = [], [], []
    for i, n in enumerate(names):
        ident = n if re.match(r"^[A-Za-z_]\w*$", n) else f"ltcg_escape_{i}"
        if ident != n:
            alt.append(f'"/ALTERNATENAME:{ident}={n}"')
        decls.append(f"extern char {ident};")
        refs.append(f"&{ident}")
    path.write_text("\n".join(decls) + "\nvoid *ltcg_escape_table[] = {" + ", ".join(refs or ["0"]) + "};\n")
    return alt


# ---------------------------------------------------------------- listings

REG = re.compile(r"^(?:r\d+|fr\d+|f\d+|cr\d|v\d+|vr\d+|ctr|lr|xer|sp)$")
INS = re.compile(r"^\s+([0-9a-fA-F]{5,})\t([0-9a-fA-F]+)\t\s*(\S+)\s*(.*)$")
PROC = re.compile(r"^(\S+)\s+PROC\b")
ENDP = re.compile(r"^(\S+)\s+ENDP\b")
DATA = re.compile(r"^(\S+)\s+(DB|DW|DD|DQ)\b\s*(.*)$")
DECL = re.compile(r"^(?:PUBLIC|EXTRN|COMM)\s+([^\s:;]+)")
SEGMENT = re.compile(r"^(\S+)\s+SEGMENT\b")


class Listing:
    def __init__(self) -> None:
        self.funcs: Dict[str, List[Tuple[int, str, str, str]]] = {}  # name: [(offset, hex, mnemonic, operands)]
        self.pools: Dict[str, Optional[bytes]] = {}  # data label: bytes (DB data only)
        self.pdata: List[Tuple[str, int]] = []  # (function, packed word)
        self.known: Set[str] = set()  # symbols the listing declares or defines


def parse_db(text: str) -> bytes:
    """Bytes of a DB operand list such as "'?', 0c0H, 00H"."""
    out = bytearray()
    for tok in re.findall(r"'(?:[^']|'')*'|[0-9a-fA-F]+H?", text.split(";")[0]):
        if tok.startswith("'"):
            out += tok[1:-1].replace("''", "'").encode("latin-1")
        elif tok[-1] in "Hh":
            out.append(int(tok[:-1], 16) & 0xFF)
        else:
            out.append(int(tok) & 0xFF)
    return bytes(out)


def parse_number(tok: str) -> int:
    tok = tok.strip()
    if tok.endswith(("H", "h")):
        return int(tok[:-1], 16)
    return int(tok, 0)


def parse_cod(path: Path) -> Listing:
    lines = path.read_text(errors="replace").splitlines()
    if not any(l.strip() == "END" for l in lines[-5:]):
        raise LtcgError(f"{path.name} is incomplete (no END)")
    lst = Listing()
    local: Set[str] = set()
    cur: Optional[str] = None
    segment = ""
    last_label: Optional[str] = None
    pending_pdata: Optional[str] = None
    for line in lines:
        m = re.match(r"^(\S+)\s+=\s+-?\d", line)  # a frame variable: "a$365 = 80"
        if m:
            local.add(m.group(1))
            continue
        m = DECL.match(line)
        if m:
            lst.known.add(m.group(1))
            continue
        m = SEGMENT.match(line)
        if m:
            segment = m.group(1)
            last_label = None
            continue
        m = PROC.match(line)
        if m:
            cur = m.group(1)
            lst.funcs[cur] = []
            lst.known.add(cur)
            continue
        if ENDP.match(line):
            cur = None
            continue
        if cur is not None:
            m = INS.match(line)
            if m:
                off, hexw, mnem, ops = m.groups()
                lst.funcs[cur].append((int(off, 16), hexw, mnem, ops.split(";")[0].strip()))
            continue
        if segment == ".pdata":
            # "$T413 DD fn_X" then "DD 040001a04H": the function and its packed
            # prologue length, size in words and flags
            m = re.match(r"^(?:\S+)?\s+DD\s+([^\s;]+)", line)
            if m:
                if pending_pdata is None:
                    pending_pdata = m.group(1)
                else:
                    lst.pdata.append((pending_pdata, parse_number(m.group(1))))
                    pending_pdata = None
            continue
        m = DATA.match(line)
        if m and not line[0].isspace():
            last_label = m.group(1)
            lst.known.add(last_label)
            lst.pools[last_label] = parse_db(m.group(3)) if m.group(2) == "DB" else None
        elif last_label and re.match(r"^\s+DB\b", line) and lst.pools.get(last_label) is not None:
            lst.pools[last_label] = lst.pools[last_label] + parse_db(re.sub(r"^\s+DB\b", "", line))
        elif line and not line[0].isspace():
            last_label = None
    lst.known -= local
    return lst


def operand_symbol(ops: str, known: Set[str]) -> Tuple[Optional[str], int]:
    """The relocatable symbol named in an operand list, with its addend."""
    for tok in ops.split(","):
        m = re.match(r"^([^\s()+\-]+)(?:([+\-])((?:0x)?[0-9a-fA-F]+H?))?(?:\(\w+\))?$", tok.strip())
        if not m:
            continue
        name = m.group(1)
        if REG.match(name) or name.startswith("$") or name.endswith("$") or re.match(r"^-?\d", name):
            continue
        if name not in known:
            continue
        add = 0
        if m.group(3):
            v = m.group(3)
            add = int(v.rstrip("Hh"), 16) if v.endswith(("H", "h")) or v.startswith("0x") else int(v)
            if m.group(2) == "-":
                add = -add
        return name, add
    return None, 0


def pool_name(pools: Dict[str, Optional[bytes]], name: str, addend: int, mnem: str) -> Tuple[str, int]:
    """Rename a reference to LTCG's float pool to the __real@<bits> constant at its
    offset: 8 bytes for lfd/stfd, otherwise 4."""
    data = pools.get(name)
    if not data or not name.startswith("__pool@"):
        return name, addend
    size = 8 if mnem.lower().startswith(("lfd", "stfd")) else 4
    chunk = data[addend:addend + size]
    if len(chunk) != size:
        return name, addend
    return "__real@" + chunk.hex(), 0


def function_object(lst: Listing, known: Set[str], out_path: Path) -> None:
    """Write the listing's functions (bytes, relocations, .pdata) as a COFF object."""
    index: Dict[str, Optional[int]] = {}
    pending = []
    for name, ins in lst.funcs.items():
        data = bytearray()
        relocs = []
        for off, hexw, mnem, ops in ins:
            if off != len(data):
                raise LtcgError(f"{name}: listing offset {off:#x} does not follow {len(data):#x}")
            data += bytes.fromhex(hexw)
            target, addend = operand_symbol(ops, known)
            if target is None:
                continue
            base = mnem.rstrip("+-").lower()
            if target.startswith("__pool@") and target in lst.pools:
                use = mnem
                if base in ("lis", "addis"):
                    # the high half: name the constant by the next use of the low half
                    use = next((m2 for o2, _, m2, op2 in ins if o2 > off
                                and operand_symbol(op2, known)[0] == target
                                and m2.lower() not in ("lis", "addis")), mnem)
                target, addend = pool_name(lst.pools, target, addend, use)
            index.setdefault(target, None)
            if base in ("b", "bl", "ba", "bla"):
                relocs.append((off, target, REL_REL24, 0))
            elif (base.startswith("b") and not base.startswith(("bdz", "bdnz"))
                  and base not in ("bctr", "bctrl", "blr", "blrl")):
                relocs.append((off, target, REL_REL14, 0))
            elif base in ("lis", "addis"):
                relocs.append((off, target, REL_REFHI, addend))
            else:
                relocs.append((off, target, REL_REFLO, addend))
        pending.append((name, bytes(data), relocs))

    symbols = []
    for si, (name, _, _) in enumerate(pending):
        index[name] = len(symbols)
        symbols.append((name, 0, si + 1, 0x20, 2))
    for name in list(index):
        if index[name] is None:
            index[name] = len(symbols)
            symbols.append((name, 0, 0, 0x20 if name in lst.funcs else 0, 2))
    sections = []
    for name, data, relocs in pending:
        rel = []
        for off, target, typ, addend in relocs:
            rel.append((off, index[target], typ))
            if typ == REL_REFHI:
                rel.append((off, addend & 0xFFFF, REL_PAIR))
            elif typ == REL_REFLO:
                rel.append((off, 0, REL_PAIR))
        sections.append((".text", TEXT_FLAGS, data, rel))
    for func, word in lst.pdata:
        if func in lst.funcs:
            sections.append((".pdata", PDATA_FLAGS, struct.pack(">II", 0, word),
                             [(0, index[func], REL_ADDR32)]))
    write_coff(out_path, sections, symbols)


# ---------------------------------------------------------------- the build


def module_names(units: List[dict]) -> List[str]:
    """The units' module names. link.exe names each listing after the module's
    source file (<stem>.cod), so the stems must differ."""
    names: List[str] = []
    for unit in units:
        name = Path(unit["source"]).stem
        if name.lower() in (x.lower() for x in names) or name.lower() == "ltcg_escape":
            raise LtcgError(f"two units of one link have sources named {name}: rename one")
        names.append(name)
    return names


def build(spec: dict) -> List[str]:
    """Build spec["out"]; return the /showIncludes lines of the compiles."""
    work = Path(spec["work"])
    if work.exists():
        shutil.rmtree(work)
    work.mkdir(parents=True)
    units = [spec["unit"], *spec["others"]]
    names = module_names(units)
    objs, includes = [], []
    defined: Dict[str, int] = {}
    undefined: Dict[str, int] = {}
    for i, (unit, name) in enumerate(zip(units, names)):
        extra = []
        if i and not any(f.startswith(("/Ob", "-Ob")) for f in unit["cflags"]):
            extra = ["/Ob1"]  # the game calls its callees: don't let LTCG inline them
        obj, inc = compile_unit(spec, unit, name, work, True, extra)
        objs.append(obj)
        includes += inc
        plain, _ = compile_unit(spec, unit, name, work, False, extra)
        for sym, (sec, typ) in read_coff_symbols(plain).items():
            if sec > 0:
                defined.setdefault(sym, typ)
            elif sec == 0:
                undefined.setdefault(sym, typ)
    exports = sorted(n for n, typ in defined.items() if typ & 0x20)
    missing = {n: t for n, t in undefined.items() if n not in defined}
    stub_funcs = sorted(n for n, t in missing.items() if t & 0x20)
    stub_data = sorted(n for n, t in missing.items() if not t & 0x20 and n != "_fltused")
    write_stub_object(work / "ltcg_stubs.obj", stub_funcs + ["_fltused"], stub_data)
    data_names = sorted((set(stub_data) | {n for n, typ in defined.items() if not typ & 0x20})
                        - {"_fltused"} - {n for n in defined if n.startswith(("__C1_", "__C2_"))})
    alt = write_escape_unit(work / "ltcg_escape.c", data_names)
    escape = {"name": "ltcg_escape", "source": (work / "ltcg_escape.c").as_posix(),
              "cflags": ["/nologo", "/c", "/TC", "/O1"]}
    objs.append(compile_unit(spec, escape, "ltcg_escape", work, True)[0])
    (work / "link.rsp").write_text("\n".join(
        LINK_OPTIONS + ['"/EXPORT:ltcg_escape_table,DATA"'] + [f'"/EXPORT:{n}"' for n in exports] + alt
        + [o.name for o in objs] + ["ltcg_stubs.obj"]) + "\n")
    r = run_tool(spec.get("wrapper"), spec["link"], ["@link.rsp"], work, work, 600)
    (work / "link.log").write_text(r.stdout + r.stderr)
    cod = work / f"{names[0]}.cod"
    if not cod.exists():
        errors = [l for l in (r.stdout + r.stderr).splitlines() if "error" in l or "fatal" in l]
        raise LtcgError(f"link.exe /LTCG (exit {r.returncode}) wrote no listing {cod}\n"
                        + "\n".join(errors)[-3000:])
    lst = parse_cod(cod)
    if not lst.funcs:
        raise LtcgError(f"the LTCG listing of {spec['unit']['source']} defines no functions")
    # symbols the unit's listing uses without declaring them: functions of the
    # other modules and every external a plain object names
    known = lst.known | set(defined) | set(undefined)
    for other in work.glob("*.cod"):
        if other != cod:
            known |= parse_cod(other).known
    out = Path(spec["out"])
    out.parent.mkdir(parents=True, exist_ok=True)
    tmp = out.with_name(out.name + ".tmp")
    function_object(lst, known, tmp)
    os.replace(tmp, out)
    return includes


def probe(wrapper: Optional[str], cl: str, link: str, work: Path) -> Tuple[bool, str]:
    """Whether link.exe /LTCG writes its listing when run as build() runs it."""
    if work.exists():
        shutil.rmtree(work)
    work.mkdir(parents=True)
    src = work / "probe.c"
    src.write_text("int ltcg_probe_callee(int a) { return a + 1; }\n"
                   "int ltcg_probe(int a) { return ltcg_probe_callee(a) * 2; }\n")
    try:
        r = run_tool(wrapper, cl, ["/nologo", "/c", "/TC", "/O1", "/GL", f"/Fo{relative(work / 'probe.obj')}",
                                   relative(src)], Path.cwd(), work, 120)
        if r.returncode:
            return False, "cl.exe /GL failed: " + r.stdout.strip()[-300:]
        r = run_tool(wrapper, link, [*LINK_OPTIONS, "/EXPORT:ltcg_probe", "probe.obj"], work, work, 120)
        cod = work / "probe.cod"
        if cod.exists():
            lst = parse_cod(cod)
            if "ltcg_probe" in lst.funcs:
                return True, "ok"
        return False, f"link.exe /LTCG wrote no listing (exit {r.returncode})"
    except (OSError, LtcgError) as e:
        return False, str(e)
    finally:
        shutil.rmtree(work, ignore_errors=True)


def main() -> int:
    parser = argparse.ArgumentParser(description="Build a unit's object with link-time code generation.")
    parser.add_argument("spec", nargs="?", help="JSON build description (ninja writes it as $out.rsp)")
    parser.add_argument("--probe", action="store_true", help="check that the tools can run link.exe /LTCG")
    parser.add_argument("--wrapper")
    parser.add_argument("--cl")
    parser.add_argument("--link")
    parser.add_argument("--work", type=Path)
    args = parser.parse_args()
    if args.probe:
        ok, message = probe(args.wrapper, args.cl, args.link, args.work)
        print(message)
        return 0 if ok else 1
    spec_path = args.spec[1:] if args.spec.startswith("@") else args.spec
    spec = json.loads(Path(spec_path).read_text(encoding="utf-8"))
    try:
        includes = build(spec)
    except LtcgError as e:
        print(f"LTCG {spec['out']}: {e}", file=sys.stderr)
        return 1
    # header dependencies for ninja (deps = msvc), in the form the msvc rule gives
    if os.name != "nt":
        sys.path.insert(0, str(Path(__file__).resolve().parent))
        from transform_dep import transform_line
        includes = [transform_line(l) for l in includes]
    for line in dict.fromkeys(includes):
        print(line)
    return 0


if __name__ == "__main__":
    sys.exit(main())
