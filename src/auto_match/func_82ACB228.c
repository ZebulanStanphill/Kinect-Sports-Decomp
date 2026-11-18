typedef struct BitData_82ACB228 {
    unsigned int count; /* 0x0: number of words */
    unsigned int words[1];
} BitData_82ACB228;

typedef struct BitSet_82ACB228 {
    unsigned int bits; /* tagged: inline bits when bit 0 is set, else BitData pointer */
} BitSet_82ACB228;

typedef struct Allocator_82ACB228 {
    void *ctx;           /* 0x0 */
    BitSet_82ACB228 set; /* 0x4 */
} Allocator_82ACB228;

extern int fn_82ACAE18(BitSet_82ACB228 *set, unsigned int pos, unsigned int *bits);
extern int fn_82ACAF10(BitSet_82ACB228 *set, unsigned int pos, unsigned int *bits);

static __forceinline unsigned int Capacity(BitSet_82ACB228 *set)
{
    if ((~set->bits & 1) == 0)
        return 0x1f;
    return ((BitData_82ACB228 *)set->bits)->count * 0x20 - 1;
}

static __forceinline unsigned int Pack(unsigned int found, unsigned int mask)
{
    return ((found >> 2) << 4) | (mask & 0xf);
}

unsigned int fn_82ACB228(Allocator_82ACB228 *self, unsigned int start, unsigned int count, int step)
{
    unsigned int pos = start * 4;
    unsigned int bits;
    int found;
    unsigned int result;

    for (;;) {
        if (step > 0)
            found = fn_82ACAE18(&self->set, pos, &bits);
        else
            found = fn_82ACAF10(&self->set, pos + 3, &bits);
        if (found == -1)
            return -1;
        if (count == 1) {
            result = Pack(found, 1 << (found & 3));
            break;
        }
        if ((unsigned int)((0x4A2932934DCULL >> bits >> bits >> bits) & 7) >= count) {
            result = Pack(found, ~bits);
            break;
        }
        pos = (found + step) & ~3;
        if (pos + count > Capacity(&self->set))
            return -1;
    }
    return result;
}
