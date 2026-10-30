typedef struct Obj Obj;
typedef struct {
    void *a;
    void (*addref)(Obj *self);
    void (*release)(Obj *self);
} ObjVT;
struct Obj { ObjVT *vt; };

typedef struct {
    char pad[0x54];
    char lock[0x184];
    Obj *obj;
} Ctx;

extern void fn_82E50CB8(void *p);
extern void fn_82E50F10(void *p);

int fn_82E2D638(Ctx *ctx, Obj *obj)
{
    fn_82E50CB8(ctx->lock);
    if (obj != 0)
        obj->vt->addref(obj);
    if (ctx->obj != 0)
        ctx->obj->vt->release(ctx->obj);
    ctx->obj = obj;
    fn_82E50F10(ctx->lock);
    return 0;
}
