struct Obj_82D5F798 {
  virtual int v0();
  virtual int v1();
  virtual int v2();
  virtual int v3();
  virtual int v4();
};
struct Args_82D5F798 {
  int a;
  Obj_82D5F798 **b;
  int c;
  int d;
  int e;
  int f;
  int g;
};
struct Self_82D5F798 { int pad[4]; char sub[1]; };
extern "C" int fn_82D71478(void *, Args_82D5F798 *);

extern "C" void fn_82D5F798(Self_82D5F798 *self, int p2, Obj_82D5F798 **p3, int p4, int p5)
{
  Args_82D5F798 s;

  s.f = ((int *)self)[2];
  s.a = p2;
  s.b = p3;
  s.e = p4;
  s.g = p5;
  s.d = (*p3)->v4();
  fn_82D71478(self->sub, &s);
}
