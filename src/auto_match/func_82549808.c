typedef struct Ctx_82549808 {
    char pad0[0x18];
    unsigned int f18;
    int pad1c;
    unsigned int f20;
    char pad24[0xc];
    unsigned int f30;
} Ctx_82549808;

typedef struct Inner_82549808 {
    int handle;
} Inner_82549808;

typedef struct Sub_82549808 {
    char pad0[0x44];
    void *next;
    Inner_82549808 *inner;
} Sub_82549808;

typedef struct Obj_82549808 {
    char pad0[0x10];
    Sub_82549808 *sub;
} Obj_82549808;

extern Obj_82549808 *fn_8251F720(void *node);
extern void fn_8251FA58(Obj_82549808 *obj);
extern void fn_82555328(void *p, Ctx_82549808 *ctx, void *p2);
extern void *fn_82573EE0(Obj_82549808 *obj, int id);
extern void fn_825B05A0(Inner_82549808 *inner, Ctx_82549808 *ctx);
extern int fn_825B5718(void *p);
extern int fn_82837AC8(int h);
extern int fn_82837AE0(int h);

static int GetCount(Inner_82549808 *inner)
{
    if (fn_82837AE0(inner->handle) != 0) {
        return fn_82837AC8(inner->handle);
    }
    return 0;
}

void fn_82549808(void *node, void *p2, Ctx_82549808 *ctx)
{
    Obj_82549808 *obj;
    Inner_82549808 *inner;
    void *p;
    int n;
    int i;

    obj = fn_8251F720(node);
    ctx->f20 = ctx->f20 + 0x1c0;
    fn_825B05A0(obj->sub->inner, ctx);
    p = fn_82573EE0(obj, 0xc);
    if (p != 0) {
        fn_82555328(p, ctx, p2);
    }
    n = GetCount(obj->sub->inner);
    if (n != 0) {
        for (i = 0; i < 4; i++) {
            unsigned int size = n * 64;
            unsigned int t = ctx->f30;
            ctx->f20 = ctx->f20 + 0x94;
            ctx->f18 += size + 15 - ((size - 1) & 15);
            ctx->f30 = (unsigned int)((double)(t - 16) >= 0.0 ? (double)t : 16.0);
        }
    }
    if (fn_82573EE0(obj, 0) != 0) {
        ctx->f20 = fn_825B5718(fn_82573EE0(obj, 0)) + ctx->f20;
    }
    if (obj->sub->next != 0) {
        fn_82549808(obj->sub->next, p2, ctx);
    }
    fn_8251FA58(obj);
}
