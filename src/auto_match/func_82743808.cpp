class Sub_82743808 {
public:
  virtual void s0();
  virtual void s1();
  virtual void s2();
  virtual void s3();
  virtual void s4();
  virtual void s5();
  virtual void s6();
  virtual void s7();
  virtual void s8();
  virtual void s9();
  virtual void f28(unsigned int *, unsigned int, char *, char *);
};
struct Obj_82743808 {
  char pad[0x10];
  Sub_82743808 sub;
};

extern "C" void fn_82743808(Obj_82743808 *o, unsigned int *p2, char *p3)
{
  char c0;
  char c1;
  c0 = 0;
  o->sub.f28(p2, *p2 + 0x1ec, p3, &c0);
  c1 = 0;
  o->sub.f28(p2, *p2 + 0x1f0, p3 + 0x10, &c1);
}
