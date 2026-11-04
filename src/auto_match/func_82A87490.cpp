#include "game/SwappedBlock_82A86CB0.h"

extern template struct SwappedBlock_82A86CB0<0x30>;

struct Obj_82A87490;
struct VT_82A87490 {
    void *s0;
    unsigned char (*check)(struct Obj_82A87490 *);
    void *s2;
    void *s3;
    unsigned char (*read)(struct Obj_82A87490 *, void *buf, int n, void *ctx);
};
struct Obj_82A87490 {
    VT_82A87490 *vt;
};
extern "C" {
void fn_82A8C620(void *buf, int off, int n, unsigned int *out);

int fn_82A87490(Obj_82A87490 *param_1, unsigned int *param_2, unsigned int *param_3)
{
    char ctx[16];
    SwappedBlock_82A86CB0<0x30> work;
    char buf[0x30];

    *param_3 = 0;
    *param_2 = 0;
    if (param_1->vt->check(param_1) && param_1->vt->read(param_1, buf, 0x30, ctx)) {
        work.Set((const unsigned char *)buf, 0x30);
        fn_82A8C620(&work, 0, 0x20, param_2);
        fn_82A8C620(&work, 0x20, 0x20, param_3);
        return 1;
    }
    return 0;
}
}
