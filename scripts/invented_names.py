#!/usr/bin/env python3
"""Regenerate docs/invented_names.tsv: member functions whose class and method names were invented.

usage: python3 scripts/invented_names.py

A class whose real name is not known is named <Role>_<address> (CONTRIBUTING.md, "C++ classes").
A function that only matches as a member of such a class has a mangled symbol name in
config/4D5308C9/symbols.txt that carries the invented class name and an invented method name.
This lists every such symbol, so nobody takes those names for the game's own. See
docs/invented_names.md.
"""
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
SYMBOLS = ROOT / "config/4D5308C9/symbols.txt"
TABLE = ROOT / "docs/invented_names.tsv"
# ?Method@Class_<address>@@...: a member function of a placeholder class;
# ??0Class_<address>@@..., ??1..., ??_9...: one of its special members
MEMBER = re.compile(r"^\?(?:(\w+)@|\?(_?[0-9A-Z]))([A-Za-z][A-Za-z0-9]*_[0-9A-F]{8})@@")
SPECIAL = {"0": "(constructor)", "1": "(destructor)", "_9": "(virtual call thunk)",
           "_G": "(scalar deleting destructor)", "_E": "(vector deleting destructor)"}


def main():
    rows = []
    for line in SYMBOLS.read_text().splitlines():
        m = re.match(r"(\S+) = \.text:0x([0-9A-Fa-f]+);", line)
        if not m:
            continue
        n = MEMBER.match(m.group(1))
        if n:
            method = n.group(1) or SPECIAL.get(n.group(2), f"(operator ?{n.group(2)})")
            rows.append((int(m.group(2), 16), n.group(3), method, m.group(1)))
    rows.sort()
    out = ["address\tclass\tmethod\tsymbol"]
    out += [f"0x{a:08X}\t{c}\t{meth}\t{s}" for a, c, meth, s in rows]
    TABLE.write_text("\n".join(out) + "\n")
    print(f"{len(rows)} member functions with invented names")


if __name__ == "__main__":
    main()
