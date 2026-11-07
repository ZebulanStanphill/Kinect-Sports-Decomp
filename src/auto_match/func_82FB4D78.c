typedef struct Obj_82FB4D78 Obj_82FB4D78;
typedef struct Sub_82FB4D78 Sub_82FB4D78;
typedef struct Ctx_82FB4D78 Ctx_82FB4D78;

struct Sub_82FB4D78 {
    int pad0[4];
    int data10[6];
    int field28;
};

struct Ctx_82FB4D78 {
    int pad0[14];
    Sub_82FB4D78 *sub;
};

typedef struct {
    void *s0;
    void *s1;
    void (*Release)(Obj_82FB4D78 *self);
    void *pad[85];
    int (*Method)(Obj_82FB4D78 *self, Ctx_82FB4D78 *ctx, int a, void *b, int *out);
} Vt_82FB4D78;

struct Obj_82FB4D78 {
    Vt_82FB4D78 *vt;
};

extern Obj_82FB4D78 *fn_82FAB9C0(int key);
extern int lbl_832642E0;

int fn_82FB4D78(Ctx_82FB4D78 *ctx, int unused, int *out)
{
    Obj_82FB4D78 *p;
    int hr = 0;

    *out = hr;
    p = fn_82FAB9C0(lbl_832642E0 + 4);
    if (p != 0) {
        hr = p->vt->Method(p, ctx, ctx->sub->field28, &ctx->sub->data10, out);
        p->vt->Release(p);
    }
    return hr;
}
