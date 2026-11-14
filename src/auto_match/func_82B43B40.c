typedef struct BitSet_82B43B40 {
    unsigned int *bits;
    unsigned int count;
} BitSet_82B43B40;

void fn_82B43B40(BitSet_82B43B40 *set, const unsigned int *other)
{
    unsigned int *p = set->bits;
    unsigned int *end = p + ((set->count + 31) >> 5);

    for (; p < end; p++, other++)
        *p |= *other;
}
