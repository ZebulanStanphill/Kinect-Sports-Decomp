#!/usr/bin/env python3
"""Regenerate docs/source_files.tsv: the functions whose original source file is known.

usage: python3 scripts/source_files.py

Rows with evidence "assert" are rebuilt: every source path string in the game's executable
(orig/4D5308C9/default.exe), found inside a data symbol of config/4D5308C9/symbols.txt, and
every function whose listing in build/4D5308C9/asm/ refers to that symbol (run the split
first). Rows with other evidence ("upstream", from km/libmatch.py identify) are kept from the
existing table, with their symbol and unit names refreshed. See docs/source_files.md.
"""
import bisect
import csv
import re
import struct
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
EXE = ROOT / "orig/4D5308C9/default.exe"
SYMBOLS = ROOT / "config/4D5308C9/symbols.txt"
SPLITS = ROOT / "config/4D5308C9/splits.txt"
ASM = ROOT / "build/4D5308C9/asm"
TABLE = ROOT / "docs/source_files.tsv"


def path_strings():
    """(virtual address, path) of every source path string in the executable."""
    d = EXE.read_bytes()
    pe = struct.unpack_from("<I", d, 0x3C)[0]
    count = struct.unpack_from("<H", d, pe + 6)[0]
    optional = struct.unpack_from("<H", d, pe + 20)[0]
    base = struct.unpack_from("<I", d, pe + 24 + 28)[0]
    sections = []
    for i in range(count):
        o = pe + 24 + optional + 40 * i
        _, va, raw_size, raw = struct.unpack_from("<IIII", d, o + 8)
        sections.append((raw, raw_size, va))
    for m in re.finditer(rb"[ -~]{4,}\.(?:cpp|c|h|inl)\0", d, re.I):
        text = m.group()[:-1].decode()
        p = re.search(r"([A-Za-z]:\\|\.\\|\.\.\\).*$", text)
        if not p:
            continue
        off = m.start() + p.start()
        for raw, raw_size, va in sections:
            if raw <= off < raw + raw_size:
                yield base + va + off - raw, p.group()


def main():
    data, text, name_at = [], {}, {}
    for line in SYMBOLS.read_text().splitlines():
        m = re.match(r"(\S+) = \.(\w+):0x([0-9A-Fa-f]+);.*?size:0x([0-9A-Fa-f]+)", line)
        if not m:
            continue
        if m.group(2) == "text":
            text[m.group(1)] = int(m.group(3), 16)
            name_at[int(m.group(3), 16)] = m.group(1)
        else:
            data.append((int(m.group(3), 16), int(m.group(4), 16), m.group(1)))
    data.sort()
    starts = [s[0] for s in data]
    path_of = {}
    for va, path in path_strings():
        i = bisect.bisect_right(starts, va) - 1
        if i >= 0 and data[i][0] <= va < data[i][0] + data[i][1]:
            path_of[data[i][2]] = path
    rows = {}
    for f in ASM.rglob("*.s"):
        fn = None
        for line in f.read_text(errors="replace").splitlines():
            m = re.match(r"\.fn (\S+),", line)
            if m:
                fn = m.group(1).strip('"')
                continue
            if fn and ("@ha" in line or "@l" in line):
                for q, plain in re.findall(r'"([^"]+)"@(?:ha|l)|(\b\w+)@(?:ha|l)', line):
                    name = q or plain
                    if name in path_of and fn in text:
                        rows[text[fn]] = (path_of[name], "assert")
    if TABLE.exists():
        for r in csv.DictReader(TABLE.open(), delimiter="\t"):
            if r["evidence"] != "assert":
                rows.setdefault(int(r["address"], 16), (r["original_file"], r["evidence"]))
    units, cur = [], None
    for line in SPLITS.read_text().splitlines():
        if line and not line[0].isspace() and line.endswith(":"):
            cur = line[:-1]
        m = re.match(r"\t\.text\s+start:0x([0-9A-F]+) end:0x([0-9A-F]+)", line)
        if m and cur:
            units.append((int(m.group(1), 16), int(m.group(2), 16), cur))
    units.sort()
    unit_starts = [u[0] for u in units]

    def unit_of(a):
        i = bisect.bisect_right(unit_starts, a) - 1
        return units[i][2] if i >= 0 and a < units[i][1] else ""

    out = ["address\tfunction\tunit\toriginal_file\tevidence"]
    for a in sorted(rows):
        path, evidence = rows[a]
        out.append(f"0x{a:08X}\t{name_at.get(a, '')}\t{unit_of(a)}\t{path}\t{evidence}")
    TABLE.write_text("\n".join(out) + "\n")
    print(f"{len(rows)} functions; {sum(e == 'assert' for _, e in rows.values())} from assertion paths")


if __name__ == "__main__":
    main()
