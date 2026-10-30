struct O {
  virtual void s0();
  virtual void s1();
  virtual void s2();
  virtual void m(void *, void *);
};
extern "C" O *lbl_83156AA0;
extern "C" void *fn_82811400(void *, int);

extern "C" void fn_827D54C0(void *p)
{
  char buf[32];
  lbl_83156AA0->m(p, fn_82811400(buf, 0x8));
}
