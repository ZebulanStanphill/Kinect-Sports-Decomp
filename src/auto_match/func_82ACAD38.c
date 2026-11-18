typedef struct BitArray_82ACAD38 {
    unsigned int header; /* 0x0: buffer pointer, or low bit set for inline words */
} BitArray_82ACAD38;

static __forceinline unsigned int *GetWords(BitArray_82ACAD38 *array)
{
    if ((~array->header & 1) != 0) {
        return (unsigned int *)(array->header + 4);
    }
    return (unsigned int *)array;
}

void fn_82ACAD38(BitArray_82ACAD38 *array, unsigned int first, unsigned int last, unsigned int value)
{
    unsigned int shift;
    unsigned int bits;
    unsigned int *low;
    unsigned int *high;

    shift = (first + 1) & 0x1f;
    bits = value << shift;
    low = GetWords(array) + ((first + 1) >> 5);
    high = GetWords(array) + ((last + 1) >> 5);
    *low |= bits;
    if (low != high) {
        *high |= value >> (32 - shift);
    }
}
