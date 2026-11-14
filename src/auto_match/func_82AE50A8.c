typedef struct BitSet_82AE50A8 {
    unsigned __int64 words[16];
} BitSet_82AE50A8;

unsigned int fn_82AE50A8(BitSet_82AE50A8 *set, unsigned int start)
{
    unsigned __int64 mask = ~0ULL << (start & 63);
    unsigned int i;
    for (i = start >> 6; i < 16; i++) {
        unsigned __int64 x = ~set->words[i] & mask;
        if (x != 0) {
            return i * 64 + 63 - _CountLeadingZeros64(x & ~(x - 1));
        }
        mask = ~0ULL;
    }
    return 0xffffffff;
}
