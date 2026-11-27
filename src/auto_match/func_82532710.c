#include "xdk/vectorintrinsics.h"

static __forceinline __vector4 Normalize3(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;

    d = __vmsum3fp(v, v);
    h = __vspltisw(1);
    zero = __vspltisw(0);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    rt = __vmulfp(d, h);
    mask = __vcmpeqfp(d, zero);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    result = __vmulfp(v, rsq);
    return __vsel(result, d, mask);
}

static __forceinline __vector4 Length3(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;

    d = __vmsum3fp(v, v);
    h = __vspltisw(1);
    zero = __vspltisw(0);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    rt = __vmulfp(d, h);
    mask = __vcmpeqfp(d, zero);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    result = __vmulfp(d, rsq);
    return __vsel(result, d, mask);
}

static __forceinline __vector4 Replicate(const float *value)
{
    __vector4 v = __lvlx(value, 0);
    return __vspltw(v, 0);
}

float fn_82532710(__vector4 origin, __vector4 direction, __vector4 point)
{
    __vector4 dir = Normalize3(direction);
    __vector4 dot = __vmsum3fp(__vsubfp(point, origin), dir);
    float t = dot.vector4_f32[0];
    __vector4 closest = __vmaddfp(dir, Replicate(&t), origin);
    __vector4 length = Length3(__vsubfp(point, closest));
    return length.vector4_f32[0];
}
