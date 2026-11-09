typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
extern __vector4 __vaddfp(__vector4, __vector4);
typedef struct Child_82D49F20 Child_82D49F20;
typedef struct VTable_82D49F20 { void *pad[17]; void (*method)(Child_82D49F20 *, __vector4 *); } VTable_82D49F20;
struct Child_82D49F20 { VTable_82D49F20 *vt; };
typedef struct Obj_82D49F20 { char pad[0x18]; Child_82D49F20 *child; char pad1[4]; __vector4 offset; } Obj_82D49F20;
void fn_82D49F20(Obj_82D49F20 *self, __vector4 *out)
{
    self->child->vt->method(self->child, out);
    *out = __vaddfp(*out, self->offset);
}
