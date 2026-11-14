unsigned char fn_82AE54C0(unsigned int *bits, unsigned int first, unsigned int last)
{
    unsigned int *p = bits + (first >> 5);
    unsigned int *lastWord = bits + (last >> 5);
    unsigned int firstMask = -1 << (first & 31);
    unsigned int lastMask = (2 << (last & 31)) - 1;

    if (first >> 5 == last >> 5)
        return 0 != (*p & lastMask & firstMask);
    if ((*p & firstMask) != 0)
        return 1;
    for (p++; p < lastWord; p++) {
        if (*p != 0)
            return 1;
    }
    return (*lastWord & lastMask) != 0;
}
