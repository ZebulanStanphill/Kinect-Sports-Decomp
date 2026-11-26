// hkpConvexVerticesShape::hkpConvexVerticesShape(hkFinishLoadedObjectFlag), the out-of-line finish constructor
// (Physics/Collide/Shape/Convex/ConvexVertices/hkpConvexVerticesShape.cpp). hkpShape's clears m_type when
// finishing, hkpConvexShape's sets 0x12 (HK_SHAPE_CONVEX) unconditionally, and this class's sets
// HK_SHAPE_CONVEX_VERTICES when finishing. Its finish function and getVtable function call it; because a
// Matching unit calls it, it keeps its fn_ name and is written as an extern "C" function that runs the
// constructor on the given storage (MSVC's explicit constructor call; placement new would add a null check).
#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkpShape.h"

struct hkFourTransposedPoints {
    hkVector4 m_vertices[3];
};

class hkpConvexVerticesConnectivity;

class hkpConvexVerticesShape : public hkpConvexShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpConvexVerticesShape(hkFinishLoadedObjectFlag flag)
        : hkpConvexShape(flag), m_rotatedVertices(flag), m_planeEquations(flag)
    {
        if (flag.m_finishing)
            m_type = HK_SHAPE_CONVEX_VERTICES;
    }

    hkVector4 m_aabbHalfExtents;                           // +0x20
    hkVector4 m_aabbCenter;                                // +0x30
    hkArray<hkFourTransposedPoints> m_rotatedVertices;     // +0x40
    hkInt32 m_numVertices;                                 // +0x4C
    const void *m_externalObject;                          // +0x50 (name unconfirmed)
    hkArray<hkVector4> m_planeEquations;                   // +0x54
    const hkpConvexVerticesConnectivity *m_connectivity;   // +0x60
};

extern "C" hkpConvexVerticesShape *fn_82D3F338(hkpConvexVerticesShape *self, hkFinishLoadedObjectFlag flag)
{
    self->hkpConvexVerticesShape::hkpConvexVerticesShape(flag);
    return self;
}
