typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
typedef struct { __vector4 a; char sub[0x10]; __vector4 b; } Obj_82CF6518;
typedef struct { char pad0[0x30]; __vector4 v; } Src_82CF6518;
extern __vector4 lbl_82132D10;
extern void fn_82CE5990(void *sub);

void fn_82CF6518(Obj_82CF6518 *self, Src_82CF6518 *src)
{
  fn_82CE5990(self->sub);
  self->a = src->v;
  self->b = lbl_82132D10;
}
