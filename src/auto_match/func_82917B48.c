typedef struct Base_82917B48 { int p0, p4; int f8; } Base_82917B48;
typedef struct Obj_82917B48 {
    Base_82917B48 *base;
    int p4;
    unsigned short f8;
    unsigned short fa;
    unsigned short fc;
    unsigned short pe;
    int p10;
    unsigned f14;
    int p18;
    int (*cb)(void *, int, unsigned, int, int);
    int f20;
} Obj_82917B48;
int fn_82917B48(Obj_82917B48 *o, void *a, int idx)
{
    int hr;
    int stride;
    if (o->f14 != 0) {
        stride = 1;
        if (o->f8 != 0) stride = 4;
        if (o->cb == 0) return 0x80004005;
        hr = o->cb(a, o->fa + idx, stride * idx * 4 + o->base->f8 + o->f14, o->f20, o->fc);
        if (hr < 0) return hr;
    }
    return 0;
}
