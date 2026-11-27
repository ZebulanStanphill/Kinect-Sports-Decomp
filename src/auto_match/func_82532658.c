// Closest point to `point` on the segment a -> b.

#include "xdk/vectorintrinsics.h"

extern const float ltcg_pool_0_0f;

static __forceinline __vector4 Replicate(float value)
{
    __vector4 v = __lvlx(&value, 0);
    return __vspltw(v, 0);
}

static __forceinline __vector4 Length3(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;

    h = __vspltisw(1);
    d = __vmsum3fp(v, v);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    rt = __vmulfp(d, h);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    zero = __vspltisw(0);
    mask = __vcmpeqfp(d, zero);
    result = __vmulfp(d, rsq);
    return __vsel(result, d, mask);
}

static __forceinline __vector4 Normalize3(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;

    h = __vspltisw(1);
    d = __vmsum3fp(v, v);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    rt = __vmulfp(d, h);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    zero = __vspltisw(0);
    mask = __vcmpeqfp(d, zero);
    result = __vmulfp(v, rsq);
    return __vsel(result, d, mask);
}

__vector4 fn_82532658(__vector4 a, __vector4 b, __vector4 point)
{
    __vector4 direction = Normalize3(__vsubfp(b, a));
    __vector4 length = Length3(__vsubfp(a, b));
    __vector4 dot = __vmsum3fp(__vsubfp(point, a), direction);
    float t = dot.vector4_f32[0];

    if (t > length.vector4_f32[0]) {
        return b;
    }
    if (t < ltcg_pool_0_0f) {
        return a;
    }
    return __vmaddfp(direction, Replicate(t), a);
}
