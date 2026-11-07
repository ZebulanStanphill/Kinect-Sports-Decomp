typedef unsigned __int64 U64;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);

typedef struct Inner_83053588 {
    char pad0[0x84];
    unsigned f84;
} Inner_83053588;

typedef struct Bits_83053588 {
    unsigned a : 2;
    unsigned b : 1;
    unsigned c : 1;
    unsigned d : 1;
    unsigned e : 2;
    unsigned f : 1;
    unsigned rest : 24;
} Bits_83053588;

typedef struct Obj_83053588 {
    char pad0[0x18];
    char f18[8];
    unsigned f20;
    char pad24[0x14];
    char cs[0x28];
    Inner_83053588 *f60;
    char pad64[4];
    unsigned f68;
    unsigned f6c;
    char pad70[4];
    Bits_83053588 f74;
    char pad78[8];
    U64 f80;
    U64 f88;
    char pad90[0xc];
    unsigned f9c;
    char pada0[0x10];
    unsigned fb0;
} Obj_83053588;

extern void fn_83050528(Obj_83053588 *p, int a);
extern unsigned fn_83053F30(Obj_83053588 *p, unsigned a, U64 off, unsigned size,
                            unsigned flag, int *count, unsigned char *done);

unsigned fn_83053588(Obj_83053588 *p, unsigned param_2, void **param_3)
{
    Bits_83053588 fl;
    unsigned remaining;
    unsigned avail;
    unsigned size;
    unsigned char fits;
    U64 off;
    unsigned r;
    int count;
    unsigned char done;

    *param_3 = p->f18;
    RtlEnterCriticalSection(p->cs);
    fl = p->f74;
    if (fl.d == 0 && (unsigned char)fl.f != 0) {
        if ((p->f9c & 0x1000000) != 0) {
            p->f9c &= 0xfeffffff;
            p->f80 = (U64)(unsigned)(p->f6c * p->f20) + p->f88;
        }
        remaining = p->f68 - p->fb0;
        avail = p->f60->f84;
        off = (U64)(unsigned)(p->f6c * p->f20) + p->f88 + p->fb0;
        fits = remaining <= avail;
        size = avail;
        if (fits) {
            size = remaining;
        }
        r = fn_83053F30(p, param_2, off, size, fl.b, &count, &done);
        if (r != 0) {
            p->fb0 += count;
            if (done != 0 || fits != 0) {
                fn_83050528(p, 0);
            }
        }
        RtlLeaveCriticalSection(p->cs);
        return r;
    }
    RtlLeaveCriticalSection(p->cs);
    return 0;
}
