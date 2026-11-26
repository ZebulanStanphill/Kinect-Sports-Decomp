// hkpConvexVerticesShape::hkpConvexVerticesShape(hkReal radius) (Physics/Collide/Shape/Convex/ConvexVertices/
// hkpConvexVerticesShape.cpp): the empty shape used before the vertices are set; both hkArrays start empty
// and the connectivity is null.
#include "havok/hkBase.h"
#include "havok/hkpShape.h"
#include "havok/hkFourTransposedPoints.h"

class hkpConvexVerticesConnectivity;

class hkpConvexVerticesShape : public hkpConvexShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpConvexVerticesShape(hkReal radius);

    hkVector4 m_aabbHalfExtents;                           // +0x20
    hkVector4 m_aabbCenter;                                // +0x30
    hkArray<hkFourTransposedPoints> m_rotatedVertices;     // +0x40
    hkInt32 m_numVertices;                                 // +0x4C
    const void *m_externalObject;                          // +0x50 (name unconfirmed)
    hkArray<hkVector4> m_planeEquations;                   // +0x54
    const hkpConvexVerticesConnectivity *m_connectivity;   // +0x60
};

hkpConvexVerticesShape::hkpConvexVerticesShape(hkReal radius)
    : hkpConvexShape(HK_SHAPE_CONVEX_VERTICES, radius), m_externalObject(HK_NULL), m_connectivity(HK_NULL)
{
}
