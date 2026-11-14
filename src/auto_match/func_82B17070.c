typedef struct BitSet_82B17070 {
    unsigned int words[1];
} BitSet_82B17070;

unsigned int fn_82B17070(BitSet_82B17070 *set, unsigned int start)
{
    unsigned int mask = ~0U << (start & 31);
    unsigned int i;
    for (i = start >> 5; i < 1; i++) {
        unsigned int x = set->words[i] & mask;
        if (x != 0) {
            return i * 32 + 31 - _CountLeadingZeros(x & ~(x - 1));
        }
        mask = ~0U;
    }
    return 0xffffffff;
}
