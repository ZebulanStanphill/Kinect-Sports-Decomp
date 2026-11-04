#include "game/SwappedBlock_82A86CB0.h"

extern template struct SwappedBlock_82A86CB0<0x30>;

struct Obj;
struct ObjVtbl {
    void *f0;
    unsigned char (*isReady)(Obj *self);
    void *f8;
    void *fc;
    unsigned char (*read)(Obj *self, unsigned char *buf, int size, unsigned char *out);
};
struct Obj { ObjVtbl *vt; };

extern "C" {
void fn_82A8C620(void *ctx, int a, int b, int *out);

int fn_82A873E0(Obj *o, int *out)
{
    unsigned char tmp[16];
    unsigned char buf[48];
    SwappedBlock_82A86CB0<0x30> ctx;
    char pad[8];

    *out = 0;
    if (!o->vt->isReady(o) || !o->vt->read(o, buf, 0x30, tmp)) {
        return 0;
    }
    ctx.Set(buf, 0x30);
    fn_82A8C620(&ctx, 0x160, 0x20, out);
    return 1;
}
}
