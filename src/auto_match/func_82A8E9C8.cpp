#include "game/SwappedBlock_82A86CB0.h"

extern template struct SwappedBlock_82A86CB0<0x30>;

struct O_82A8E9C8;
struct VT_82A8E9C8 {
  int pad0;
  unsigned char (*f4)(struct O_82A8E9C8 *);
  int pad8, padc;
  unsigned char (*f10)(struct O_82A8E9C8 *, void *, int, void *);
};
struct O_82A8E9C8 { VT_82A8E9C8 *vt; };
struct Def_82A8E9C8 { int pad; int v; int p2, p3; };
extern "C" {
void fn_82A8C620(void *, int, int, int *);
void fn_82A8DB80(void *, int *, void *, int);

int fn_82A8E9C8(Def_82A8E9C8 **pp, O_82A8E9C8 *o, int *key)
{
  struct { Def_82A8E9C8 def; SwappedBlock_82A86CB0<0x30> b60; char b90[0x30]; } L;
  Def_82A8E9C8 *p, *t;
  t = *pp;
  L.def.v = 5;
  p = t ? t : &L.def;
  if (o->vt->f4(o) && o->vt->f10(o, L.b90, 0x30, &L.def)) {
    L.b60.Set((const unsigned char *)L.b90, 0x30);
    fn_82A8C620(&L.b60, 0, 0x20, key);
    fn_82A8DB80(p, key + 1, &L.b60, 0x20);
    return 1;
  }
  return 0;
}
}
