struct Obj_82D5FE18 {
  virtual int v0();
  virtual int v1();
  virtual int v2();
  virtual int v3();
  virtual int v4();
};
struct Args_82D5FE18 {
  int a;
  Obj_82D5FE18 **b;
  int c;
  int d;
  int e;
  int f;
  int g;
};
struct Self_82D5FE18 { int pad[4]; char sub[1]; };
extern "C" int fn_82D71478(void *, Args_82D5FE18 *);

extern "C" void fn_82D5FE18(Self_82D5FE18 *self, Obj_82D5FE18 **p2, int p3, int p4, int p5)
{
  Args_82D5FE18 s;

  s.f = ((int *)self)[2];
  s.a = p3;
  s.b = p2;
  s.e = p4;
  s.g = p5;
  s.d = (*p2)->v4();
  fn_82D71478(self->sub, &s);
}
