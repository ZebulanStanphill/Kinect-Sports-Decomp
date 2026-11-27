#include "xdk/vectorintrinsics.h"

static __forceinline __vector4 VectorSet(float x, float y, float z, float w)
{
    __vector4 v0, v1, v2, v3;

    v0 = __lvlx(&x, 0);
    v1 = __lvlx(&y, 0);
    v2 = __lvlx(&z, 0);
    v3 = __lvlx(&w, 0);
    v0 = __vrlimi(v0, v1, 0x4, 3);
    v2 = __vrlimi(v2, v3, 0x4, 3);
    v0 = __vrlimi(v0, v2, 0x3, 2);
    return v0;
}

static __forceinline float Clamp(float value, float minimum, float maximum)
{
    value = value - minimum >= 0.0f ? value : minimum;
    return value - maximum >= 0.0f ? maximum : value;
}

__vector4 fn_825613E0(__vector4 v, float minimum, float maximum)
{
    return VectorSet(Clamp(v.vector4_f32[0], minimum, maximum), Clamp(v.vector4_f32[1], minimum, maximum),
                     Clamp(v.vector4_f32[2], minimum, maximum), 0.0f);
}
