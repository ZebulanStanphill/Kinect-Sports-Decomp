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

extern unsigned int fn_82ACACA8(BitArray_82ACAD38 *array, unsigned int first, unsigned int last);

/* Searches downwards from index for the last clear bit; returns its position (0xffffffff when none)
   and stores the four-bit group that holds it. */
unsigned int fn_82ACAF10(BitArray_82ACAD38 *array, unsigned int index, unsigned int *group)
{
    unsigned int mask = (2 << ((index + 1) & 0x1f)) - 1;
    unsigned int *word = GetWords(array) + ((index + 1) >> 5);
    unsigned int *words = GetWords(array);
    unsigned int wordIndex = index >> 5;
    unsigned int clear;
    unsigned int bit;
    unsigned int base;
    unsigned int first;

    while (word >= words) {
        clear = mask & ~*word;
        if (clear != 0) {
            bit = 31 - _CountLeadingZeros(clear);
            if (bit == 0) {
                wordIndex--;
                bit = 32;
            }
            bit = bit - 1;
            base = wordIndex << 5;
            first = (bit & ~3) + base;
            *group = fn_82ACACA8(array, first, first + 3);
            return base + bit;
        }
        word--;
        mask = 0xffffffff;
        wordIndex--;
    }
    return 0xffffffff;
}
