extern "C" void fn_82CE3F80(void);
extern "C" void fn_82CE3FE8(void);

struct Inner_82D81870 {
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
  virtual int f14();
};
struct Obj_82D81870 {
  char pad0[8];
  Inner_82D81870 *inner;
  char pad1[0xb0];
  int depth;
};

extern "C" int fn_82D81870(Obj_82D81870 *p)
{
  fn_82CE3F80();
  p->depth = p->depth + 1;
  int r = p->inner->f14();
  p->depth = p->depth - 1;
  fn_82CE3FE8();
  return r;
}
