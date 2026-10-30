class Svc_82CFFA88 {
public:
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
  virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
  virtual void v8(); virtual void v9(); virtual void v10();
  virtual int f2c(int a, int b);
};
class Obj_82CFFA88 {
public:
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
  virtual void v4();
  virtual void f14(int a, int b, int c, int d, int e);
};
struct Reg_82CFFA88 { char pad[0x10]; Svc_82CFFA88 *f10; };
extern "C" int fn_82CFF6C0(void);
extern "C" Reg_82CFFA88 *fn_82CE5410(void);

extern "C" void fn_82CFFA88(Obj_82CFFA88 *o, int a, int flags)
{
  if ((flags & 1) == 0) {
    int b = fn_82CFF6C0();
    int c = fn_82CE5410()->f10->f2c(a, b);
    o->f14(0, 0, a, b, c);
  }
}
