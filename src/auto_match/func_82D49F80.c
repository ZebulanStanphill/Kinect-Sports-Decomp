typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
extern __vector4 __vaddfp(__vector4, __vector4);
typedef struct Child_82D49F80 Child_82D49F80;
typedef struct VTable_82D49F80 { void *pad[13]; void (*method)(Child_82D49F80 *, __vector4 *); } VTable_82D49F80;
struct Child_82D49F80 { VTable_82D49F80 *vt; };
typedef struct Obj_82D49F80 { char pad[0x18]; Child_82D49F80 *child; char pad1[4]; __vector4 offset; } Obj_82D49F80;
void fn_82D49F80(Obj_82D49F80 *self, __vector4 *out)
{
    self->child->vt->method(self->child, out);
    *out = __vaddfp(*out, self->offset);
}
