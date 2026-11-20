/* Havok: grows an AABB by the point (a * b, componentwise) transformed by the transform
   (hkVector4::setTransformedPos). */
#include "havok/hkTransform.h"

extern "C" {
__vector4 __vminfp(__vector4 a, __vector4 b);
__vector4 __vmaxfp(__vector4 a, __vector4 b);
}

typedef struct Aabb_82D41A70 {
    hkVector4 minimum; /* 0x00 */
    hkVector4 maximum; /* 0x10 */
} Aabb_82D41A70;

static __forceinline void SetVector(hkVector4 *v, float x, float y, float z, float w)
{
    hkVector4 t;

    t(0) = x;
    t(1) = y;
    t(2) = z;
    t(3) = w;
    *v = t;
}

extern "C" void fn_82D41A70(Aabb_82D41A70 *aabb, const hkTransform *transform, const float *a, const float *b)
{
    hkVector4 point;
    hkVector4 transformed;

    SetVector(&point, a[0] * b[0], a[1] * b[1], a[2] * b[2], 0.0f);
    transformed.setTransformedPos(*transform, point);
    aabb->minimum.m_quad = __vminfp(aabb->minimum.m_quad, transformed.m_quad);
    aabb->maximum.m_quad = __vmaxfp(aabb->maximum.m_quad, transformed.m_quad);
}
