/* Next used slot after `prev`: scans the 256-bit slot mask (words at 0x40) up to `count`;
   an index past the mask counts as used. Returns -1 when none is left. */
typedef struct Obj_82D3E630 {
    int pad0[3];
    int count;
    int pad10[12];
    int bits[8];
} Obj_82D3E630;

static __forceinline int IsUsed_82D3E630(Obj_82D3E630 *o, unsigned int i)
{
    if (i >= 0x100)
        return 1;
    if (o->bits[i >> 5] & (1 << (i & 31)))
        return 1;
    return 0;
}

int fn_82D3E630(Obj_82D3E630 *o, int prev)
{
    int i;
    for (i = prev + 1; i < o->count; i++) {
        if (IsUsed_82D3E630(o, i))
            return i;
    }
    return -1;
}
