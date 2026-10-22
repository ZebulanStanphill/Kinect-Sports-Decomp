extern void *fn_8265C940(unsigned int size, unsigned int flags);

typedef struct {
    char pad0[8];
    unsigned int type;
    char padC[4];
    int f10;
    int f14;
    char pad18[0x3c];
    unsigned int f54;
    void *buf;
    char pad5C[0xc];
    int count;
} Obj;

long fn_82924FA0(Obj *a, Obj *b)
{
    if (a->type != b->type && a->type != 4) {
        a->f54 = b->type;
    }
    if (a->f54 != 0 || a->f10 != 0) {
        a->buf = fn_8265C940(a->count << 4, 0x24810000);
        if (a->buf == 0) {
            return 0x8007000e;
        }
    }
    if (a->f10 != 0 && b->f10 != 0) {
        b->f14 = 1;
        a->f14 = 1;
    }
    return 0;
}
