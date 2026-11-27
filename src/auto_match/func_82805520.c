// Rebuilds the w component of a unit quaternion from its x, y, z:
// w = sqrt(max(1 - (x*x + y*y + z*z), 0)), with the estimated square root.

#include "xdk/vectorintrinsics.h"

#define VPACK_NORMSHORT2 1

static __forceinline __vector4 SplatOne(void)
{
    __vector4 v;

    v = __vspltisw(0);
    v = __vupkd3d(v, VPACK_NORMSHORT2);
    return __vspltw(v, 3);
}

static __forceinline __vector4 SqrtEst(__vector4 v)
{
    __vector4 zero, rsq, isZero, result;

    zero = __vspltisw(0);
    rsq = __vrsqrtefp(v);
    isZero = __vcmpeqfp(v, zero);
    result = __vmulfp(rsq, v);
    return __vsel(result, v, isZero);
}

__vector4 fn_82805520(__vector4 q)
{
    __vector4 w;

    w = __vsubfp(SplatOne(), __vmsum3fp(q, q));
    w = __vmaxfp(w, __vspltisw(0));
    w = SqrtEst(w);
    return __vrlimi(q, w, 1, 0);
}
