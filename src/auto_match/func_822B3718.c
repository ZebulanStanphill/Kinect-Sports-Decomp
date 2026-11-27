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

void fn_822B3718(__vector4 *out, __vector4 point, const __vector4 *points)
{
    __vector4 a, b, d;

    a = __vsubfp(point, points[0]);
    a = Normalize3(a);
    b = __vsubfp(points[2], points[3]);
    b = Normalize3(b);
    d = __vmsum3fp(b, a);
    if (d.vector4_f32[0] < 0.0f) {
        *out = b;
    } else {
        *out = __vxor(b, __VMXGetReg(65));
    }
}
