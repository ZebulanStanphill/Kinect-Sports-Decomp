typedef struct Name {
    unsigned char s[16];
} Name;
typedef struct Sub Sub;
typedef struct SubVtbl {
    void *f0;
    void *f4;
    int (*getType)(Sub *);
} SubVtbl;
struct Sub {
    SubVtbl *vtbl;
};
typedef struct Thing Thing;
typedef struct Elem {
    char pad00[8];
    unsigned int f8;
    char pad0c[4];
    Sub sub;
    char pad14[0x20];
    Thing **items;
    unsigned int count;
} Elem;
typedef struct Ctx {
    char pad[0x78];
    char *data;
} Ctx;
typedef struct Src Src;
typedef struct SrcVtbl {
    char pad[0x2c];
    unsigned char (*lookup)(Src *, char **, char *, Name *);
} SrcVtbl;
struct Src {
    SrcVtbl *vtbl;
};
extern void fn_826824B0(Elem *e);
extern void fn_82696330(Name *n);
extern Elem *fn_82696958(Name *n, Ctx *ctx);
extern unsigned int fn_82696AD0(Thing *t, Ctx *ctx);
extern void fn_82696CB8(Name *n, unsigned int key);
extern void fn_826A2F80(Elem *e, Name *n);

int fn_8271FDB0(Ctx *ctx, Src *src, unsigned int key)
{
    Name name;
    Name name2;
    Elem *e;
    Thing *t;
    unsigned int i;
    unsigned int n;

    if (src == 0 || key == 0) {
        return 0;
    }
    name.s[0] = 0;
    if (src->vtbl->lookup(src, &ctx->data, ctx->data + 0x140, &name) &&
        (e = fn_82696958(&name, ctx)) != 0 && e->sub.vtbl->getType(&e->sub) == 7) {
        n = e->count;
        e->f8 = (e->f8 + 1) & 0x8fffffff;
        for (i = 0; i < n; i++) {
            t = e->items[i];
            if (t != 0 && fn_82696AD0(t, ctx) == key) {
                fn_826824B0(e);
                fn_82696330(&name);
                return 0;
            }
        }
        name2.s[0] = 0;
        fn_82696CB8(&name2, key);
        fn_826A2F80(e, &name2);
        fn_82696330(&name2);
        fn_826824B0(e);
    }
    fn_82696330(&name);
    return 1;
}
