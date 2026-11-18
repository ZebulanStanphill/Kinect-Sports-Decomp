#!/usr/bin/env python3
"""Check that every relocation of a compiled unit resolves to the address the game uses.

usage: check_addends.py --all [--tsv FILE] [--known FILE] [--status Matching] [-j N] [-v]
       check_addends.py --unit NAME_OR_STEM [--unit ...] [--object FILE] [--tsv FILE] [-v]

objdiff compares the SYMBOL of a relocation, never the offset into it: the split
objects carry no addends (the splitter writes `sym+0x6C` into the listing but
zero into the object), and objdiff reads none from a PowerPC COFF
REFHI/REFLO/REL24 field either. The progress report (`objdiff-cli report
generate`, build/4D5308C9/report.json) does not even compare the symbol. A unit
can therefore be "Matching, 100%" while its code addresses another element of a
table, another member of a global, another vtable inside a merged symbol, or
(in the report) another object altogether.

This script closes the gap by linking each unit on paper. For every function,
and every data symbol, that a unit owns according to splits.txt and
symbols.txt, it takes the bytes of the compiled object
(build/4D5308C9/src/<unit>.obj), applies each relocation the way link.exe does,
with every symbol at the address symbols.txt gives it, and compares the result
with the bytes of the original image (orig/4D5308C9/default.exe):

    REFHI + PAIR   high16 = ha(S + (field << 16) + sext16(pair))
    REFLO          low16  = lo(S + field)              (its PAIR is ignored)
    REL24 / REL14  target = S + sext(field) + offset of the instruction in its section
    ADDR32         word   = S + field

S = address of the symbol; the rules were measured by linking patched test
objects with the game's linker. cl.exe stores "minus the instruction's offset"
in a branch field; an object written by tools/ltcg_obj.py (it has no @comp.id
symbol) keeps the zero of link.exe's listing there, so its branch target is
S + sext(field). A unit passes when every byte is equal: linked at the game's
addresses, its object IS the game's code. The unit's .pdata entries (function
address, flags word) are compared as well.

How a symbol gets its address:
  - a name of symbols.txt: that address. A name that occurs more than once
    (pooled constants, equal string literals, static functions of two files)
    passes when ONE of its addresses explains every reference a function makes
    to it. The hash of an anonymous namespace (?A0x<hash>, made from the source
    file's path) is not part of a name, as in objdiff's demangled comparison;
  - a symbol inside a function that is being checked (the function itself, a
    `$LN` case label): the function's game address plus its offset;
  - the object's own data (not a COMDAT) under a name symbols.txt has (a
    library file's table, `static float lbl_X = 1.0f;`): the linker would bind
    the code to this definition, so it must BE the game's symbol: the bytes the
    object defines must equal the image's at that address. The other symbols
    of the same data section lie at fixed distances from it (the code may reach
    them as `symbol + displacement`) and are compared with the image as well;
  - a symbol the object defines under a name symbols.txt does not have (a
    static table, a `$SG` string, a jump table): its address is solved from the
    image's REFHI/REFLO fields, every reference must agree on it, it must lie
    in a range splits.txt gives the unit, and the bytes the object defines
    there must equal the image's. Outside the unit's ranges the game refers to
    another unit's symbol: the definition is accepted only when that symbol
    starts at the address, is as large and has the same bytes (a literal that
    symbols.txt has under another name); a literal where the game has a larger
    table is reported as `symbol` even when its first bytes are equal;
  - an external name symbols.txt does not have is reported as `symbol`, with the
    symbol the game refers to.

Kinds of difference (column `kind` of --tsv):
  REFHI REFLO REL24 REL14 ADDR32   a relocation whose linked field is not the game's: the object
                                   asks for symbol+compiled_addend, the game has symbol+game_addend
                                   (game_target, and the symbol that lies there in `detail`)
  symbol       a name symbols.txt lacks, or a private definition of another unit's symbol
  unlocated    a private symbol whose references do not agree on one address
  bytes        bytes outside relocated fields differ      pdata   another .pdata word
  undefined    the object does not define a function of the unit       size / no-object / no-split

Exit status: 0 = every checked unit passes (or is listed in --known),
1 = at least one unit fails, 2 = usage or missing input.

--tsv FILE   write one row per difference (unit, function, offset, kind, symbol,
             compiled addend, game addend, game target, detail)
--known FILE units that are known to fail (first column of a TSV, `#` comments):
             they are reported but do not change the exit status; a unit of the
             list that passes is reported as stale
--object F   with one --unit: check F instead of the build's object (a candidate)
--rename COMPILED=ORIGINAL   (repeatable) a symbol of the object that has another
             name in symbols.txt
km/try.py runs the same check on a candidate that objdiff scores 100.0%
(Checker.check_function / check_unit) and prints an ADDENDS line.
"""
import argparse
import bisect
import json
import os
import re
import struct
import sys
from collections import Counter, defaultdict
from pathlib import Path

VERSION = "4D5308C9"
REL_ADDR32, REL_REL24, REL_REL14, REL_REFHI, REL_REFLO, REL_PAIR = 0x2, 0x6, 0x7, 0x10, 0x11, 0x12
REL_NAMES = {REL_ADDR32: "ADDR32", REL_REL24: "REL24", REL_REL14: "REL14", REL_REFHI: "REFHI",
             REL_REFLO: "REFLO", REL_PAIR: "PAIR"}
