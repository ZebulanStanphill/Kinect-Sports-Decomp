struct Sub {
  int x04;
  int x08;
  int x0c;
  int x10;
};

struct Obj {
  int vtbl;
  Sub sub;
  int x14;
  int x18;
  int x1c;
  unsigned char x20;
  int x24, x28, x2c, x30, x34, x38, x3c, x40, x44, x48, x4c, x50, x54, x58, x5c, x60, x64, x68;
  float x6c;
  unsigned char x70;
  __forceinline Obj(const Obj &o) : sub(o.sub), x14(o.x14), x18(o.x18), x1c(o.x1c), x20(o.x20), x24(o.x24), x28(o.x28), x2c(o.x2c), x30(o.x30), x34(o.x34), x38(o.x38), x3c(o.x3c), x40(o.x40), x44(o.x44), x48(o.x48), x4c(o.x4c), x50(o.x50), x54(o.x54), x58(o.x58), x5c(o.x5c), x60(o.x60), x64(o.x64), x68(o.x68), x6c(o.x6c), x70(o.x70) {}
};

extern "C" Obj *fn_8275D2B8(Obj *d, Obj *s)
{
  d->Obj::Obj(*s);
  return d;
}
