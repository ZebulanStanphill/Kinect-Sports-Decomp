typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
struct Matrix_823F1B08 { __vector4 r[4]; };
struct Attr_823F1B08 { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void set(void *, void *); };
struct Obj_823F1B08 {
  char pad[0x38]; int x38; char pad3c[0xc]; void *x48; char pad4c[0x1c];
  Attr_823F1B08 *a68; int p6c; Attr_823F1B08 *a70; int p74; Attr_823F1B08 *a78; int p7c;
  Attr_823F1B08 *a80; int p84; Attr_823F1B08 *a88; int p8c; Attr_823F1B08 *a90;
};
struct SP_823F1B08 { void *first; unsigned second; };
extern "C" {
void fn_822315A0(unsigned);
void *fn_822D7FE0(void *);
void fn_822D79D8(SP_823F1B08 *, void *);
void *fn_8265C9E0(unsigned);
void fn_828E2B28(Obj_823F1B08 *, SP_823F1B08 *);
void fn_828E9D40(void *);
void fn_828E9D90(void *);
void fn_82252278(Obj_823F1B08 *, void *, int *);
}

extern "C" void fn_823F1B08(Obj_823F1B08 *o, int a, int b, __vector4 v, float f, Matrix_823F1B08 m, unsigned char c)
{
  SP_823F1B08 sp;
  void *mem = fn_8265C9E0(0x28);
  void *n;
  if (mem != 0) n = fn_822D7FE0(mem);
  else n = 0;
  sp.first = 0;
  sp.second = 0;
  fn_822D79D8(&sp, n);
  o->a68->set(sp.first, &a);
  o->a70->set(sp.first, &b);
  o->a78->set(sp.first, &v);
  o->a80->set(sp.first, &f);
  o->a88->set(sp.first, &m);
  o->a90->set(sp.first, &c);
  if (o->x48 != 0) {
    fn_828E9D90(sp.first);
    fn_828E9D40(sp.first);
    fn_82252278(o, sp.first, &o->x38);
  }
  fn_828E2B28(o, &sp);
  if (sp.second != 0) fn_822315A0(sp.second);
}
