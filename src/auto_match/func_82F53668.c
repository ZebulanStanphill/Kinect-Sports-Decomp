#include "xdk/vectorintrinsics.h"

extern float fn_82F53608(__vector4 a, __vector4 b);
extern double sin(double x); /* sin */

static __forceinline __vector4 Replicate(float value)
{
    return __vspltw(__lvlx(&value, 0), 0);
}

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

__vector4 fn_82F53668(__vector4 a, __vector4 b, float t)
{
    float angle = fn_82F53608(a, b);
    float s = (float)sin(angle);
    float s0, s1, inv;
    __vector4 r;

    if (s < 0.0001f)
        return Normalize3(__vaddfp(a, b));
    s0 = (float)sin(t * angle);
    s1 = (float)sin((1.0f - t) * angle);
    r = __vmaddfp(a, Replicate(s1), __vmulfp(b, Replicate(s0)));
    inv = 1.0f / s;
    return __vmulfp(r, Replicate(inv));
}
