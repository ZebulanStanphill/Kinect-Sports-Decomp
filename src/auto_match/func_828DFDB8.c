struct Obj_828DFDB8;
typedef struct {
    struct Obj_828DFDB8 *px;
    unsigned int rep;
} SP_828DFDB8;

typedef struct {
    int pad0;
    int pad4;
    SP_828DFDB8 *(*getParent)(SP_828DFDB8 *ret, struct Obj_828DFDB8 *self);
    int pad0c;
    void (*fn10)(struct Obj_828DFDB8 *self, void *w);
} Vt_828DFDB8;

typedef struct {
    char pad[8];
    unsigned int len;
} Ctx_828DFDB8;

typedef struct Obj_828DFDB8 {
    Vt_828DFDB8 *vt;
    int pad4;
    int key;
    Ctx_828DFDB8 *ctx;
} Obj_828DFDB8;

typedef struct {
    char pad[0x10];
    Ctx_828DFDB8 *node;
} Entry_828DFDB8;

extern void fn_822315A0(unsigned int rep);
extern void fn_8223C478(void *w, unsigned int a, int z);
extern unsigned int fn_828DF648(Ctx_828DFDB8 *ctx, int key);
extern Entry_828DFDB8 **fn_828DF6E0(int *out, Ctx_828DFDB8 *ctx, int *in);
extern void fn_828E0268(int *out, int key);
extern void fn_828E9DB8(void *w, unsigned int b, unsigned int a);
extern unsigned int fn_828EA268(unsigned int len);
extern char lbl_831D7088[];

void fn_828DFDB8(Obj_828DFDB8 *self, void *w, unsigned char flag)
{
    SP_828DFDB8 t58;
    SP_828DFDB8 t60;
    int t50;
    int t54;
    unsigned char has;
    Ctx_828DFDB8 *ctx;
    unsigned int a, b, len;
    int key;

    has = self->vt->getParent(&t58, self)->px != 0;
    if (t58.rep != 0)
        fn_822315A0(t58.rep);
    if (has) {
        fn_828DFDB8(self->vt->getParent(&t60, self)->px, w, 0);
        if (t60.rep != 0)
            fn_822315A0(t60.rep);
    }
    ctx = self->ctx;
    len = ctx->len;
    a = len != 0 ? len - 1 : 0;
    key = self->key;
    a = fn_828EA268(a);
    b = fn_828DF648(ctx, key);
    fn_8223C478(w, a, 0);
    fn_828E9DB8(w, b, a);
    self->vt->fn10(self, w);
    if (flag != 0) {
        Ctx_828DFDB8 *node;
        fn_828E0268(&t50, self->key);
        node = (*fn_828DF6E0(&t54, ctx, &t50))->node;
        if (node != 0) {
            len = node->len;
            a = len != 0 ? len - 1 : 0;
            a = fn_828EA268(a);
            b = fn_828DF648(node, (int)lbl_831D7088);
            fn_8223C478(w, a, 0);
            fn_828E9DB8(w, b, a);
        }
    }
}
