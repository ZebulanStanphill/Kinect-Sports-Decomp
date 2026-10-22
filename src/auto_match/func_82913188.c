typedef unsigned int size_t;
extern void *memcpy(void *d, const void *s, size_t n);
extern void *fn_8265C940(int size, int tag);
extern void fn_8265C990(void *p, int tag);
extern void fn_82904138(void *o, int a, int b, void *buf);
extern int fn_82909950(void *o, void *a, void *b, void *c, void *d, void *buf);
extern int fn_8290AAE0(void *o, void *a, void *b, void *c, void *d, void *buf);
extern int fn_82913308(void *o, void *a, int z);

typedef struct { char pad[0x1c]; int count; } Info;
typedef struct {
    char pad0[8];
    int a8;
    int ac;
    char pad10[0x5c - 0x10];
    void *p5c;
    char pad60[0x70 - 0x60];
    unsigned int flags;
} Desc;
typedef struct {
    int pad0;
    Info *info;
    Desc *desc;
    char padc[0x18 - 0xc];
    void *src;
    char pad1c[0x4c - 0x1c];
    int f4c;
    int f50;
    int f54;
    int f58;
    int f5c;
    int f60;
} Obj;

int fn_82913188(Obj *o, void *a, void *b, void *c, void *d)
{
    int hr;
    int sa;
    int sb;
    int size;
    void *buf;
    int s58, s5c, s60;

    if (b != 0 && (d != b || (o->desc->flags & 0x10000000) == 0)) {
        hr = fn_82913308(o, b, 0);
        if (hr < 0) {
            return hr;
        }
        if (o->f50 != 0 || o->f54 != 0) {
            return 0;
        }
        b = 0;
    }
    sa = o->desc->a8;
    size = o->info->count * 4;
    sb = o->desc->ac;
    buf = fn_8265C940(size, 0x24810000);
    if (buf == 0) {
        hr = 0x8007000e;
    } else {
        memcpy(buf, o->src, size);
        if (o->desc->p5c != 0) {
            s58 = o->f58;
            s5c = o->f5c;
            s60 = o->f60;
            o->f58 = 1;
            o->f5c = 0;
            o->f60 = 0;
            hr = fn_82909950(o, a, b, c, d, buf);
            o->f58 = s58;
            o->f5c = s5c;
            o->f4c = 0;
            o->f50 = 0;
            o->f54 = 0;
            o->f60 = s60;
            if (hr >= 0) {
                goto done;
            }
            fn_82904138(o, sa, sb, buf);
        }
        hr = fn_8290AAE0(o, a, b, c, d, buf);
        hr = hr < 0 ? hr : 0;
    }
done:
    fn_8265C990(buf, 0x24810000);
    return hr;
}
