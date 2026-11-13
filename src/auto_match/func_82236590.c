typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
struct I_82236590;
typedef struct IV_82236590 {
  void *s0;
  void (*f4)(struct I_82236590 *, float, int, __vector4, __vector4, __vector4);
  void *s8; void *sc; void *s10;
  void (*f14)(struct I_82236590 *, int, void *);
} IV_82236590;
typedef struct I_82236590 { IV_82236590 *vt; } I_82236590;
typedef struct L_82236590 { int i; float f; int pad[2]; __vector4 c; __vector4 b; __vector4 a; } L_82236590;

void fn_82236590(int param_1, int param_2, int param_3)
{
  L_82236590 l;
  I_82236590 *o;

  o = *(I_82236590 **)(param_1 + 0x68);
  o->vt->f14(o, param_2, &l.a);
  o = *(I_82236590 **)(param_1 + 0x70);
  o->vt->f14(o, param_2, &l.b);
  o = *(I_82236590 **)(param_1 + 0x78);
  o->vt->f14(o, param_2, &l.c);
  o = *(I_82236590 **)(param_1 + 0x80);
  o->vt->f14(o, param_2, &l.f);
  o = *(I_82236590 **)(param_1 + 0x88);
  o->vt->f14(o, param_2, &l.i);
  if (*(I_82236590 **)(param_3 + 0x10) != 0) {
    (*(I_82236590 **)(param_3 + 0x10))->vt->f4(*(I_82236590 **)(param_3 + 0x10), l.f, l.i, l.a, l.b, l.c);
  }
}
