extern unsigned int _CountLeadingZeros64(unsigned __int64 value);

unsigned int fn_82AE56A8(unsigned __int64 *bits, unsigned int first, unsigned int last)
{
    unsigned __int64 *low;
    unsigned __int64 *high;
    unsigned __int64 *word;
    unsigned __int64 highMask;
    unsigned __int64 lowMask;
    unsigned __int64 value;

    low = &bits[first >> 6];
    high = &bits[last >> 6];
    highMask = ((unsigned __int64)2 << (last & 63)) - 1;
    lowMask = (unsigned __int64)-1 << (first & 63);
    if (first >> 6 == last >> 6) {
        lowMask &= highMask;
        highMask = lowMask;
    }
    value = *high & highMask;
    if (value != 0) {
        return (last & ~63) - _CountLeadingZeros64(value) + 63;
    }
    for (word = high - 1; word > low; word--) {
        if (*word != 0) {
            return (word - low) * 64 + (first & ~63) - _CountLeadingZeros64(*word) + 63;
        }
    }
    value = *low & lowMask;
    if (value != 0) {
        return (first & ~63) - _CountLeadingZeros64(value) + 63;
    }
    return -1;
}
