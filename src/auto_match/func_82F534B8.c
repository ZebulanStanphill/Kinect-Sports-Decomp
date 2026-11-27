// Linear interpolation: a + (b - a) * t.

#include "xdk/vectorintrinsics.h"

static __forceinline __vector4 Replicate(float value)
{
    __vector4 v = __lvlx(&value, 0);
    return __vspltw(v, 0);
}

__vector4 fn_82F534B8(__vector4 a, __vector4 b, float t)
{
    __vector4 d;

    d = __vsubfp(b, a);
    return __vmaddfp(d, Replicate(t), a);
}
