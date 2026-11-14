typedef struct Range_8272C128 {
    int start;
    int length;
} Range_8272C128;

static __forceinline unsigned char Contains(Range_8272C128 *range, int index)
{
    return index >= range->start && index <= range->start + range->length - 1;
}

int fn_8272C128(Range_8272C128 *range, int index)
{
    if (Contains(range, index)) {
        return 0;
    }
    if (index < range->start) {
        return range->start - index;
    }
    return range->length - index + range->start;
}
