// Distance between two points with the component(s) selected by the mask lbl_8329EA10 replaced by
// zero (v77) first: XMVector3Length(sel(a) - sel(b)).

#include "xdk/vectorintrinsics.h"

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

extern const __vector4 lbl_8329EA10;

float fn_82303DF8(__vector4 a, __vector4 b)
{
    __vector4 len;

    __vector4 d;
    d = __vsubfp(__vsel(a, __VMXGetReg(77), lbl_8329EA10), __vsel(b, __VMXGetReg(77), lbl_8329EA10));
    len = Length3(d);
    return len.vector4_f32[0];
}
