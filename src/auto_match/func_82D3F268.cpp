// hkpConvexVerticesShape::hkpConvexVerticesShape(hkFourTransposedPoints *, int, hkVector4 *, int, const hkAabb &,
// hkReal) (Physics/Collide/Shape/Convex/ConvexVertices/hkpConvexVerticesShape.cpp), /O2 /QVMXReserve: the shape
// over caller-owned vertex and plane buffers (both hkArrays get DONT_DEALLOCATE_FLAG).
// hkSimdReal takes its hkReal by value: the two conversions of 0.5f then share one lvlx/vspltw, and the
// in-place mul4 after each store keeps the original's vmr copies. The aabb is written through a local
// pointer to the object; through this-> the two member address registers come out swapped (99.4%).
#include "havok/hkpShape.h"
#include "havok/hkAabb.h"

// The game's 0.5f keeps its lbl_ name (Matching units reference it).

struct hkFourTransposedPoints {
    hkVector4 m_vertices[3];
};

class hkpConvexVerticesConnectivity;

#define HK_NEXT_MULTIPLE_OF(ALIGNMENT, VALUE) (((VALUE) + ((ALIGNMENT)-1)) & (~((ALIGNMENT)-1)))

class hkpConvexVerticesShape : public hkpConvexShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpConvexVerticesShape(hkFourTransposedPoints *rotatedVertices, int numVertices, hkVector4 *planes, int numPlanes,
                           const hkAabb &aabb, hkReal radius);

    hkVector4 m_aabbHalfExtents;                           // +0x20
    hkVector4 m_aabbCenter;                                // +0x30
    hkArray<hkFourTransposedPoints> m_rotatedVertices;     // +0x40
    hkInt32 m_numVertices;                                 // +0x4C
    const void *m_externalObject;                          // +0x50 (name unconfirmed)
    hkArray<hkVector4> m_planeEquations;                   // +0x54
    const hkpConvexVerticesConnectivity *m_connectivity;   // +0x60
};

hkpConvexVerticesShape::hkpConvexVerticesShape(hkFourTransposedPoints *rotatedVertices, int numVertices,
                                               hkVector4 *planes, int numPlanes, const hkAabb &aabb, hkReal radius)
    : hkpConvexShape((hkpShapeType)6, radius),
      m_rotatedVertices(rotatedVertices, HK_NEXT_MULTIPLE_OF(4, numVertices) / 4, HK_NEXT_MULTIPLE_OF(4, numVertices) / 4),
      m_numVertices(numVertices),
      m_externalObject(HK_NULL),
      m_planeEquations(planes, numPlanes, numPlanes),
      m_connectivity(HK_NULL)
{
    hkpConvexVerticesShape *self = this;
    self->m_aabbHalfExtents.setSub4(aabb.m_max, aabb.m_min);
    self->m_aabbHalfExtents.mul4(0.5f);
    self->m_aabbCenter.setAdd4(aabb.m_min, aabb.m_max);
    self->m_aabbCenter.mul4(0.5f);
}
