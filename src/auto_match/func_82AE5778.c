void fn_82AE5778(unsigned __int64 *bits, unsigned int first, unsigned int last)
{
    unsigned __int64 *p = bits + (first >> 6);
    unsigned __int64 *lastWord = bits + (last >> 6);
    unsigned __int64 firstMask = (unsigned __int64)-1 << (first & 63);
    unsigned __int64 lastMask = ((unsigned __int64)2 << (last & 63)) - 1;
    unsigned __int64 *q;

    if (first >> 6 == last >> 6) {
        *p |= lastMask & firstMask;
    } else {
        *p |= firstMask;
        for (q = p + 1; q < lastWord; q++) {
            *q = 0xffffffffffffffff;
        }
        *lastWord |= lastMask;
    }
}
