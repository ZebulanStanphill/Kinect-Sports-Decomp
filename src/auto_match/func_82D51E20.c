typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vmaxfp(__vector4 a, __vector4 b);
__vector4 __vminfp(__vector4 a, __vector4 b);
typedef struct { __vector4 min; __vector4 max; } Aabb_82D51E20;
typedef struct Child_82D51E20 Child_82D51E20;
typedef struct VTable_82D51E20 { void *pad[7]; void (*getAabb)(Child_82D51E20 *, void *, float, Aabb_82D51E20 *); } VTable_82D51E20;
struct Child_82D51E20 { VTable_82D51E20 *vt; };
typedef struct Obj_82D51E20 { char pad[0x18]; Child_82D51E20 *child; char pad1c[4]; float radius; char pad24[0xc]; __vector4 offset; } Obj_82D51E20;

void fn_82D51E20(Obj_82D51E20 *self, void *transform, float tolerance, Aabb_82D51E20 *out)
{
    Aabb_82D51E20 tmp;
    self->child->vt->getAabb(self->child, transform, self->radius + tolerance, &tmp);
    {
        __vector4 off = self->offset;
        out->max = __vmaxfp(tmp.max, __vaddfp(tmp.max, off));
        out->min = __vminfp(tmp.min, __vaddfp(tmp.min, off));
    }
}
