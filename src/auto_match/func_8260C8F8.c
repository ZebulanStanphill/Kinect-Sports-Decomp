extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern void fn_827DDDA0(void *, void *);
extern void fn_827DEB38(void *);
extern unsigned char fn_827DEB60(void *);
extern int fn_827DEAA8(void *);
extern void fn_827DEA98(void *);
extern int fn_827D96A0(int);
extern void *fn_827DDDD8(void *, void *);
extern void fn_827DDFB8(void *, int);

typedef struct Vt_8260C8F8 {
    void *s0;
    int (*test)(void *, int);
} Vt_8260C8F8;

typedef struct Iface_8260C8F8 {
    Vt_8260C8F8 *vt;
} Iface_8260C8F8;

typedef struct Owner_8260C8F8 {
    char pad[0xc8];
    char set[0x1a0 - 0xc8];
    char crit[1];
} Owner_8260C8F8;

int fn_8260C8F8(Owner_8260C8F8 *o, Iface_8260C8F8 *f, void *out)
{
    struct { int key; union { char b[8]; __int64 a[1]; } it; } L;
    int v;
    RtlEnterCriticalSection(o->crit);
    fn_827DDDA0(L.it.b, o->set);
    fn_827DEB38(L.it.b);
    while (fn_827DEB60(L.it.b) == 0) {
        v = fn_827DEAA8(L.it.b);
        if (f->vt->test(f, v) != 0) {
            L.key = fn_827D96A0(v);
            if (fn_827DDDD8(out, &L.key) == 0) {
                fn_827DDFB8(out, v);
            }
        }
        fn_827DEA98(L.it.b);
    }
    RtlLeaveCriticalSection(o->crit);
    return 0;
}
