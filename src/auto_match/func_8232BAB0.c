typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;

extern void fn_822BF1C0(void *obj, float h, int b, int c, int d, void *e, int f, int g, __vector4 v);

typedef struct Obj_8232BAB0 { int pad0; void *target; } Obj_8232BAB0;

void fn_8232BAB0(Obj_8232BAB0 *o, float h, int b, int c, int d, void *e, int f, __vector4 v)
{
  fn_822BF1C0(o->target, h, b, c, d, e, f, 0, v);
}