SYM_LINE = re.compile(r"^(\S+) = ([^\s:]+):0x([0-9A-Fa-f]+); // (.*)$")
# An anonymous namespace is mangled as ?A0x<hash of the source file's full path>: the hash of a
# rebuilt unit can never be the original's. objdiff compares the demangled names, which have no
# hash; so does this script.
ANON = re.compile(r"\?A0x[0-9a-fA-F]{8}@")


def plain(name):
    """A name without its anonymous-namespace hashes (None when it has none)."""
    return ANON.sub("?A0x@", name) if "?A0x" in name else None


OPCODES = {14: "addi", 15: "lis", 12: "addic", 24: "ori", 16: "bc", 18: "b", 32: "lwz", 33: "lwzu", 34: "lbz",
           35: "lbzu", 36: "stw", 37: "stwu", 38: "stb", 39: "stbu", 40: "lhz", 41: "lhzu", 42: "lha", 43: "lhau",
           44: "sth", 45: "sthu", 48: "lfs", 49: "lfsu", 50: "lfd", 51: "lfdu", 52: "stfs", 53: "stfsu",
           54: "stfd", 55: "stfdu", 58: "ld", 62: "std"}


def mnemonic(word, typ):
    if typ == REL_ADDR32:
        return ".4byte"
    op = word >> 26
    if op == 18:
        return "bl" if word & 1 else "b"
    if op == 58 and word & 3 == 2:
        return "lwa"
    return OPCODES.get(op, "op%d" % op)


def sext(value, bits):
    value &= (1 << bits) - 1
    return value - (1 << bits) if value >> (bits - 1) else value


def ha(value):
    return ((value + 0x8000) >> 16) & 0xFFFF


# ---------------------------------------------------------------- inputs

class Image:
    """The original executable (a plain PE): bytes by address."""

    def __init__(self, path):
        d = self.data = Path(path).read_bytes()
        pe = struct.unpack_from("<I", d, 0x3C)[0]
        nsec = struct.unpack_from("<H", d, pe + 6)[0]
        opt = struct.unpack_from("<H", d, pe + 20)[0]
        self.base = struct.unpack_from("<I", d, pe + 24 + 28)[0]
        self.sections = []
        o = pe + 24 + opt
        for _ in range(nsec):
            vsize, va, rsize, raw = struct.unpack_from("<IIII", d, o + 8)
            self.sections.append((self.base + va, vsize, raw, rsize))
            o += 40

    def read(self, addr, n):
        for va, vsize, raw, rsize in self.sections:
            if va <= addr and addr + n <= va + max(vsize, rsize):
                o = raw + addr - va
                chunk = self.data[o:min(o + n, raw + rsize)] if o < raw + rsize else b""
                return chunk + b"\0" * (n - len(chunk))       # behind the raw data: zero-filled
        return None


class GameSymbol:
    __slots__ = ("name", "section", "addr", "size", "kind")

    def __init__(self, name, section, addr, size, kind):
        self.name, self.section, self.addr, self.size, self.kind = name, section, addr, size, kind


class Symbols:
    """symbols.txt: every name with all its addresses, and the symbols in address order."""

    def __init__(self, path):
        self.by_name = defaultdict(list)
        self.by_plain = defaultdict(list)       # names with an anonymous namespace, hash removed
        rows = []
        for line in Path(path).read_text().split("\n"):
            m = SYM_LINE.match(line)
            if not m:
                continue
            attrs = dict(x.split(":", 1) for x in m.group(4).split() if ":" in x)
            s = GameSymbol(m.group(1), m.group(2), int(m.group(3), 16), int(attrs.get("size", "0"), 16),
                           attrs.get("type", ""))
            self.by_name[s.name].append(s)
            if plain(s.name):
                self.by_plain[plain(s.name)].append(s)
            rows.append(s)
        rows.sort(key=lambda s: (s.addr, -s.size))
        self.rows = rows
        self.addrs = [s.addr for s in rows]

    def named(self, name):
        """Every symbol of that name (anonymous-namespace hashes do not count)."""
        hits = self.by_name.get(name)
        if hits:
            return hits
        return self.by_plain.get(plain(name), []) if plain(name) else []

    def in_range(self, start, end):
        return self.rows[bisect.bisect_left(self.addrs, start):bisect.bisect_left(self.addrs, end)]

    def describe(self, addr):
        """`name+0xN` for the symbol that holds addr (the last one that starts at or before it)."""
        i = bisect.bisect_right(self.addrs, addr) - 1
        while i >= 0 and self.rows[i].kind == "label":
            i -= 1
        if i < 0:
            return "0x%08X" % addr
        s = self.rows[i]
        off = addr - s.addr
        return s.name + ("+0x%X" % off if off else "") + ("" if off < max(s.size, 1) else " (behind its end)")


