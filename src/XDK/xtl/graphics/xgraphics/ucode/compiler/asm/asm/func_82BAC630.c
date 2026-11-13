typedef struct Ctx {
    char pad0[0x59c];
    void (*release)(void *h, void *obj);
    int pad5a0;
    void *handle;
    int pad5a8;
    void *x5ac;
} Ctx;

typedef struct Obj {
    Ctx *ctx;
    void *x4;
    void *x8;
    int padc[2];
    void *x14;
    int pad18[7];
    void *x34;
    int pad38[11];
    void *x64;
    void *x68;
    int pad6c;
    void *x70;
    void *x74;
    void *x78;
} Obj;

extern void fn_82B7BEB0(void *a, void *b);
extern void fn_82BC6DC0(void *p, int flag);
extern void *lbl_83223EC0;

void fn_82BAC630(Obj *o)
{
    if (o->x70 != 0)
        fn_82BC6DC0(o->x70, 1);
    if (o->x74 != 0)
        fn_82BC6DC0(o->x74, 1);
    if (o->x78 != 0)
        fn_82BC6DC0(o->x78, 1);
    if (o->x68 != 0)
        fn_82BC6DC0(o->x68, 1);
    if (o->x64 != 0)
        fn_82BC6DC0(o->x64, 1);
    o->ctx->release(o->ctx->handle, o->x34);
    o->ctx->release(o->ctx->handle, o->x4);
    o->ctx->release(o->ctx->handle, o->x8);
    if (o->x14 != 0)
        o->ctx->release(o->ctx->handle, o->x14);
    if (lbl_83223EC0 != 0) {
        fn_82B7BEB0(o->ctx->x5ac, lbl_83223EC0);
        lbl_83223EC0 = 0;
    }
}
