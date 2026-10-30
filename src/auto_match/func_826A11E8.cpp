struct Base_826A11E8 {
  virtual void p00(); virtual void p01(); virtual void p02(); virtual void p03(); virtual void p04(); virtual void p05();
  virtual void p06(); virtual void p07(); virtual void p08(); virtual void p09(); virtual void p0a(); virtual void p0b();
  virtual void p0c(); virtual void p0d(); virtual void p0e(); virtual void p0f(); virtual void p10(); virtual void p11();
  virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16();
  virtual void *get();
};
struct Obj_826A11E8 {
  virtual void s0(); virtual void s1(); virtual void s2();
  virtual void put(void *, int, int, int);
};
extern "C" void fn_826A11E8(Obj_826A11E8 *p, int a, int b, int c, int d)
{
  p->put(((Base_826A11E8 *)((char *)p - 0x68))->get(), b, c, d);
}
