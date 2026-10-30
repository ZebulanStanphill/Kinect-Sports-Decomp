struct Iface_823831D8 { virtual void s0(); virtual void Release(); };
struct Sub_823831D8 {
  char pad[0x10]; Iface_823831D8 *f10;
  void Release() { if (f10 != 0) f10->Release(); }
};
struct Obj_823831D8 { char pad[0x38]; Sub_823831D8 s; };
struct SP_823831D8 { void *first; unsigned second; };
extern "C" {
void fn_822315A0(unsigned);
void *fn_822D7FE0(void *);
void fn_822D79D8(SP_823831D8 *, void *);
void *fn_8265C9E0(unsigned);
void fn_828E2B28(Obj_823831D8 *, SP_823831D8 *);
void fn_828E9D40(void *);
void fn_828E9D90(void *);
}

extern "C" void fn_823831D8(Obj_823831D8 *o)
{
  SP_823831D8 sp;
  void *m = fn_8265C9E0(0x28);
  void *n;
  if (m != 0) n = fn_822D7FE0(m);
  else n = 0;
  sp.first = 0;
  sp.second = 0;
  fn_822D79D8(&sp, n);
  if (o->s.f10 != 0) {
    fn_828E9D90(sp.first);
    fn_828E9D40(sp.first);
    o->s.Release();
  }
  fn_828E2B28(o, &sp);
  if (sp.second != 0) fn_822315A0(sp.second);
}
