// Reads five values from the source objects (sibling of func_82252278) into default-initialised
// blocks (zero vectors, 0.0f, mode 3; two -1 filled index lists) and passes them to the sink.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;

extern "C" __vector4 __VMXGetReg(int reg);

struct Params_822520E8 {
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

struct List_822520E8 {
  int n;
  unsigned int v[7];
  __forceinline List_822520E8() { int i; n = 0; for (i = 0; i < 7; i++) v[i] = 0xffffffff; }
};

struct Indices_822520E8 {
  unsigned int a;
  int b;
  List_822520E8 d;
  List_822520E8 e;
  __forceinline Indices_822520E8() : a(0xffffffff), b(-1) {}
};

struct Src_822520E8 {
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
  virtual void Get(unsigned id, void *out);
};
struct Sink_822520E8 {
  virtual void v0();
  virtual void Set(int a, int b, __vector4 v, Params_822520E8 p, Indices_822520E8 *idx);
};
struct Owner_822520E8 {
  char pad[0x68];
  Src_822520E8 *s68; int p6c; Src_822520E8 *s70; int p74; Src_822520E8 *s78; int p7c; Src_822520E8 *s80; int p84; Src_822520E8 *s88;
};
struct Arg_822520E8 { char pad[0x10]; Sink_822520E8 *sink; };

extern "C" void fn_822520E8(Owner_822520E8 *self, unsigned id, Arg_822520E8 *arg)
{
  Params_822520E8 p;
  int x1;
  int x2;
  __vector4 v;

  p.a = __VMXGetReg(77);
  p.b = __VMXGetReg(77);
  p.c = __VMXGetReg(77);
  p.f = 0.0f;
  p.b0 = 0;
  p.b1 = 0;
  p.b2 = 0;
  p.i = 0;
  p.k = 3;
  Indices_822520E8 idx;
  self->s68->Get(id, &x1);
  self->s70->Get(id, &x2);
  self->s78->Get(id, &v);
  self->s80->Get(id, &p);
  self->s88->Get(id, &idx);
  if (arg->sink != 0)
    arg->sink->Set(x1, x2, v, p, &idx);
}
