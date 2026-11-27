// hkpBoxShape::hkpBoxShape(const hkVector4 &, hkReal) (Physics/Collide/Shape/Convex/Box/hkpBoxShape.cpp), with
// setHalfExtents's body inlined (the smallest of x, y and z goes to w).
#include "havok/hkpBoxShape.h"

hkpBoxShape::hkpBoxShape(const hkVector4 &v, hkReal radius) : hkpConvexShape(HK_SHAPE_BOX, radius)
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
