typedef struct Obj Obj;
typedef struct {
    void *f0;
    unsigned char (*isReady)(Obj *self);
    void *f8;
    void *fc;
    unsigned char (*read)(Obj *self, unsigned char *buf, int size, unsigned char *out);
} ObjVtbl;
struct Obj { ObjVtbl *vt; };

extern void fn_82A86CB0(unsigned char *ctx, unsigned char *buf, int size);
extern void fn_82A8C620(unsigned char *ctx, int a, int b, int *out);

int fn_82A873E0(Obj *o, int *out)
{
    unsigned char tmp[16];
    unsigned char buf[48];
    unsigned char ctx[56];

    *out = 0;
    if (!o->vt->isReady(o) || !o->vt->read(o, buf, 0x30, tmp)) {
        return 0;
    }
    fn_82A86CB0(ctx, buf, 0x30);
    fn_82A8C620(ctx, 0x160, 0x20, out);
    return 1;
}
