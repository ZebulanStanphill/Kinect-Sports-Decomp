// hkpConvexVerticesShape::hkpConvexVerticesShape(hkFourTransposedPoints *, int, hkVector4 *, int, const hkAabb &,
// hkReal) (Physics/Collide/Shape/Convex/ConvexVertices/hkpConvexVerticesShape.cpp), /O2 /QVMXReserve: the shape
// over caller-owned vertex and plane buffers (both hkArrays get DONT_DEALLOCATE_FLAG).
// hkSimdReal takes its hkReal by value: the two conversions of 0.5f then share one lvlx/vspltw, and the
// in-place mul4 after each store keeps the original's vmr copies. The aabb is written through a local
// pointer to the object; through this-> the two member address registers come out swapped (99.4%).
#include "havok/hkpConvexVerticesShape.h"

// The game's 0.5f keeps its lbl_ name (Matching units reference it).

#define HK_NEXT_MULTIPLE_OF(ALIGNMENT, VALUE) (((VALUE) + ((ALIGNMENT)-1)) & (~((ALIGNMENT)-1)))

hkpConvexVerticesShape::hkpConvexVerticesShape(hkFourTransposedPoints *rotatedVertices, int numVertices,
                                               hkVector4 *planes, int numPlanes, const hkAabb &aabb, hkReal radius)
    : hkpConvexShape((hkpShapeType)6, radius),
      m_rotatedVertices(rotatedVertices, HK_NEXT_MULTIPLE_OF(4, numVertices) / 4, HK_NEXT_MULTIPLE_OF(4, numVertices) / 4),
      m_numVertices(numVertices),
      m_convexPiece(HK_NULL),
      m_planeEquations(planes, numPlanes, numPlanes),
      m_connectivity(HK_NULL)
{
    hkpConvexVerticesShape *self = this;
    self->m_aabbHalfExtents.setSub4(aabb.m_max, aabb.m_min);
    self->m_aabbHalfExtents.mul4(0.5f);
    self->m_aabbCenter.setAdd4(aabb.m_min, aabb.m_max);
    self->m_aabbCenter.mul4(0.5f);
}
