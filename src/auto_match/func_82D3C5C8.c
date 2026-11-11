/* Havok hkpSphereShape::getAabb (vtable slot 7): out = translation -/+ (radius + tolerance). */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);

typedef struct Transform_82D3C5C8 {
    __vector4 rotation[3];
    __vector4 translation;     /* 0x30 */
} Transform_82D3C5C8;

typedef struct Aabb_82D3C5C8 {
    __vector4 min;
    __vector4 max;
} Aabb_82D3C5C8;

typedef struct SphereShape_82D3C5C8 {
    char pad00[0x10];
    float radius;              /* 0x10 */
} SphereShape_82D3C5C8;

static __forceinline void SetAll(__vector4 *v, float x)
{
    v->vector4_f32[0] = x;
    *v = __vspltw(*v, 0);
}

void fn_82D3C5C8(const SphereShape_82D3C5C8 *self, const Transform_82D3C5C8 *localToWorld,
                 float tolerance, Aabb_82D3C5C8 *out)
{
    __vector4 r;

    SetAll(&r, self->radius + tolerance);
    out->min = __vsubfp(localToWorld->translation, r);
    out->max = __vaddfp(localToWorld->translation, r);
}
