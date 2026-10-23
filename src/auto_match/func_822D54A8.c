typedef struct SPtr {
    void *ptr;
    void *rep;
} SPtr;

typedef struct Ctx {
    char pad[0x118];
    char *f118;
} Ctx;

typedef struct Obj {
    void *vt;
    int base[19];
    int empty;
    Ctx *ctx;
    char *a;
    char *b;
    int sub[7];
    int v;
    SPtr sp;
} Obj;

typedef struct RefObj {
    void *vt;
    int uses;
    int weaks;
    Obj obj;
} RefObj;

extern void fn_822315A0(void *rep);
extern void fn_8223B688(void *sub, void *p);
extern void fn_822C70F0(Obj *o, void *a, void *b);
extern SPtr *fn_82365BD8(SPtr *dst, SPtr *src);
extern char lbl_821AD588[];
extern char lbl_821ADA94[];

RefObj *fn_822D54A8(RefObj *r, void *p2, void *p3, Ctx *ctx, void *p5, int *p6, SPtr *p7)
{
    Obj *o;
    SPtr tmp;
    SPtr *t;
    int v;

    r->uses = 1;
    r->vt = lbl_821AD588;
    r->weaks = 1;
    o = &r->obj;
    if (o != 0) {
        t = fn_82365BD8(&tmp, p7);
        v = *p6;
        fn_822C70F0(o, p2, p3);
        o->ctx = ctx;
        o->vt = lbl_821ADA94;
        o->a = ctx->f118;
        o->b = ctx->f118 + 0x24;
        fn_8223B688(o->sub, p5);
        o->v = v;
        fn_82365BD8(&o->sp, t);
        o->empty = v == 0;
        if (t->rep != 0) {
            fn_822315A0(t->rep);
        }
    }
    return r;
}
