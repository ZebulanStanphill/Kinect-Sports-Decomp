// hkpPlaneShape::hkpPlaneShape(const hkVector4 &direction, const hkVector4 &center, const hkVector4 &halfExtents)
// (Physics/Collide/Shape/HeightField/Plane/hkpPlaneShape.cpp): the plane through center with the given normal.
#include "havok/hkpPlaneShape.h"
hkpPlaneShape::hkpPlaneShape(const hkVector4 &n, const hkVector4 &c, const hkVector4 &h)
    : hkpHeightFieldShape(HK_SHAPE_PLANE)
{
    m_plane = n;
    float dot;
    __stvewx(__vmsum3fp(n.m_quad, c.m_quad), &dot, 0);
    m_plane.m_quad.vector4_f32[3] = -dot;
    m_aabbCenter = c;
    m_aabbHalfExtents = h;
}
