// hkpConvexVerticesShape::hkpConvexVerticesShape(hkFourTransposedPoints *, int, hkVector4 *, int, const hkAabb &,
// hkReal) (Physics/Collide/Shape/Convex/ConvexVertices/hkpConvexVerticesShape.cpp), /O2 /QVMXReserve: the shape
// over caller-owned vertex and plane buffers (both hkArrays get DONT_DEALLOCATE_FLAG).
// hkSimdReal takes its hkReal by value: the two conversions of 0.5f then share one lvlx/vspltw, and the
// in-place mul4 after each store keeps the original's vmr copies. The aabb is written through a local
// pointer to the object; through this-> the two member address registers come out swapped (99.4%).
#include "havok/hkpShape.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;
extern "C" {
__vector4 __vaddfp(__vector4, __vector4);
__vector4 __vsubfp(__vector4, __vector4);
__vector4 __vmulfp(__vector4, __vector4);
__vector4 __vspltw(__vector4, unsigned int);
__vector4 __lvlx(const void *, int);
}

// The game's 0.5f keeps its lbl_ name (Matching units reference it).
extern "C" __declspec(selectany) const float lbl_82002C5C = 0.5f;

class hkSimdReal {
public:
    HK_FORCE_INLINE hkSimdReal(hkReal x) { m_real = __vspltw(__lvlx(&x, 0), 0); }
    __vector4 m_real;
};

class hkVector4 {
public:
    HK_FORCE_INLINE void setAdd4(const hkVector4 &a, const hkVector4 &b) { m_quad = __vaddfp(a.m_quad, b.m_quad); }
    HK_FORCE_INLINE void setSub4(const hkVector4 &a, const hkVector4 &b) { m_quad = __vsubfp(a.m_quad, b.m_quad); }
    HK_FORCE_INLINE void mul4(hkSimdReal r) { m_quad = __vmulfp(m_quad, r.m_real); }
    hkQuadReal m_quad;
};

class hkAabb {
public:
    hkVector4 m_min;
    hkVector4 m_max;
};

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
    self->m_aabbHalfExtents.mul4(lbl_82002C5C);
    self->m_aabbCenter.setAdd4(aabb.m_min, aabb.m_max);
    self->m_aabbCenter.mul4(lbl_82002C5C);
}
