#!/usr/bin/env python3
"""Rename symbols in a compiled COFF object.

usage: coff_rename.py IN OUT OLD=NEW [OLD=NEW ...]

The build (build.ninja, written by configure.py) runs this on the object of
a unit that has "pool_aliases" in objects.json, after compiling it. The game's code was built with link-time
code generation, which put its floating-point literals into constant pools
(__pool@_N) instead of the __real@<bits> constants a single compile emits;
the original binary therefore refers to the pool's copy, which symbols.txt
names. With an alias such as

    "pool_aliases": {"__real@00000000": "ltcg_pool_0_0f"}

a unit's source can write the literal 0.0f, and its references to the
compiled __real@00000000 are renamed to the pool symbol it was linked
against. The same mechanism also maps a declared constant to a pooled
literal's name that no source can spell (e.g. "real_1_0f": "__real@3f800000").

Only symbol names change: the symbol table entries keep their index, so
relocations follow them. Each OLD must be a symbol of the object, and NEW
must not already be one. Regular and /bigobj objects are supported.
"""
import os
import struct
import sys
from typing import Dict, List, Tuple


def layout(data: bytes) -> Tuple[int, int, int]:
    """(symbol table offset, number of symbols, size of a symbol record)."""
    sig1, sig2 = struct.unpack_from("<HH", data, 0)
    if sig1 == 0 and sig2 == 0xFFFF and len(data) >= 56:
        # ANON_OBJECT_HEADER_BIGOBJ: symbol table pointer and count at 48 and 52
        symptr, nsym = struct.unpack_from("<II", data, 48)
        return symptr, nsym, 20
    symptr, nsym = struct.unpack_from("<II", data, 8)
    return symptr, nsym, 18


def symbols(data: bytes) -> List[Tuple[int, str]]:
    """[(offset of the record, name)] for every symbol record (aux records skipped)."""
    symptr, nsym, recsize = layout(data)
    strtab = symptr + nsym * recsize
    out = []
    i = 0
    while i < nsym:
        o = symptr + i * recsize
        raw = data[o:o + 8]
        if raw[:4] == b"\0\0\0\0":
            (off,) = struct.unpack_from("<I", raw, 4)
            end = data.index(b"\0", strtab + off)
            name = data[strtab + off:end].decode("latin-1")
        else:
            name = raw.rstrip(b"\0").decode("latin-1")
        out.append((o, name))
        i += 1 + data[o + recsize - 1]
    return out


def rename(data: bytes, mapping: Dict[str, str], strict: bool = True) -> bytes:
    """Return a copy of the object with symbols renamed. With strict=False, names
    the object does not have are skipped instead of refused."""
    symptr, nsym, recsize = layout(data)
    strtab = symptr + nsym * recsize
    (strsize,) = struct.unpack_from("<I", data, strtab)
    table = bytearray(data[strtab:strtab + strsize])
    out = bytearray(data[:strtab])
    names = symbols(data)
    present = {name for _, name in names}
    missing = sorted(set(mapping) - present)
    if not strict:
        mapping = {old: new for old, new in mapping.items() if old in present}
    elif missing:
        raise SystemExit(f"no symbol named {', '.join(missing)}")
    taken = sorted(new for old, new in mapping.items() if new in present and new not in mapping)
    if taken:
        raise SystemExit(f"already a symbol: {', '.join(taken)}")
    for o, name in names:
        new = mapping.get(name)
        if new is None:
            continue
        enc = new.encode("latin-1")
        if len(enc) <= 8:
            out[o:o + 8] = enc.ljust(8, b"\0")
        else:
            off = len(table)
            table += enc + b"\0"
            out[o:o + 8] = b"\0\0\0\0" + struct.pack("<I", off)
    struct.pack_into("<I", table, 0, len(table))
    return bytes(out) + bytes(table) + data[strtab + strsize:]


def main(argv: List[str]) -> int:
    if len(argv) < 3 or any("=" not in a for a in argv[2:]):
        print(__doc__.split("\n\n")[0], file=sys.stderr)
        return 2
    src, dst = argv[0], argv[1]
    mapping = dict(a.split("=", 1) for a in argv[2:])
    with open(src, "rb") as f:
        data = f.read()
    try:
        result = rename(data, mapping)
    except SystemExit as e:
        print(f"{src}: {e}", file=sys.stderr)
        return 1
    tmp = dst + ".tmp"
    with open(tmp, "wb") as f:
        f.write(result)
    os.replace(tmp, dst)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
