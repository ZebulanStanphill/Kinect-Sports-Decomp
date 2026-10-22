typedef struct Iface Iface;
typedef struct IfaceVtbl {
    void *pad[8];
    int (*m20)(Iface *self);
    void *pad24[8];
    void *(*m44)(void *ret, Iface *self);
} IfaceVtbl;
struct Iface {
    IfaceVtbl *vtbl;
};

extern void fn_82230300(void *p, int a, int b);
extern void fn_82240378(void *dst, void *src);
extern void fn_82864898(void *p);
extern void fn_828648B8(void *dst, void *src);

typedef struct Self {
    int f0;
    int f4;
    Iface *iface;
} Self;

int fn_82533AE0(Self *self)
{
    char a[32];
    char b[32];
    char c[48];

    if (self->iface->vtbl->m20(self->iface) < 0) {
        fn_828648B8(a, self->iface->vtbl->m44(c, self->iface));
        fn_82240378(b, a);
        fn_82230300(a, 1, 0);
        fn_82864898(c);
        fn_82230300(b, 1, 0);
        return 0x80004005;
    }
    return 0;
}
