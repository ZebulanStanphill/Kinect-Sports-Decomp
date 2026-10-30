typedef struct Obj Obj;
typedef struct {
    void *a, *b;
    void (*release)(Obj *self);
} ObjVT;
struct Obj { ObjVT *vt; };

typedef struct {
    char pad[0x3c];
    Obj *obj;
    int pad40;
    void *mem;
} Ctx;

extern void fn_82E4FE40(void *p);

int fn_82E2C908(int a, int b, int c, Ctx *ctx)
{
    if (ctx->obj != 0) {
        ctx->obj->vt->release(ctx->obj);
        ctx->obj = 0;
    }
    fn_82E4FE40(ctx->mem);
    fn_82E4FE40(ctx);
    return 0;
}
