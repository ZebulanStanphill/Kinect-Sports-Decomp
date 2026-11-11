// Havok: returns the 3D length of the vector at +0x1b0 of the entity at +0x18, times the
// float literal 2.2369974f (pooled at lbl_82147F8C: needs --alias __real@400f2af7=lbl_82147F8C;
// an extern float gives the swapped fmuls operands). Length is dot3 * rsqrt(dot3) with two Newton steps (Havok's
// hkVector4::length3 shape, 0.5 vector lbl_82132D70) and read through stvewx.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
void __stvewx(__vector4 v, void *base, int offset);

typedef struct Entity_82DFD8B0 {
    char pad0[0x1b0];
    __vector4 velocity;             // 0x1b0
} Entity_82DFD8B0;

typedef struct Action_82DFD8B0 {
    char pad0[0x18];
    Entity_82DFD8B0 *entity;        // 0x18
} Action_82DFD8B0;

extern const __vector4 lbl_82132D70;    // (0.5, 0.5, 0.5, 0.5)

static __forceinline __vector4 InvSqrt(__vector4 r)
{
    __vector4 zero = __vspltisw(0);
    __vector4 e = __vrsqrtefp(r);
    __vector4 hr = __vmulfp(r, lbl_82132D70);
    __vector4 mask = __vcmpeqfp(zero, r);

    e = __vmaddfp(e, __vnmsubfp(hr, __vmulfp(e, e), lbl_82132D70), e);
    e = __vmaddfp(e, __vnmsubfp(hr, __vmulfp(e, e), lbl_82132D70), e);
    return __vsel(e, zero, mask);
}

static __forceinline float Length3(const __vector4 *v)
{
    __vector4 len2 = __vmsum3fp(*v, *v);
    __vector4 len = __vmulfp(len2, InvSqrt(len2));
    float r;

    __stvewx(len, &r, 0);
    return r;
}

float fn_82DFD8B0(Action_82DFD8B0 *self)
{
    return Length3(&self->entity->velocity) * 2.2369974f;
}
