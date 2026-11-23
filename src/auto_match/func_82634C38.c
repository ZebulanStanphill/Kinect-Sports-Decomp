static __forceinline void MarkBit(unsigned int *bits, unsigned int bit)
{
    bits[bit >> 5] |= 1 << (bit & 31);
}

void fn_82634C38(unsigned int *bits, unsigned int index, int skipFlagged, unsigned int *info)
{
    unsigned int first = info[0];
    unsigned int base;

    switch (first & 31) {
    case 1:
    case 16:
    case 17:
    case 19:
        base = index * 4;
        MarkBit(bits, ((first >> 26) & 3) + base);
        if ((info[2] & 0xc000) >= 0x4000) {
            MarkBit(bits, ((info[0] >> 28) & 3) + base);
        }
        if ((info[2] & 0xc000) >= 0x8000) {
            MarkBit(bits, (info[0] >> 30) + base);
        }
        break;
    case 0:
        if (!skipFlagged || !(info[1] & 0x40000000)) {
            MarkBit(bits, (first >> 30) + index * 4);
        }
        break;
    case 18:
        base = index * 4;
        MarkBit(bits, ((first >> 26) & 3) + base);
        MarkBit(bits, ((info[0] >> 28) & 3) + base);
        break;
    case 25:
    case 26:
        base = index * 4;
        MarkBit(bits, ((first >> 26) & 3) + base);
        MarkBit(bits, ((info[0] >> 28) & 3) + base);
        MarkBit(bits, (info[0] >> 30) + base);
        break;
    case 24:
        MarkBit(bits, ((first >> 26) & 3) + index * 4);
        break;
    }
}
