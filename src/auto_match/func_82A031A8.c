#include "xdk/vectorintrinsics.h"

typedef struct Obj_82A031A8 {
    char pad[0x40b0];
    float speed;              /* 0x40b0 */
} Obj_82A031A8;

static __forceinline int IsNonZero3(__vector4 v)
{
    return v.vector4_f32[0] != 0.0f || v.vector4_f32[1] != 0.0f || v.vector4_f32[2] != 0.0f;
}

static __forceinline __vector4 Normalize3(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;
    h = __vspltisw(1);
    zero = __vspltisw(0);
    d = __vmsum3fp(v, v);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    mask = __vcmpeqfp(d, zero);
    rt = __vmulfp(d, h);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    result = __vmulfp(v, rsq);
    return __vsel(result, d, mask);
}

static __forceinline __vector4 Replicate(const float *p)
{
    return __vspltw(__lvlx(p, 0), 0);
}

void fn_82A031A8(__vector4 *out, Obj_82A031A8 *self, __vector4 from, __vector4 to)
{
    __vector4 r;

    if (IsNonZero3(from) && IsNonZero3(to) && self->speed != 0.0f) {
        r = __vmaddfp(Normalize3(__vsubfp(to, from)), Replicate(&self->speed), from);
        r.vector4_f32[3] = to.vector4_f32[3];
        *out = r;
    } else {
        *out = to;
    }
}
