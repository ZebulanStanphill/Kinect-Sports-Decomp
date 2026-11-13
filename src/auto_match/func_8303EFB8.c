typedef struct Obj_8303EFB8 Obj_8303EFB8;

typedef struct Desc_8303EFB8 {
    int a;
    int b;
    int zero;
    int value;
    unsigned int index;
    unsigned char flag0;
    unsigned char flag1;
    unsigned char mode;
    char pad[9];
} Desc_8303EFB8;

typedef struct {
    void *s0;
    void *s1;
    void (*Release)(Obj_8303EFB8 *self);
    void *pad[4];
    int (*Submit)(Obj_8303EFB8 *self, Desc_8303EFB8 *desc);
} Vt_8303EFB8;

struct Obj_8303EFB8 {
    Vt_8303EFB8 *vt;
};

typedef struct Ctx_8303EFB8 {
    char pad0[0x10];
    int key;
    unsigned int bits;
    char pad18[0x10];
    unsigned char mode;
} Ctx_8303EFB8;

extern Obj_8303EFB8 *fn_82FAB9C0(int id, int key);
extern int fn_8302BBA8(Ctx_8303EFB8 *ctx);
extern int lbl_832642E0;

int fn_8303EFB8(Ctx_8303EFB8 *ctx, int a, int b)
{
    Obj_8303EFB8 *p;
    Desc_8303EFB8 d;
    int hr;

    p = fn_82FAB9C0(lbl_832642E0 + 4, ctx->key);
    if (p != 0) {
        d.mode = ctx->mode;
        d.index = (ctx->bits >> 3) & 0x1f;
        d.flag0 = 0;
        d.flag1 = 0;
        d.a = a;
        d.b = b;
        d.zero = 0;
        d.value = fn_8302BBA8(ctx);
        hr = p->vt->Submit(p, &d);
        p->vt->Release(p);
        return hr;
    }
    return 0xf;
}
