/* Size of a node with `keyCount` 8-byte keys and `extraCount` words; the
 * header is 0x26 bytes for big nodes and 0x1a otherwise. The header must be
 * chosen with an if/else (a ternary swaps the add operands). */
unsigned int fn_827A8598(unsigned int keyCount, unsigned int extraCount, int big)
{
    unsigned int header;
    if (big)
        header = 0x26;
    else
        header = 0x1a;
    return ((keyCount * 8 + header + 7) & ~3) + extraCount * 4;
}
