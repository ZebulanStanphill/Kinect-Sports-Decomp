// hkpBoxShape::hkpBoxShape(const hkVector4 &, hkReal) (Physics/Collide/Shape/Convex/Box/hkpBoxShape.cpp): known in
// the game only as fn_82D3CD40. The header declares the constructor; it is defined here, HK_FORCE_INLINE, with
// setHalfExtents's body inlined (the smallest of x, y and z goes to w).
#include "havok/hkpBoxShape.h"

HK_FORCE_INLINE hkpBoxShape::hkpBoxShape(const hkVector4 &v, hkReal radius) : hkpConvexShape(HK_SHAPE_BOX, radius)
{
    m_halfExtents = v;
    float x = m_halfExtents.m_quad.vector4_f32[0], y = m_halfExtents.m_quad.vector4_f32[1];
    float z;
    if (x < y)
        z = x;
    else
        z = y;
    m_halfExtents.m_quad.vector4_f32[3] = z;
    if (m_halfExtents.m_quad.vector4_f32[2] < z)
        m_halfExtents.m_quad.vector4_f32[3] = m_halfExtents.m_quad.vector4_f32[2];
    else
        m_halfExtents.m_quad.vector4_f32[3] = z;
}

extern "C" hkpBoxShape *fn_82D3CD40(hkpBoxShape *self, const hkVector4 &v, float r)
{
    self->hkpBoxShape::hkpBoxShape(v, r);
    return self;
}
