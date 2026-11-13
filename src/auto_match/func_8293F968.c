typedef struct Obj_8293F968 {
    int f0;
    int f4;
    char pad8[0x4c - 0x8];
    int f4c;
    int f50;
    char pad54[0x64 - 0x54];
    int f64;
    char pad68[0x7c - 0x68];
    int f7c;
    int f80;
    char pad84[0x138 - 0x84];
    int f138;
    int f13c;
    char pad140[0x150 - 0x140];
} Obj_8293F968;

extern void *fn_8265C940(unsigned int size, unsigned int flags);
extern void fn_8265C990(void *p, unsigned int flags);
extern int fn_828F5D48(void *stream, int mode);
extern void fn_828F8E78(void *stream);
extern int fn_8293F5D8(Obj_8293F968 *o, void *stream, void *b, int mode, int x, int y);
extern int fn_82936220(Obj_8293F968 *o, void *c);
extern void fn_829371F8(Obj_8293F968 *o);

static __forceinline Obj_8293F968 *construct(Obj_8293F968 *o)
{
    o->f0 = 0;
    o->f4 = 0;
    o->f64 = 0;
    o->f138 = 0;
    o->f13c = 0;
    o->f80 = 0;
    o->f7c = 1;
    o->f4c = 0;
    o->f50 = 0;
    return o;
}

int fn_8293F968(void *stream, void *b, void *c, int d, int e)
{
    Obj_8293F968 *o;
    void *m;
    int hr;

    m = fn_8265C940(0x150, 0x24810000);
    o = m != 0 ? construct((Obj_8293F968 *)m) : 0;
    if (o == 0) {
        hr = 0x8007000e;
    } else {
        o->f50 = e;
        o->f4c = d;
        hr = fn_828F5D48(stream, 2);
        if (hr >= 0) {
            hr = fn_8293F5D8(o, stream, b, 2, 0, 0);
            if (hr >= 0) {
                hr = fn_82936220(o, c);
            }
            fn_828F8E78(stream);
        }
        fn_829371F8(o);
        fn_8265C990(o, 0x24810000);
    }
    return hr;
}
