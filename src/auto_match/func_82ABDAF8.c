typedef struct Obj_82ABDAF8 {
    unsigned int pad0;
    unsigned int pad4;
    unsigned int flags;
} Obj_82ABDAF8;

static __forceinline unsigned char InRange_82ABDAF8(unsigned int v, unsigned int lo, unsigned int hi)
{
    return v >= lo && v <= hi;
}

unsigned char fn_82ABDAF8(Obj_82ABDAF8 *p)
{
    unsigned int v = (p->flags >> 7) & 0x7f;

    return InRange_82ABDAF8(v, 1, 0x52) || InRange_82ABDAF8(v, 0x60, 0x66) || v == 0x7e;
}
