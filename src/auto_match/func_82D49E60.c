typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
extern __vector4 __vaddfp(__vector4, __vector4);
typedef struct Child_82D49E60 Child_82D49E60;
typedef struct VTable_82D49E60 { void *pad[14]; void (*method)(Child_82D49E60 *, void *, __vector4 *); } VTable_82D49E60;
struct Child_82D49E60 { VTable_82D49E60 *vt; };
typedef struct Obj_82D49E60 { char pad[0x18]; Child_82D49E60 *child; char pad1[4]; __vector4 offset; } Obj_82D49E60;
void fn_82D49E60(Obj_82D49E60 *self, void *arg, __vector4 *out)
{
    self->child->vt->method(self->child, arg, out);
    *out = __vaddfp(*out, self->offset);
}
