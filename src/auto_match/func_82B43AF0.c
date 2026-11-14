typedef struct BitSet_82B43AF0 {
    unsigned int *bits;
    unsigned int count;
} BitSet_82B43AF0;

void fn_82B43AF0(BitSet_82B43AF0 *set, const unsigned int *other)
{
    unsigned int *p = set->bits;
    unsigned int *end = p + ((set->count + 31) >> 5);

    for (; p < end; p++, other++)
        *p &= *other;
}
