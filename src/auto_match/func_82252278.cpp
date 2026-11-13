// Reads six values from the source objects (sibling of func_82251E58/func_82236340) into a
// default-initialised parameter block (zero vectors, 0.0f, mode 3) and passes them to the sink.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;

extern "C" __vector4 __VMXGetReg(int reg);

struct Params_82252278 {
  __vector4 a;            /* 0x00 */
  __vector4 b;            /* 0x10 */
  __vector4 c;            /* 0x20 */
  float f;                /* 0x30 */
  unsigned char b0;       /* 0x34 */
  unsigned char b1;       /* 0x35 */
  unsigned char b2;       /* 0x36 */
  int i;                  /* 0x38 */
  int k;                  /* 0x3c */
};

struct Src_82252278 {
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
  virtual void Get(unsigned id, void *out);
};
struct Sink_82252278 {
  virtual void v0();
  virtual void Set(int a, int b, __vector4 v, float f, Params_82252278 p, unsigned char c);
};
struct Owner_82252278 {
  char pad[0x68];
  Src_82252278 *s68; int p6c; Src_82252278 *s70; int p74; Src_82252278 *s78; int p7c; Src_82252278 *s80; int p84; Src_82252278 *s88; int p8c; Src_82252278 *s90;
};
struct Arg_82252278 { char pad[0x10]; Sink_82252278 *sink; };

extern "C" void fn_82252278(Owner_82252278 *self, unsigned id, Arg_82252278 *arg)
{
  Params_82252278 p;
  int x1;
  int x2;
  __vector4 v;
  float f;
  unsigned char c;

  p.a = __VMXGetReg(77);
  p.b = __VMXGetReg(77);
  p.c = __VMXGetReg(77);
  p.f = 0.0f;
  p.b0 = 0;
  p.b1 = 0;
  p.b2 = 0;
  p.i = 0;
  p.k = 3;
  self->s68->Get(id, &x1);
  self->s70->Get(id, &x2);
  self->s78->Get(id, &v);
  self->s80->Get(id, &f);
  self->s88->Get(id, &p);
  self->s90->Get(id, &c);
  if (arg->sink != 0)
    arg->sink->Set(x1, x2, v, f, p, c);
}
