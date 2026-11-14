typedef struct BitSet_82AE5340 {
    unsigned int words[1];
} BitSet_82AE5340;

/* Reverse search; 32-bit sibling of Matching fn_82AE5188, mirror of fn_82AE52C8. */
unsigned int fn_82AE5340(BitSet_82AE5340 *set, unsigned int start, unsigned int *value)
{
    unsigned int mask = (2u << (start & 31)) - 1;
    int i;
    for (i = start >> 5; i >= 0; i--) {
        unsigned int w = set->words[i];
        unsigned int x = ~w & mask;
        if (x != 0) {
            unsigned int bit = 31 - _CountLeadingZeros(x);
            *value = (w >> (bit & ~3)) & 0xf;
            return i * 32 + bit;
        }
        mask = ~0u;
    }
    return 0xffffffff;
}
