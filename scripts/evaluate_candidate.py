#!/usr/bin/env python3
"""Compile one decomp candidate and report an objective, bounded objdiff result."""

import argparse
import json
import os
import re
import shutil
import subprocess
import sys
import tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
from lab_paths import LAB as DEFAULT_LAB
sys.path.insert(0, str(ROOT / "tools"))
import ltcg_obj  # noqa: E402

VC_DEFINES = ["/D_HAS_EXCEPTIONS=0", "/D_ALLOCA_S_MARKER_SIZE=8", "/D_JBLEN=64", "/D_JBTYPE=double"]


def symbol_name(address: int) -> str:
    """Return the configured name of the function at address."""
    suffix = f" = .text:0x{address:08X};"
    with open(ROOT / "config/4D5308C9/symbols.txt", encoding="utf-8") as symbols:
        for line in symbols:
            if suffix in line:
                return line.split(" = ", 1)[0]
    return f"fn_{address:08X}"


def grouped_object(address: int):
    """Original object of the grouped unit (auto_match/file_*.c) whose .text range
    contains the address, if any."""
    text = (ROOT / "config/4D5308C9/splits.txt").read_text(encoding="utf-8")
    for match in re.finditer(r"(?m)^auto_match/(file_[0-9A-F]+)\.(?:c|cpp):\n((?:\t.*\n)+)", text):
        rng = re.search(r"\.text\s+start:0x([0-9A-Fa-f]+)\s+end:0x([0-9A-Fa-f]+)", match.group(2))
        if rng and int(rng.group(1), 16) <= address < int(rng.group(2), 16):
            return ROOT / "build/4D5308C9/obj/auto_match" / f"{match.group(1)}.obj"
    return None


def unit_config(name: str) -> dict:
    """The objects.json entry of a unit, such as auto_match/func_82526C70.c."""
    objects = json.loads((ROOT / "config/4D5308C9/objects.json").read_text(encoding="utf-8"))
    for lib in objects.values():
        entry = lib["objects"].get(name)
        if entry is not None:
            return {"status": entry} if isinstance(entry, str) else entry
    raise SystemExit(f"{name} is not a unit in config/4D5308C9/objects.json")


