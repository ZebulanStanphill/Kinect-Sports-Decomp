// hkpConvexVerticesShape::~hkpConvexVerticesShape (Physics/Collide/Shape/Convex/ConvexVertices/
// hkpConvexVerticesShape.cpp): releases the connectivity, then the plane equations and rotated vertices
// hkArrays and the bases are destroyed.
#include "havok/hkpShape.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;

class hkVector4 {
public:
    hkQuadReal m_quad;
};


struct hkFourTransposedPoints {
    hkVector4 m_vertices[3];
};

class hkpConvexVerticesConnectivity : public hkReferencedObject {
};

class hkpConvexVerticesShape : public hkpConvexShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpConvexVerticesShape(hkFinishLoadedObjectFlag flag);
    virtual ~hkpConvexVerticesShape();

    hkVector4 m_aabbHalfExtents;                        // +0x20
    hkVector4 m_aabbCenter;                             // +0x30
    hkArray<hkFourTransposedPoints> m_rotatedVertices;  // +0x40
    hkInt32 m_numVertices;                              // +0x4C
    hkBool m_useSpuBuffer;                              // +0x50
    hkArray<hkVector4> m_planeEquations;                // +0x54
    const hkpConvexVerticesConnectivity *m_connectivity;   // +0x60
};

hkpConvexVerticesShape::~hkpConvexVerticesShape()
{
    if (m_connectivity)
        m_connectivity->removeReference();
}
