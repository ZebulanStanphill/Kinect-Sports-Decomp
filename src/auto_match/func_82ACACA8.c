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

unsigned int fn_82ACACA8(BitArray_82ACAD38 *array, unsigned int first, unsigned int last)
{
    unsigned int lastBit = last + 1;
    unsigned int shift = (first + 1) & 0x1f;
    unsigned int highMask;
    unsigned int lowMask;
    unsigned int lowBits;
    unsigned int *low;
    unsigned int *high;

    lowMask = 0xffffffff << shift;
    highMask = (2 << (lastBit & 0x1f)) - 1;
    low = GetWords(array) + ((first + 1) >> 5);
    high = GetWords(array) + (lastBit >> 5);
    lowBits = *low & lowMask;
    if (low == high) {
        return (lowBits & highMask) >> shift;
    }
    return ((*high & highMask) << (32 - shift)) | (lowBits >> shift);
}
