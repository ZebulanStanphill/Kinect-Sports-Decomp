extern void fn_8267C4C8(int);

typedef struct Vt_82753128 {
    void *s0, *s1, *s2;
    int (*get)(void *);
} Vt_82753128;

typedef struct Holder_82753128 {
    int pad0;
    int f4;
    int f8;
    int fc;
    int f10;
    struct { Vt_82753128 *vt; } *f14;
} Holder_82753128;

int fn_82753128(Holder_82753128 *o, int id)
{
    if (id == 0x13) {
        if (o->f4 != 0) fn_8267C4C8(o->f4);
        return o->f4;
    } else if (id == 0x15) {
        if (o->f8 != 0) fn_8267C4C8(o->f8);
        return o->f8;
    } else if (id == 0x14) {
        if (o->fc != 0) fn_8267C4C8(o->fc);
        return o->fc;
    } else if (id == 3) {
        if (o->f10 != 0) fn_8267C4C8(o->f10);
        return o->f10;
    }
    return o->f14->vt->get(o->f14);
}
