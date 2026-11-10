typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
typedef struct Obj_824CCE00 { char pad[0x20]; void *target; char pad24[0x7c]; __vector4 value; } Obj_824CCE00;
extern __vector4 *fn_82F52188(__vector4 *,void *,int);
__vector4 *fn_824CCE00(__vector4 *out,Obj_824CCE00 *self) {
 __vector4 tmp;
 __vector4 v=*fn_82F52188(&tmp,self->target,2);
 *out=v; self->value=v; return out;
}
