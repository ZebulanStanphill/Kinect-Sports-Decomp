typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
struct Attr_82390A80 { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void set(void *, void *); };
struct Obj_82390A80 {
  char pad[0x38]; int x38; char pad3c[0xc]; void *x48; char pad4c[0x1c];
  Attr_82390A80 *a68; int p6c; Attr_82390A80 *a70; int p74; Attr_82390A80 *a78; int p7c;
  Attr_82390A80 *a80; int p84; Attr_82390A80 *a88; int p8c; Attr_82390A80 *a90;
};
struct SP_82390A80 { void *first; unsigned second; };
extern "C" {
void fn_822315A0(unsigned);
void *fn_822D7FE0(void *);
void fn_822D79D8(SP_82390A80 *, void *);
void *fn_8265C9E0(unsigned);
void fn_828E2B28(Obj_82390A80 *, SP_82390A80 *);
void fn_828E9D40(void *);
void fn_828E9D90(void *);
void fn_82236340(Obj_82390A80 *, void *, int *);
}

extern "C" void fn_82390A80(Obj_82390A80 *o, __vector4 v1, __vector4 v2, __vector4 v3, float f, int a, unsigned char c)
{
  SP_82390A80 sp;
  void *mem = fn_8265C9E0(0x28);
  void *n;
  if (mem != 0) n = fn_822D7FE0(mem);
  else n = 0;
  sp.first = 0;
  sp.second = 0;
  fn_822D79D8(&sp, n);
  o->a68->set(sp.first, &v1);
  o->a70->set(sp.first, &v2);
  o->a78->set(sp.first, &v3);
  o->a80->set(sp.first, &f);
  o->a88->set(sp.first, &a);
  o->a90->set(sp.first, &c);
  if (o->x48 != 0) {
    fn_828E9D90(sp.first);
    fn_828E9D40(sp.first);
    fn_82236340(o, sp.first, &o->x38);
  }
  fn_828E2B28(o, &sp);
  if (sp.second != 0) fn_822315A0(sp.second);
}
