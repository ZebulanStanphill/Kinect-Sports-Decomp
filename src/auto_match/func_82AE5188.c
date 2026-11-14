typedef struct BitSet_82AE5188 {
    unsigned __int64 words[16];
} BitSet_82AE5188;

unsigned int fn_82AE5188(BitSet_82AE5188 *set, unsigned int start, unsigned int *value)
{
    unsigned __int64 mask = (2ULL << (start & 63)) - 1;
    int i;
    for (i = start >> 6; i >= 0; i--) {
        unsigned __int64 w = set->words[i];
        unsigned __int64 x = ~w & mask;
        if (x != 0) {
            unsigned int bit = 63 - _CountLeadingZeros64(x);
            *value = (unsigned int)(w >> (bit & ~3)) & 0xf;
            return i * 64 + bit;
        }
        mask = ~0ULL;
    }
    return 0xffffffff;
}
