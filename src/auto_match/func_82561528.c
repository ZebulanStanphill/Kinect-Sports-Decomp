#include "xdk/vectorintrinsics.h"

static __forceinline __vector4 VectorSet_82561528(float x, float y, float z, float w)
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

static __forceinline float Clamp_82561528(float value, float minimum, float maximum)
{
    value = value - minimum >= 0.0f ? value : minimum;
    return value - maximum >= 0.0f ? maximum : value;
}

static __forceinline float Min_82561528(float a, float b)
{
    return a - b >= 0.0f ? b : a;
}

static __forceinline float Max_82561528(float a, float b)
{
    return a - b >= 0.0f ? a : b;
}

__vector4 fn_82561528(__vector4 v, __vector4 lower, __vector4 upper)
{
    float minX;
    float minY;
    float minZ;
    float maxX;
    float maxY;
    float maxZ;

    minX = lower.vector4_f32[0];
    minY = lower.vector4_f32[1];
    minZ = lower.vector4_f32[2];
    maxX = upper.vector4_f32[0];
    maxY = upper.vector4_f32[1];
    maxZ = upper.vector4_f32[2];
    minX = Min_82561528(minX, maxX);
    minY = Min_82561528(minY, maxY);
    minZ = Min_82561528(minZ, maxZ);
    maxX = Max_82561528(minX, maxX);
    maxY = Max_82561528(minY, maxY);
    maxZ = Max_82561528(minZ, maxZ);
    return VectorSet_82561528(Clamp_82561528(v.vector4_f32[0], minX, maxX),
                              Clamp_82561528(v.vector4_f32[1], minY, maxY),
                              Clamp_82561528(v.vector4_f32[2], minZ, maxZ), 0.0f);
}
