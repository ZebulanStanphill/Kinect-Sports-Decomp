// hkpPlaneShape::hkpPlaneShape(const hkVector4 &plane, const hkAabb &aabb)
// (Physics/Collide/Shape/HeightField/Plane/hkpPlaneShape.cpp): the plane and the AABB's center and half extents.
#include "havok/hkAabb.h"
#include "havok/hkpPlaneShape.h"
hkpPlaneShape::hkpPlaneShape(const hkVector4 &p, const hkAabb &b)
    : hkpHeightFieldShape(HK_SHAPE_PLANE)
{
    m_plane = p;
    m_aabbCenter.m_quad = __vmulfp(lbl_82132D70, __vaddfp(b.m_min.m_quad, b.m_max.m_quad));
    m_aabbHalfExtents.m_quad = __vmulfp(lbl_82132D70, __vsubfp(b.m_max.m_quad, b.m_min.m_quad));
}
