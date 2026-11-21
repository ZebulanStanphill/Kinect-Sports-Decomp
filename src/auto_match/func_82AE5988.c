extern unsigned int _CountLeadingZeros(unsigned int value);

unsigned int fn_82AE5988(unsigned int *bits, unsigned int first, unsigned int last)
{
    unsigned int *low;
    unsigned int *high;
    unsigned int *word;
    unsigned int highMask;
    unsigned int lowMask;
    unsigned int value;
    unsigned int base;

    low = &bits[first >> 5];
    high = &bits[last >> 5];
    highMask = (2 << (last & 31)) - 1;
    lowMask = 0xFFFFFFFF << (first & 31);
    if (first >> 5 == last >> 5) {
        lowMask &= highMask;
        highMask = lowMask;
    }
    value = *high & highMask;
    if (value != 0) {
        base = last & ~31;
    } else {
        for (word = high - 1; word > low; word--) {
            if (*word != 0) {
                return (word - low) * 32 + (first & ~31) - _CountLeadingZeros(*word) + 31;
            }
        }
        value = *low & lowMask;
        if (value == 0) {
            return -1;
        }
        base = first & ~31;
    }
    return base - _CountLeadingZeros(value) + 31;
}
