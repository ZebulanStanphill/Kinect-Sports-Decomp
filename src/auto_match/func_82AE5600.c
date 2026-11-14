/* Is any bit in [first, last] set? */
unsigned char fn_82AE5600(unsigned __int64 *words, unsigned int first, unsigned int last)
{
    unsigned __int64 *p = &words[first >> 6];
    unsigned __int64 *end = &words[last >> 6];
    unsigned __int64 low = ~0ULL << (first & 63);
    unsigned __int64 high = (2ULL << (last & 63)) - 1;
    if (first >> 6 == last >> 6)
        return (*p & high & low) != 0;
    if ((*p & low) != 0)
        return 1;
    for (p++; p < end; p++) {
        if (*p != 0)
            return 1;
    }
    if ((*end & high) != 0)
        return 1;
    return 0;
}
