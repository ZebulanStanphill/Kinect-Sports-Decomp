void fn_82AE5550(unsigned int *bits, unsigned int first, unsigned int last)
{
    unsigned int *p = bits + (first >> 5);
    unsigned int *lastWord = bits + (last >> 5);
    unsigned int firstMask = -1 << (first & 31);
    unsigned int lastMask = (2 << (last & 31)) - 1;
    unsigned int *q;

    if (first >> 5 == last >> 5) {
        *p |= lastMask & firstMask;
    } else {
        *p |= firstMask;
        for (q = p + 1; q < lastWord; q++) {
            *q = 0xffffffff;
        }
        *lastWord |= lastMask;
    }
}