def read_splits(path):
    """{unit name: [(section, start, end)]}"""
    out, unit = {}, None
    for line in Path(path).read_text().split("\n"):
        if line and not line[0].isspace():
            unit = line.rstrip(":") if line.endswith(":") else None
            if unit == "Sections":
                unit = None
            elif unit is not None:
                out[unit] = []
        elif unit is not None:
            m = re.match(r"\s+(\S+)\s+start:0x([0-9A-Fa-f]+) end:0x([0-9A-Fa-f]+)", line)
            if m:
                out[unit].append((m.group(1), int(m.group(2), 16), int(m.group(3), 16)))
    return out


class Coff:
    """A PowerPC COFF object (regular or /bigobj): sections with relocations, symbols."""

    def __init__(self, data):
        self.data = data
        sig1, sig2 = struct.unpack_from("<HH", data, 0)
        if sig1 == 0 and sig2 == 0xFFFF and len(data) >= 56:
            nsec, symptr, nsym = struct.unpack_from("<III", data, 44)
            sechdr, recsize, symfmt = 56, 20, "<IiHBB"
        else:
            nsec = sig2
            symptr, nsym, opt = struct.unpack_from("<IIH", data, 8)
            sechdr, recsize, symfmt = 20 + opt, 18, "<IhHBB"
        strtab = symptr + nsym * recsize
        self.symbols = []                 # index -> (name, value, section number, class) or None (aux)
        i = 0
        while i < nsym:
            o = symptr + i * recsize
            raw = data[o:o + 8]
            if raw[:4] == b"\0\0\0\0":
                off = struct.unpack_from("<I", raw, 4)[0]
                name = data[strtab + off:data.index(b"\0", strtab + off)].decode("latin-1")
            else:
                name = raw.rstrip(b"\0").decode("latin-1")
            value, sec, _typ, cls, naux = struct.unpack_from(symfmt, data, o + 8)
            self.symbols.append((name, value, sec, cls))
            self.symbols.extend([None] * naux)
            i += 1 + naux
        self.sections = [None]            # 1-based: (name, bytes, [(offset, symbol index, type)], flags)
        for s in range(nsec):
            o = sechdr + s * 40
            name, _vs, _va, rsize, rptr, relptr, _ln, nrel, _nl, flags = struct.unpack_from("<8sIIIIIIHHI", data, o)
            body = data[rptr:rptr + rsize] if rptr and not flags & 0x80 else b"\0" * rsize
            first = 0
            if nrel == 0xFFFF and flags & 0x01000000:      # the real count is in the first record
                nrel = struct.unpack_from("<I", data, relptr)[0]
                first = 1
            relocs = [struct.unpack_from("<IIH", data, relptr + r * 10) for r in range(first, nrel)]
            self.sections.append((name.rstrip(b"\0").decode("latin-1"), body, relocs, flags))
        # cl.exe stores "minus the instruction's offset" in a REL24 field; tools/ltcg_obj.py (and the
        # LTCG lane of km) copy link.exe's listing, where the field is zero. cl objects carry @comp.id.
        self.from_cl = any(s and s[0] == "@comp.id" for s in self.symbols)
        self.defined = defaultdict(list)  # name -> [symbol index] of symbols that have a section
        for idx, s in enumerate(self.symbols):
            if s and s[2] > 0:
                self.defined[s[0]].append(idx)

    def relocations(self, secno, start, end):
        """[(offset, type, symbol index, pair)] of a section's relocations in [start, end)."""
        out = []
        relocs = self.sections[secno][2]
        for k, (off, si, typ) in enumerate(relocs):
            if typ == REL_PAIR or not start <= off < end:
                continue
            pair = relocs[k + 1][1] if k + 1 < len(relocs) and relocs[k + 1][2] == REL_PAIR else 0
            out.append((off, typ, si, pair))
        return out

    def extent(self, idx):
        """Bytes a defined symbol owns: up to the next symbol of its section, or the section's end."""
        _, value, sec, _ = self.symbols[idx]
        end = len(self.sections[sec][1])
        for s in self.symbols:
            if s and s[2] == sec and value < s[1] < end and s[3] != 6:
                end = s[1]
        return end - value


# ---------------------------------------------------------------- the check

class Diff:
    __slots__ = ("unit", "function", "offset", "kind", "symbol", "compiled", "game", "target", "detail", "op")

    def __init__(self, unit, function, offset, kind, symbol="", compiled=None, game=None, target=None, detail="",
                 op=""):
        self.unit, self.function, self.offset, self.kind = unit, function, offset, kind
        self.symbol, self.compiled, self.game, self.target, self.detail = symbol, compiled, game, target, detail
        self.op = op

    @staticmethod
    def _hex(v):
        return "" if v is None else ("-0x%X" % -v if v < 0 else "+0x%X" % v)

    def row(self):
        return [self.unit, self.function, "0x%X" % self.offset, self.kind, self.symbol, self._hex(self.compiled),
                self._hex(self.game), "" if self.target is None else "0x%08X" % self.target, self.detail]

    def short(self):
        """`lwz +0x18: lbl_X+0x8 in the game, +0x0 compiled`"""
        if self.kind in ("REFHI", "REFLO", "REL24", "REL14", "ADDR32"):
            game = (self.symbol + self._hex(self.game)) if self.game is not None else "another address"
            where = self.detail.split(";")[0]
            if where in (game, self.symbol) or (self.game == 0 and where == self.symbol):
                where = ""
            return "%s +0x%X: %s in the game%s, %s compiled" % (
                self.op or self.kind, self.offset, game, " (= " + where + ")" if where else "",
                self._hex(self.compiled))
        return "%s +0x%X: %s: %s" % (self.kind, self.offset, self.symbol, self.detail)


