#!/usr/bin/env python3
"""Fix-ups of the split objects that the splitter cannot do itself.

usage: split_fixups.py CONFIG_YML OUT_DIR        (run by build.ninja's split rule, after the splitter)

DS-form opcode bits.  `ld`, `ldu`, `lwa` (primary opcode 58) and `std`, `stdu` (62) keep a
sub-opcode in the low two bits of their 16-bit displacement field.  When such an instruction has
a low-half relocation (an `add_relocations` entry of type `l` in config.yml: scripts/ds_relocs.py
writes them), the splitter clears the whole field in the object, so `lwa r11, sym@l(r11)`
(E96B0002 + REFLO, as the compiler emits it) arrives as `ld` (E96B0000).  This script puts the two
bits back.  It reads them from the byte column of the unit's listing (OUT_DIR/asm/<unit>.s), which
keeps the linked bytes, and patches the instruction in OUT_DIR/obj/<unit>.obj.  `ld` and `std`
have sub-opcode 0 and need nothing.

The run is idempotent, and it fails (so the split fails) when an entry's instruction is not where
the listing and the object say it is.
"""
import os
import re
import struct
import sys

ENTRY = re.compile(r'^- source: 0x([0-9A-Fa-f]+)\s*$')
INSN = re.compile(r'^/\* ([0-9A-F]{8}) [0-9A-F]{8}  ([0-9A-F]{2}) ([0-9A-F]{2}) ([0-9A-F]{2}) ([0-9A-F]{2}) \*/')
FN = re.compile(r'^\.fn ("[^"]+"|[^,\s]+)')
REFLO = 0x11


def low_entries(config):
    """Addresses of the add_relocations entries of type l."""
    lines = open(config, encoding='utf-8').read().split('\n')
    return [int(m.group(1), 16) for m, kind in zip(map(ENTRY.match, lines), lines[1:] + [''])
            if m and kind.strip() == 'type: l']


def text_ranges(splits):
    """[(start, end, unit)] of the .text ranges in splits.txt."""
    out, unit = [], None
    for line in open(splits, encoding='utf-8'):
        if line[:1] not in ('\t', ' ', '\n') and line.rstrip().endswith(':'):
            unit = line.rstrip()[:-1]
        m = re.match(r'\s+\.text\s+start:0x([0-9A-Fa-f]+) end:0x([0-9A-Fa-f]+)', line)
        if m and unit:
            out.append((int(m.group(1), 16), int(m.group(2), 16), unit))
    return out


def listing_word(path, addr):
    """(function name, function start, linked word) of the instruction at addr in a listing."""
    fn, start = None, None
    for line in open(path, encoding='utf-8', errors='replace'):
        m = FN.match(line)
        if m:
            fn, start = m.group(1).strip('"'), None
            continue
        m = INSN.match(line)
        if not m:
            continue
        here = int(m.group(1), 16)
        if start is None:
            start = here
        if here == addr:
            return fn, start, int(''.join(m.group(2, 3, 4, 5)), 16)
    return None, None, None


def patch_object(path, fn, offset, word):
    """Set the instruction at fn+offset to `word` (its displacement field must be zero or already
    right). Returns True when the file changed."""
    data = bytearray(open(path, 'rb').read())
    _, nsec, _, symptr, nsym, opt, _ = struct.unpack_from('<HHIIIHH', data, 0)
    strtab = symptr + nsym * 18
    i = 0
    found = None
    while i < nsym:
        o = symptr + i * 18
        raw = bytes(data[o:o + 8])
        if raw[:4] == b'\0\0\0\0':
            s = strtab + struct.unpack_from('<I', raw, 4)[0]
            name = bytes(data[s:data.index(b'\0', s)]).decode('latin-1')
        else:
            name = raw.rstrip(b'\0').decode('latin-1')
        value, section = struct.unpack_from('<Ih', data, o + 8)
        if name == fn and section > 0:
            found = (section, value)
            break
        i += 1 + data[o + 17]
    if found is None:
        raise SystemExit('%s: no symbol %s' % (path, fn))
    sec = 20 + opt + (found[0] - 1) * 40
    size, rawptr, relptr, _, nrel = struct.unpack_from('<IIIIH', data, sec + 16)
    at = found[1] + offset
    if at + 4 > size:
        raise SystemExit('%s: %s+0x%X is outside its section' % (path, fn, offset))
    relocs = [struct.unpack_from('<IIH', data, relptr + 10 * k) for k in range(nrel)]
    if not any(r[0] == at and r[2] == REFLO for r in relocs):
        raise SystemExit('%s: %s+0x%X has no low-half relocation' % (path, fn, offset))
    have = struct.unpack_from('>I', data, rawptr + at)[0]
    if have == word:
        return False
    if have != word & 0xFFFF0000:
        raise SystemExit('%s: %s+0x%X is %08X, expected %08X' % (path, fn, offset, have, word & 0xFFFF0000))
    struct.pack_into('>I', data, rawptr + at, word)
    with open(path, 'wb') as out:
        out.write(data)
    return True


def main():
    if len(sys.argv) != 3:
        raise SystemExit(__doc__)
    config, out_dir = sys.argv[1], sys.argv[2]
    entries = low_entries(config)
    ranges = sorted(text_ranges(os.path.join(os.path.dirname(config), 'splits.txt')))
    restored = already = 0
    for addr in entries:
        unit = next((u for a, b, u in ranges if a <= addr < b), None)
        if unit is None:
            continue                                  # an auto-generated unit: no listing of its own to trust
        stem = os.path.splitext(unit)[0]
        fn, start, word = listing_word(os.path.join(out_dir, 'asm', stem + '.s'), addr)
        if word is None:
            raise SystemExit('split_fixups: 0x%08X is not in the listing of %s' % (addr, unit))
        if word >> 26 not in (58, 62) or not word & 3:
            continue
        if patch_object(os.path.join(out_dir, 'obj', stem + '.obj'), fn, addr - start, word & 0xFFFF0003):
            restored += 1
        else:
            already += 1
    print('split_fixups: %d low-half entries; DS-form opcode bits restored in %d instructions (%d already right)'
          % (len(entries), restored, already))


if __name__ == '__main__':
    main()
