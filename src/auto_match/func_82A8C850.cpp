#include "game/SwappedBlock_82A86CB0.h"

extern template struct SwappedBlock_82A86CB0<4>;

struct Obj;
struct ObjVtbl {
  void *f0;
  unsigned char (*f4)(Obj *self);
  void *f8;
  void *fc;
  unsigned char (*f10)(Obj *self, void *buf, int n, unsigned int *out);
};
struct Obj { ObjVtbl *vt; };

extern "C" {
int fn_82A8C620(void *a, int b, int c, unsigned int *out);

unsigned int fn_82A8C850(int param_1, Obj *param_2)
{
  struct { unsigned int buf; SwappedBlock_82A86CB0<4> ctx; unsigned int result; } l;

  if (param_2->vt->f4(param_2) && param_2->vt->f10(param_2, &l.buf, 4, &l.result)) {
    l.ctx.Set((const unsigned char *)&l.buf, 4);
    fn_82A8C620(&l.ctx, 0, 0x20, &l.result);
    return l.result;
  }
  return 0;
}
}