class Checker:
    def __init__(self, repo, renames=None):
        self.repo = Path(repo)
        cfg = self.repo / "config" / VERSION
        exe = self.repo / "orig" / VERSION / "default.exe"
        if not exe.is_file():
            raise SystemExit(f"{exe} is missing: build once (the split writes it)")
        self.image = Image(exe)
        self.symbols = Symbols(cfg / "symbols.txt")
        self.splits = read_splits(cfg / "splits.txt")
        self._objects = None
        self.renames = renames or {}      # name in an object -> name in symbols.txt
        self.stats = Counter()
        self._text = None

    # -- units
    @property
    def objects(self):
        if self._objects is None:
            path = self.repo / "config" / VERSION / "objects.json"
            self._objects = json.loads(path.read_text())["game"]["objects"]
        return self._objects

    def unit_names(self, status="Matching"):
        return [name for name, entry in self.objects.items()
                if isinstance(entry, dict) and (status is None or entry.get("status") == status)]

    def find_unit(self, ref):
        if ref in self.objects:
            return ref
        hits = [n for n in self.objects if n.rsplit(".", 1)[0] == ref or n.rsplit("/", 1)[-1].rsplit(".", 1)[0] == ref]
        if len(hits) != 1:
            raise SystemExit(f"{ref}: {'no such unit' if not hits else 'ambiguous: ' + ', '.join(hits)}")
        return hits[0]

    def built_object(self, unit):
        return self.repo / "build" / VERSION / "src" / (unit.rsplit(".", 1)[0] + ".obj")

    # -- one unit
    def check_unit(self, unit, obj_path=None, only=None):
        """Differences of one unit ([] = it passes). only = a set of function names to restrict to."""
        path = Path(obj_path) if obj_path else self.built_object(unit)
        if not path.is_file():
            return [Diff(unit, "", 0, "no-object", detail=f"{path} does not exist")]
        try:
            coff = Coff(path.read_bytes())
        except (struct.error, ValueError, IndexError) as e:
            return [Diff(unit, "", 0, "no-object", detail=f"{path}: not a COFF object ({e})")]
        return _UnitRun(self, unit, coff, only).run()

    def check_function(self, obj_path, name, addr=None):
        """Differences of one function of a candidate object (km/try.py): `name` as symbols.txt has
        it (see renames), addr = its address when the name occurs more than once."""
        hits = [s for s in self.symbols.named(name) if addr is None or s.addr == addr]
        if not hits:
            return [Diff("", name, 0, "undefined", name, detail="symbols.txt has no such symbol")]
        coff = Coff(Path(obj_path).read_bytes())
        unit = self.unit_at(hits[0].addr)
        # the unit's ranges say which data the function may define itself (a jump table)
        ranges = self.splits[unit] if unit else [(".text", hits[0].addr, hits[0].addr + max(hits[0].size, 4))]
        return _UnitRun(self, unit or "", coff, {hits[0].name}, ranges).run()

    def unit_at(self, addr):
        if self._text is None:
            self._text = sorted((start, end, unit) for unit, rs in self.splits.items()
                                for section, start, end in rs if section == ".text")
        i = bisect.bisect_right(self._text, (addr, 0xFFFFFFFF, "")) - 1
        return self._text[i][2] if i >= 0 and self._text[i][0] <= addr < self._text[i][1] else None


