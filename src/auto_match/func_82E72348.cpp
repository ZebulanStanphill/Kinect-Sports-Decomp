extern "C" int fn_82E72040();
struct Target_82E72348 {
  virtual void v0();
  virtual void v1();
  virtual void v2();
  virtual void v3();
  virtual void notify(int a, int b, int c, int d);
};
struct Obj_82E72348 { char pad[0x68]; Target_82E72348 *t; };
extern "C" void fn_82E72348(Obj_82E72348 *p, int a, int b, int c, int d)
{
  int r = fn_82E72040();
  if (r < 0 && p->t != 0) {
    p->t->notify(a, b, c, d);
  }
}
