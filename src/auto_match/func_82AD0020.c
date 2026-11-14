typedef struct BitSet_82AD0020 {
    unsigned __int64 words[4];
} BitSet_82AD0020;

unsigned int fn_82AD0020(BitSet_82AD0020 *set, unsigned int start, unsigned int *value)
{
    unsigned __int64 mask = ~0ULL << (start & 63);
    unsigned int i;
    for (i = start >> 6; i < 4; i++) {
        unsigned __int64 w = set->words[i];
        unsigned __int64 x = ~w & mask;
        if (x != 0) {
            unsigned int bit = 63 - _CountLeadingZeros64(x & ~(x - 1));
            *value = (unsigned int)(w >> (bit & ~3)) & 0xf;
            return i * 64 + bit;
        }
        mask = ~0ULL;
    }
    return 0xffffffff;
}