def ltcg_compile(args, source: Path, compiler: Path, stem: str, work: Path):
    """Build candidate.obj with link-time code generation, as the build does for a
    unit with "ltcg_units" (tools/ltcg_obj.py)."""
    units = args.ltcg
    if not units:
        # default to the function's own configured list
        for suffix in (".c", ".cpp"):
            try:
                units = unit_config(f"auto_match/func_{stem}{suffix}").get("ltcg_units", [])
                break
            except SystemExit:
                continue
    others = []
    for name in units or []:
        entry = unit_config(name)
        flags = ["/nologo", "/c", "/TP" if name.endswith(".cpp") else "/TC", *entry.get("extra_cflags", []),
                 f"/I{ROOT / 'include'}"]
        if entry.get("vc_include"):
            if args.vc_include is None:
                raise SystemExit(f"{name} needs the Visual C++ 2010 headers; pass --vc-include")
            flags += [*VC_DEFINES, f"/I{args.vc_include.resolve()}"]
        others.append({"name": name, "source": str(ROOT / "src" / name), "cflags": flags})
    wrapper = None
    if sys.platform != "win32":
        wrapper = str(args.wibo_ltcg or os.environ.get("WIBO_LTCG") or os.environ.get("WIBO")
                      or shutil.which("wibo") or "wibo")
    spec = {
        "wrapper": wrapper,
        "cl": str(compiler),
        "link": str(compiler.with_name("link.exe")),
        "out": str(work / "candidate.obj"),
        "work": str(work / "ltcg"),
        "unit": {"name": source.name, "source": str(work / f"candidate{source.suffix}"),
                 "cflags": [*args.cflags, f"/I{ROOT / 'include'}", f"/I{source.parent}"]},
        "others": others,
    }
    names = [other["name"] for other in others]
    try:
        ltcg_obj.build(spec)
        return subprocess.CompletedProcess([], 0, stdout=""), names
    except ltcg_obj.LtcgError as error:
        return subprocess.CompletedProcess([], 1, stdout=str(error)), names


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("address", help="Jeff function start, for example 0x82400E48")
    parser.add_argument("source", type=Path, help="candidate C or C++ source that defines the function")
    parser.add_argument("--lab", type=Path, default=DEFAULT_LAB)
    parser.add_argument("--compiler", type=Path,
                        help="path to the Xbox 360 cl.exe (defaults to the local lab compiler)")
    parser.add_argument("--cflags", nargs="+", default=["/nologo", "/c", "/TC", "/O2"])
    parser.add_argument("--ltcg", nargs="*", metavar="UNIT",
                        help="build with link-time code generation together with these units (objects.json "
                        "names, as in ltcg_units); with none, the function's configured ltcg_units")
    parser.add_argument("--wibo-ltcg", type=Path,
                        help="wibo that can run link.exe /LTCG (default: $WIBO_LTCG, then as for the compiler)")
    parser.add_argument("--vc-include", type=Path,
                        help="Visual C++ 2010 VC/include, for --ltcg units marked vc_include")
    args = parser.parse_args()
    address = int(args.address, 16)
    stem = f"{address:08X}"
    symbol = symbol_name(address)
    original = ROOT / "build/4D5308C9/obj/auto_match" / f"func_{stem}.obj"
    if address == 0x82FA5958:
        original = ROOT / "build/4D5308C9/obj/compiler_probe/add.obj"
    if not original.is_file():
        # a function grouped with the rest of its source file: pass the whole
        # grouped source (src/auto_match/file_*.c) as the candidate
        original = grouped_object(address) or original
    if not original.is_file():
        parser.error(f"Missing isolated original object: {original}; run scripts/isolate_functions.py first")
    source = args.source.resolve(strict=True)
    runs = args.lab / "candidate-evals" / stem
    runs.mkdir(parents=True, exist_ok=True)
    work = Path(tempfile.mkdtemp(prefix="run-", dir=runs))
    candidate = f"candidate{source.suffix}"
    shutil.copyfile(source, work / candidate)
    compiler = (args.compiler or args.lab / "tools/compilers/X360/16.00.10224.00/cl.exe").resolve()
    if not compiler.is_file():
        parser.error(f"Xbox 360 compiler not found: {compiler}; pass --compiler /path/to/cl.exe")
    command = [str(compiler), *args.cflags, f"/I{ROOT / 'include'}", f"/I{source.parent}",
               "/Focandidate.obj", candidate]
    if sys.platform != "win32":
        wibo = os.environ.get("WIBO") or shutil.which("wibo-kinect") or shutil.which("wibo") or "wibo"
        command.insert(0, str(wibo))
    objdiff = os.environ.get("OBJDIFF_CLI") or shutil.which("objdiff-cli") or "objdiff-cli"
    report = {
        "address": f"0x{stem}",
        "symbol": symbol,
        "source": str(source),
        "compiler": str(compiler),
        "cflags": args.cflags,
    }
    if args.ltcg is not None:
        result, report["ltcg_units"] = ltcg_compile(args, source, compiler, stem, work)
    else:
        result = subprocess.run(
            command,
            cwd=work, text=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT,
        )
    report["compile_exit_code"] = result.returncode
    report["compiler_output"] = result.stdout[-4000:]
    if result.returncode == 0:
        diff_path = work / "diff.json"
        diff = subprocess.run(
            [str(objdiff), "diff", "-1", str(original), "-2", "candidate.obj",
             "-o", str(diff_path), "--format", "json", symbol],
            cwd=work, text=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT,
        )
        report["objdiff_exit_code"] = diff.returncode
        report["diff_path"] = str(diff_path)
        if diff.returncode == 0:
            data = json.loads(diff_path.read_text(encoding="utf-8"))
            target = next((s for s in data["left"]["symbols"] if s["name"] == symbol), None)
            candidate = next((s for s in data["right"]["symbols"] if s["name"] == symbol), None)
            report["target_size"] = target.get("size") if target else None
            report["candidate_size"] = candidate.get("size") if candidate else None
            report["code_match_percent"] = target.get("match_percent") if target else None
        else:
            report["objdiff_output"] = diff.stdout[-2000:]
    output = work / "result.json"
    output.write_text(json.dumps(report, indent=2) + "\n", encoding="utf-8")
    print(json.dumps(report, indent=2))
    return 0 if result.returncode == 0 and report.get("objdiff_exit_code") == 0 else 1


if __name__ == "__main__":
    sys.exit(main())
