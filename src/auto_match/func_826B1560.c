typedef struct { unsigned char type; unsigned char pad[7]; } Value_826B1560;
typedef struct Obj_826B1560 Obj_826B1560;
typedef struct Iface_826B1560 Iface_826B1560;
struct Iface_826B1560 {
    struct VT_826B1560 *vt;
};
struct VT_826B1560 {
    void *s[11];
    unsigned char (*f2c)(Iface_826B1560 *, int, int, Value_826B1560 *);
};
struct Obj_826B1560 {
    int pad0[2];
    unsigned refs;
    int padc;
    Iface_826B1560 iface;
};
typedef struct {
    int pad[0xa8];
    struct { int pad[4]; Iface_826B1560 iface; } *f2a0;
} Ctx_826B1560;
extern Obj_826B1560 *fn_826B14D8(Ctx_826B1560 *c, int idx);
extern Obj_826B1560 *fn_82696958(Value_826B1560 *v, int o);
extern void fn_82696330(Value_826B1560 *v);
extern void fn_826824B0(Obj_826B1560 *o);

Obj_826B1560 *fn_826B1560(Ctx_826B1560 *c, int o, int idx)
{
    Obj_826B1560 *a;
    Obj_826B1560 *b;
    Obj_826B1560 *n, *n2;
    Value_826B1560 v;
    Iface_826B1560 *i;
    unsigned char ok;

    a = fn_826B14D8(c, idx);
    if (a != 0)
        a->refs = (a->refs + 1) & 0x8fffffff;
    n = a;
    i = &c->f2a0->iface;
    v.type = 0;
    ok = i->vt->f2c(i, o + 0x78, (int)c + (idx + 2) * 4, &v);
    if (ok != 0) {
        b = fn_82696958(&v, o);
        if (b != 0) {
            b->refs = (b->refs + 1) & 0x8fffffff;
            i = &b->iface;
            ok = i->vt->f2c(i, o + 0x78, (int)c + 0x130, &v);
            if (ok != 0) {
                n2 = fn_82696958(&v, o);
                if (n2 != 0)
                    n2->refs = (n2->refs + 1) & 0x8fffffff;
                if (a != 0)
                    fn_826824B0(a);
                n = n2;
            }
            fn_826824B0(b);
        }
    }
    fn_82696330(&v);
    if (n != 0)
        fn_826824B0(n);
    return n;
}
