// hkpCapsuleShape::hkpCapsuleShape(const hkVector4 &, const hkVector4 &, hkReal) (Physics/Collide/Shape/
// Convex/Capsule/hkpCapsuleShape.cpp): the radius is also kept in the w components of the two vertices.
#include "havok/hkpCapsuleShape.h"

hkpCapsuleShape::hkpCapsuleShape(const hkVector4 &vertexA, const hkVector4 &vertexB, hkReal radius)
    : hkpConvexShape(HK_SHAPE_CAPSULE, radius)
{
    m_vertexA = vertexA;
    m_vertexB = vertexB;
    m_vertexA(3) = radius;
    m_vertexB(3) = radius;
}
