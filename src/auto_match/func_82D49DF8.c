typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
extern __vector4 __vmsum3fp(__vector4, __vector4);
void __stvewx(__vector4 v, void *base, int offset);
typedef struct Child_82D49DF8 Child_82D49DF8;
typedef struct VTable_82D49DF8 { void *pad[3]; float (*method)(Child_82D49DF8 *, __vector4 *); } VTable_82D49DF8;
struct Child_82D49DF8 { VTable_82D49DF8 *vt; };
typedef struct Obj_82D49DF8 { char pad[0x18]; Child_82D49DF8 *child; char pad1[4]; __vector4 offset; } Obj_82D49DF8;
float fn_82D49DF8(Obj_82D49DF8 *self, __vector4 *dir)
{
    float d = self->child->vt->method(self->child, dir);
    float r;
    __stvewx(__vmsum3fp(*dir, self->offset), &r, 0);
    return r + d;
}
