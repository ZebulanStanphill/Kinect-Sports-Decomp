#include "game/SwappedBlock_82A86CB0.h"

extern template struct SwappedBlock_82A86CB0<0xc>;

struct O_82A8B1E8;
struct VT_82A8B1E8 {
  char pad[0x10];
  unsigned char (*f10)(struct O_82A8B1E8 *, void *, int, void *);
};
struct O_82A8B1E8 { VT_82A8B1E8 *vt; };
struct L_82A8B1E8 { char out[8]; SwappedBlock_82A86CB0<0xc> b; char pad[4]; char a[12]; };

extern "C" {
void fn_82A8C620(void *, int, int, int);

int fn_82A8B1E8(O_82A8B1E8 *o, int x, int y, int z)
{
  L_82A8B1E8 L;
  if (!o->vt->f10(o, L.a, 0xc, L.out)) {
    return 0;
  }
  L.b.Set((const unsigned char *)L.a, 0xc);
  fn_82A8C620(&L.b, 0, 0x20, x);
  fn_82A8C620(&L.b, 0x20, 0x20, y);
  fn_82A8C620(&L.b, 0x40, 0x20, z);
  return 1;
}
}