class _UnitRun:
    """One unit: its object against the image."""

    def __init__(self, checker, unit, coff, only, ranges=None):
        self.c, self.unit, self.coff, self.only = checker, unit, coff, only
        self.ranges = ranges if ranges is not None else checker.splits.get(unit)
        self.diffs = []
        self.spans = defaultdict(list)   # section number -> [(start, end, game address of section offset 0)]
        self.solved = {}                 # symbol index -> address solved from the image (names symbols.txt lacks)

    def game_name(self, name):
        return self.c.renames.get(name, name)

    def run(self):
        c, coff = self.c, self.coff
        ranges = self.ranges
        if ranges is None:
            return [Diff(self.unit, "", 0, "no-split", detail="the unit has no entry in splits.txt")]
        work = []               # (game symbol, symbol index)
        for section, start, end in ranges:
            if section == ".pdata":
                continue        # no symbols of its own; checked from the functions (pdata)
            for g in c.symbols.in_range(start, end):
                if g.kind == "label" or not g.size:
                    continue
                if self.only is not None and g.name not in self.only:
                    continue
                names = {g.name, *[k for k, v in c.renames.items() if v == g.name]}
                cands = [i for name in names for i in coff.defined.get(name, [])]
                if not cands and plain(g.name):
                    cands = [i for name, idxs in coff.defined.items() if plain(name) == plain(g.name) for i in idxs]
                if not cands:
                    if g.kind == "function":
                        self.diffs.append(Diff(self.unit, g.name, 0, "undefined", g.name,
                                               detail="the object does not define this function of the unit"))
                    else:
                        # a jump table or constant the compiler names its own way: found through the
                        # code that refers to it (solve)
                        c.stats["unit data symbols without a definition of the same name"] += 1
                    continue
                work.append((g, cands[0]))
                c.stats["functions" if g.kind == "function" else "data symbols"] += 1
        # where each checked symbol lies in the game. Two functions of one section need not be as far
        # apart as in the game: a reference from one to the other is a relocation.
        for g, idx in work:
            _, value, sec, _ = coff.symbols[idx]
            self.spans[sec].append((value, value + g.size, g.addr - value))
        todo = list(work)
        self.solve(work, todo)
        for g, idx in todo:
            self.diffs += self.compare(g, idx)
        self.pdata(ranges, work)
        return self.diffs

    # -- symbol addresses
    def base_of(self, sec, offset):
        """Game address of a section's offset 0, as seen from the checked symbol that holds `offset`."""
        for start, end, base in self.spans.get(sec, ()):
            if start <= offset < end:
                return base
        return None

    def candidates(self, si):
        """Game addresses a symbol of the object may have ([] = unknown)."""
        name, value, sec, _ = self.coff.symbols[si]
        if sec > 0 and self.base_of(sec, value) is not None:
            return [self.base_of(sec, value) + value]
        if si in self.solved:
            return [self.solved[si]]
        return [s.addr for s in self.c.symbols.named(self.game_name(name))]

    def is_unnamed(self, si):
        """A symbol whose address only the image can give: symbols.txt does not have its name and
        it does not lie in a symbol that is being checked. Also the object's OWN data under a name
        of symbols.txt (`static float lbl_X = 1.0f;`): the linker would bind the code to that
        private copy, not to the game's lbl_X, unless the unit owns the address. A COMDAT
        (`__real@`, `??_C@`, a vtable) is no private copy: the linker folds it with its namesakes."""
        name, value, sec, _ = self.coff.symbols[si]
        if sec > 0 and self.base_of(sec, value) is not None:
            return False
        if not self.c.symbols.named(self.game_name(name)):
            return True
        if sec > 0:
            flags = self.coff.sections[sec][3]
            return not flags & 0x20 and not flags & 0x1000      # data, and not a COMDAT
        return False

    def words(self, g, value, sec, off, typ):
        """A relocated word as the game has it and as the object has it."""
        at = off if typ == REL_ADDR32 else off & ~3
        gw = self.c.image.read(g.addr - value + at, 4)
        cw = self.coff.sections[sec][1][at:at + 4]
        if gw is None or len(cw) < 4:
            return None, None
        return struct.unpack(">I", gw)[0], struct.unpack(">I", cw)[0]

    def solve(self, work, todo):
        """Addresses of the symbols symbols.txt has no name for, from the image's own fields:
        low16(S) from the REFLO fields, then S from the REFHI fields (or from an ADDR32 word). What
        the object defines there (a static table, a `$SG` string, a jump table) joins the symbols
        to compare, so its bytes, and the relocations in them, are checked like a function's."""
        queue = list(work)
        while queue:
            g, idx = queue.pop(0)
            _, value, sec, _ = self.coff.symbols[idx]
            refs = defaultdict(list)
            for off, typ, si, pair in self.coff.relocations(sec, value, value + g.size):
                if self.coff.symbols[si] and si not in self.solved and self.is_unnamed(si):
                    refs[si].append((off, typ, pair))
            for si, rs in refs.items():
                name, svalue, ssec, _ = self.coff.symbols[si]
                named = self.c.symbols.named(self.game_name(name))
                if named:
                    # the object's own copy of a symbol symbols.txt has: it must BE that symbol,
                    # i.e. hold the image's bytes at (one of) the name's address(es)
                    self.c.stats["own data under a name of symbols.txt, compared with the image"] += 1
                    if self.coff.sections[ssec][3] & 0x80:
                        self.solved[si] = named[0].addr
                        continue
                    best = None
                    for cand in named:
                        sub = GameSymbol(name, "", cand.addr, self.coff.extent(si), "object")
                        span = (svalue, svalue + sub.size, cand.addr - svalue)
                        self.spans[ssec].append(span)
                        n = len(self.compare(sub, si))
                        self.spans[ssec].remove(span)
                        if best is None or n < best[0]:
                            best = (n, sub, span)
                    self.solved[si] = best[1].addr
                    self.spans[ssec].append(best[2])
                    todo.append((best[1], si))
                    queue.append((best[1], si))
                    self.neighbours(si, best[2][2], todo, queue)
                    continue
                lows, highs, found = set(), [], set()
                for off, typ, pair in rs:
                    gw, cw = self.words(g, value, sec, off, typ)
                    if gw is None:
                        continue
                    if typ == REL_REFLO:
                        lows.add(((gw & 0xFFFF) - (cw & 0xFFFF)) & 0xFFFF)
                    elif typ == REL_REFHI:
                        highs.append((gw & 0xFFFF, ((cw & 0xFFFF) << 16) + sext(pair, 16)))
                    elif typ == REL_ADDR32:
                        found.add((gw - cw) & 0xFFFFFFFF)
                if len(lows) == 1:
                    low = next(iter(lows))
                    for h, add in highs:
                        # S + add has the high-adjusted half h and the low half (low + add) & 0xFFFF
                        found.add(((h << 16) + sext((low + add) & 0xFFFF, 16) - add) & 0xFFFFFFFF)
                at = rs[0][0] - value
                if len(found) != 1 or len(lows) > 1:
                    why = ("its references do not agree on one address" if len(found) > 1 or len(lows) > 1
                           else "only one half of its address is referenced, it cannot be located")
                    self.diffs.append(Diff(self.unit, g.name, at, "unlocated", name, detail=why))
                    continue
                addr = self.solved[si] = next(iter(found))
                if ssec <= 0:
                    # an external name symbols.txt does not have: the reference cannot be to the
                    # game's symbol under its own name
                    self.c.stats["external names symbols.txt lacks"] += 1
                    self.diffs.append(Diff(self.unit, g.name, at, "symbol", name, None, None, addr,
                                           f"{self.c.symbols.describe(addr)}; symbols.txt has no symbol "
                                           f"{self.game_name(name)}, the game refers to this one"))
                    continue
                if not any(section != ".pdata" and start <= addr < end for section, start, end in self.ranges):
                    # Its own definition of something outside the unit: the game refers to a symbol
                    # of another unit. That is the same object only when the game's symbol starts
                    # there and is as large (a literal symbols.txt has under another name, compared
                    # below); a literal that merely begins like a larger table is another object.
                    size = self.coff.extent(si)
                    there = [s for s in self.c.symbols.in_range(addr, addr + 1) if s.kind != "label"]
                    if not any(s.addr == addr and (s.size == size or (s.size + 3) & ~3 == size) for s in there):
                        self.c.stats["own definitions of symbols outside the unit"] += 1
                        self.diffs.append(Diff(self.unit, g.name, at, "symbol", name, None, None, addr,
                                               f"{self.c.symbols.describe(addr)}; the object defines {name} "
                                               f"itself (0x{size:X} bytes), the game refers to this symbol "
                                               f"outside the unit"))
                        continue
                    self.c.stats["literals symbols.txt has under another name"] += 1
                else:
                    self.c.stats["symbols of the object located in the unit's own data"] += 1
                if self.coff.sections[ssec][3] & 0x80:
                    continue                              # uninitialised: nothing to compare
                sub = GameSymbol(name, "", addr, self.coff.extent(si), "object")
                self.spans[ssec].append((svalue, svalue + sub.size, addr - svalue))
                todo.append((sub, si))
                queue.append((sub, si))
                self.neighbours(si, addr - svalue, todo, queue)

    def neighbours(self, si, base, todo, queue):
        """The object's own data section is laid out as one piece: once one of its symbols has an
        address, every other symbol of the section has one (the code may reach them as
        `anchor + displacement`, without a relocation of their own). They are compared too."""
        _, _, sec, _ = self.coff.symbols[si]
        if self.coff.sections[sec][3] & 0x1080:               # a COMDAT, or uninitialised
            return
        for idx, sym in enumerate(self.coff.symbols):
            if sym is None or idx == si or sym[2] != sec or sym[3] not in (2, 3):
                continue
            name, value, _, _ = sym
            if self.base_of(sec, value) is not None or self.coff.extent(idx) <= 0:
                continue
            sub = GameSymbol(name, "", base + value, self.coff.extent(idx), "object")
            self.spans[sec].append((value, value + sub.size, base))
            self.solved[idx] = sub.addr
            self.c.stats["other symbols of an anchored data section, compared with the image"] += 1
            todo.append((sub, idx))
            queue.append((sub, idx))

    # -- the comparison
    def expected(self, typ, word, pair, here, sbase, target):
        """The linked word of one relocation with its symbol at `target` (here = address of the
        word, sbase = address of its section's offset 0)."""
        if typ == REL_REFHI:
            return (word & 0xFFFF0000) | ha(target + ((word & 0xFFFF) << 16) + sext(pair, 16))
        if typ == REL_REFLO:
            return (word & 0xFFFF0000) | ((target + (word & 0xFFFF)) & 0xFFFF)
        origin = sbase if self.coff.from_cl else here
        if typ == REL_REL24:
            return (word & 0xFC000003) | ((target + sext(word & 0x03FFFFFC, 26) - origin) & 0x03FFFFFC)
        if typ == REL_REL14:
            return (word & 0xFFFF0003) | ((target + sext(word & 0xFFFC, 16) - origin) & 0xFFFC)
        if typ == REL_ADDR32:
            return (target + word) & 0xFFFFFFFF
        return None

    def addend(self, typ, word, pair, off):
        """The offset from its symbol that a relocation of the object asks for."""
        if typ == REL_REFHI:
            return ((word & 0xFFFF) << 16) + sext(pair, 16)
        if typ == REL_REFLO:
            return sext(word, 16)
        if typ == REL_REL24:
            return sext(word & 0x03FFFFFC, 26) + (off if self.coff.from_cl else 0)
        if typ == REL_REL14:
            return sext(word & 0xFFFC, 16) + (off if self.coff.from_cl else 0)
        return sext(word, 32)

    def compare(self, g, idx):
        """Differences between a symbol of the object, linked at g.addr, and the image."""
        c, coff = self.c, self.coff
        out = []
        _, value, sec, _ = coff.symbols[idx]
        body = coff.sections[sec][1]
        if value + g.size > len(body):
            out.append(Diff(self.unit, g.name, 0, "size", g.name, detail=(
                f"the game's symbol is 0x{g.size:X} bytes, the object has 0x{len(body) - value:X}")))
            return out
        game = c.image.read(g.addr, g.size)
        if game is None:
            out.append(Diff(self.unit, g.name, 0, "no-image", g.name, detail="its address is not in the image"))
            return out
        mine = bytearray(body[value:value + g.size])
        sbase = g.addr - value
        relocs = coff.relocations(sec, value, value + g.size)
        by_symbol = defaultdict(list)
        for r in relocs:
            by_symbol[r[2]].append(r)
        linked = []                         # offsets (in the symbol) of the words a relocation fills
        for si, rs in by_symbol.items():
            name = coff.symbols[si][0] if coff.symbols[si] else "?"
            cands = self.candidates(si)
            c.stats["relocations"] += len(rs)
            for off, typ, _, _ in rs:
                linked.append((off if typ == REL_ADDR32 else off & ~3) - value)
            if not cands:
                continue                    # reported by solve()
            if len(cands) > 1:
                c.stats["relocations to a name with several addresses"] += len(rs)
            best = None                     # the address that explains the most references
            for target in cands:
                res = []
                for off, typ, _, pair in rs:
                    at = (off if typ == REL_ADDR32 else off & ~3) - value
                    if at < 0 or at + 4 > len(mine):
                        res.append((off, typ, pair, at, None, None, None))
                        continue
                    word = struct.unpack_from(">I", mine, at)[0]
                    res.append((off, typ, pair, at, word, self.expected(typ, word, pair, sbase + at + value, sbase,
                                                                        target), struct.unpack_from(">I", game, at)[0]))
                key = (sum(1 for r in res if r[5] is not None and r[5] == r[6]), -abs(target - g.addr))
                if best is None or key > best[0]:
                    best = (key, target, res)
            _, target, res = best
            for off, typ, pair, at, word, want, gword in res:
                if word is None:
                    out.append(Diff(self.unit, g.name, max(at, 0), "reloc-type", name,
                                           detail="a relocation reaches over the end of the symbol"))
                    continue
                if self.addend(typ, word, pair, off) != 0:
                    c.stats["relocations with a non-zero addend in the object"] += 1
                if want is None:
                    out.append(Diff(self.unit, g.name, at, "reloc-type", name,
                                           detail=f"relocation type 0x{typ:X} is not handled"))
                elif want != gword:
                    out.append(self.explain(g, value, at, off, typ, pair, word, want, gword, name, si,
                                                   target, relocs, game, len(cands)))
        # every byte no relocation fills must be equal as it is
        for at in linked:
            if 0 <= at and at + 4 <= len(mine):
                mine[at:at + 4] = game[at:at + 4]
        if bytes(mine) != game:
            bad = [i for i in range(g.size) if mine[i] != game[i]]
            a = bad[0] & ~3
            out.append(Diff(self.unit, g.name, a, "bytes", g.name, detail=(
                f"{len(bad)} byte(s) outside relocated fields differ; first: game {game[a:a + 4].hex()}, "
                f"object {bytes(mine[a:a + 4]).hex()}")))
        return out

    def explain(self, g, value, at, off, typ, pair, word, want, gword, name, si, target, relocs, game, ncands):
        """One relocation whose linked word is not the game's: both addends and the game's target."""
        here = g.addr + at
        tgt = None
        if typ == REL_ADDR32:
            tgt = gword
        elif typ == REL_REL24:
            tgt = (here + sext(gword & 0x03FFFFFC, 26)) & 0xFFFFFFFF
        elif typ == REL_REL14:
            tgt = (here + sext(gword & 0xFFFC, 16)) & 0xFFFFFFFF
        else:
            # the other half: the nearest REFHI before a REFLO, the nearest REFLO after a REFHI
            other = REL_REFHI if typ == REL_REFLO else REL_REFLO
            mates = [r for r in relocs if r[2] == si and r[1] == other]
            mates.sort(key=lambda r: ((r[0] > off) if typ == REL_REFLO else (r[0] < off), abs(r[0] - off)))
            if mates:
                mword = struct.unpack_from(">I", game, (mates[0][0] & ~3) - value)[0]
                hi, lo = (gword, mword) if typ == REL_REFHI else (mword, gword)
                tgt = (((hi & 0xFFFF) << 16) + sext(lo, 16)) & 0xFFFFFFFF
        what = {REL_REFHI: "high half", REL_REFLO: "low half", REL_REL24: "branch", REL_REL14: "branch",
                REL_ADDR32: "word"}[typ]
        detail = self.c.symbols.describe(tgt) if tgt is not None else "the other half of the address was not found"
        detail += f"; {what}: game {gword:08x}, object linked {want:08x}"
        if ncands > 1:
            detail += f"; {name} has {ncands} addresses, the best fit 0x{target:08X} is used"
        return Diff(self.unit, g.name, at, REL_NAMES[typ], name, self.addend(typ, word, pair, off),
                    None if tgt is None else sext(tgt - target, 32), tgt, detail, mnemonic(gword, typ))

    def pdata(self, ranges, work):
        """The unit's .pdata entries (function address, flags word): the object must have the same."""
        c, coff = self.c, self.coff
        mine = {}
        for secno in range(1, len(coff.sections)):
            name, body, relocs, _ = coff.sections[secno]
            if name != ".pdata":
                continue
            for off, si, typ in relocs:
                if (typ == REL_ADDR32 and off % 8 == 0 and off + 8 <= len(body) and coff.symbols[si]
                        and struct.unpack_from(">I", body, off)[0] == 0):
                    mine[self.game_name(coff.symbols[si][0])] = struct.unpack_from(">I", body, off + 4)[0]
        checked = {g.addr: g for g, _ in work if g.kind == "function"}
        for section, start, end in ranges:
            if section != ".pdata":
                continue
            raw = c.image.read(start, end - start) or b""
            for o in range(0, len(raw) - 7, 8):
                faddr, word = struct.unpack_from(">II", raw, o)
                g = checked.get(faddr)
                if g is None:
                    continue
                c.stats[".pdata entries"] += 1
                if g.name not in mine:
                    self.diffs.append(Diff(self.unit, g.name, 0, "pdata", g.name,
                                           detail="the object has no .pdata entry for the function"))
                elif mine[g.name] != word:
                    self.diffs.append(Diff(self.unit, g.name, 0, "pdata", g.name,
                                           detail=f"game {word:08x}, object {mine[g.name]:08x}"))


