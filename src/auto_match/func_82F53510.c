// Returns a + b * scale (scale replicated to all four components).

#include "xdk/vectorintrinsics.h"

static __forceinline __vector4 Replicate(float value)
{
    __vector4 v = __lvlx(&value, 0);
    return __vspltw(v, 0);
}

__vector4 fn_82F53510(__vector4 a, __vector4 b, float scale)
{
    return __vmaddfp(b, Replicate(scale), a);
}
