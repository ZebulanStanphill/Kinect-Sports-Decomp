// Returns v * scale (scale replicated to all four components).

#include "xdk/vectorintrinsics.h"

static __forceinline __vector4 Replicate(float value)
{
    __vector4 v = __lvlx(&value, 0);
    return __vspltw(v, 0);
}

__vector4 fn_82F534F8(__vector4 v, float scale)
{
    return __vmulfp(v, Replicate(scale));
}