# ---------------------------------------------------------------- command line

def read_known(path):
    out = set()
    for line in Path(path).read_text().split("\n"):
        line = line.split("#", 1)[0].strip()
        if line and not line.startswith("unit\t"):
            out.add(line.split("\t")[0])
    return out


def _check_many(repo, renames, units):
    """A worker of --all: {unit: differences} for the failing units, and the counters."""
    checker = Checker(repo, renames)
    found = {}
    for unit in units:
        d = checker.check_unit(unit)
        if d:
            found[unit] = d
    return found, checker.stats


def main():
    ap = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    ap.add_argument("--all", action="store_true", help="every unit with the given status")
    ap.add_argument("--unit", action="append", default=[], help="a unit name or stem (repeatable)")
    ap.add_argument("--status", default="Matching", help="with --all: the status to check (default Matching)")
    ap.add_argument("--object", help="with one --unit: this object instead of the build's")
    ap.add_argument("--rename", action="append", default=[], metavar="COMPILED=ORIGINAL")
    ap.add_argument("--tsv", help="write the differences to this file")
    ap.add_argument("--known", help="units known to fail (TSV, first column)")
    ap.add_argument("--repo", default=str(Path(__file__).resolve().parent.parent))
    ap.add_argument("-j", "--jobs", type=int, default=min(8, os.cpu_count() or 1), help="worker processes")
    ap.add_argument("-v", "--verbose", action="store_true", help="print the counters and every difference")
    args = ap.parse_args()
    if not args.all and not args.unit:
        ap.print_usage()
        return 2
    renames = dict(r.split("=", 1) for r in args.rename)
    checker = Checker(args.repo, renames)
    units = checker.unit_names(args.status) if args.all else [checker.find_unit(u) for u in args.unit]
    if args.object and len(units) != 1:
        print("--object needs exactly one --unit")
        return 2
    known = read_known(args.known) if args.known else set()
    diffs, failed = [], []
    jobs = max(1, min(args.jobs, len(units) // 500))
    if jobs > 1:
        import multiprocessing
        chunks = [units[i::jobs] for i in range(jobs)]
        with multiprocessing.Pool(jobs) as pool:
            parts = pool.starmap(_check_many, [(args.repo, renames, chunk) for chunk in chunks])
        by_unit = {}
        for found, stats in parts:
            by_unit.update(found)
            checker.stats.update(stats)
        results = [(u, by_unit.get(u, [])) for u in units]
    else:
        results = [(u, checker.check_unit(u, args.object)) for u in units]
    for unit, d in results:
        if d:
            failed.append(unit)
            diffs += d
    if args.tsv:
        with open(args.tsv, "w") as f:
            f.write("unit\tfunction\toffset\tkind\tsymbol\tcompiled_addend\tgame_addend\tgame_target\tdetail\n")
            for d in diffs:
                f.write("\t".join(d.row()) + "\n")
    shown = diffs if len(diffs) <= 40 or args.verbose else diffs[:40]
    for d in shown:
        print(f"{d.unit}: {d.function} {d.short()}")
    if len(shown) < len(diffs):
        print(f"... {len(diffs) - len(shown)} more (--tsv FILE writes all, -v prints all)")
    if args.verbose:
        for k, v in sorted(checker.stats.items()):
            print(f"  {v:8d} {k}")
    new = [u for u in failed if u not in known]
    stale = sorted(known & set(units) - set(failed))
    kinds = Counter(d.kind for d in diffs)
    print(f"check_addends: {len(units)} units, {len(units) - len(failed)} pass, {len(failed)} fail"
          + (f" ({len(failed) - len(new)} known)" if known else "")
          + (": " + ", ".join(f"{v} {k}" for k, v in kinds.most_common()) if kinds else ""))
    if stale:
        print("known failures that pass now (remove them from the list): " + " ".join(stale))
    return 1 if new else 0


if __name__ == "__main__":
    sys.exit(main())
