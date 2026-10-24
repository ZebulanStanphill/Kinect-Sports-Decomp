// hkpCapsuleShape::hkpCapsuleShape(const hkVector4 &, const hkVector4 &, hkReal) (Physics/Collide/Shape/
// Convex/Capsule/hkpCapsuleShape.cpp): the radius is also kept in the w components of the two vertices.
#include "havok/hkpShape.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;

class hkVector4 {
public:
    HK_FORCE_INLINE hkVector4 &operator=(const hkVector4 &v) { m_quad = v.m_quad; return *this; }
    HK_FORCE_INLINE hkReal &operator()(int i) { return m_quad.vector4_f32[i]; }
    hkQuadReal m_quad;
};


class hkpCapsuleShape : public hkpConvexShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpCapsuleShape(const hkVector4 &vertexA, const hkVector4 &vertexB, hkReal radius);

    hkVector4 m_vertexA;   // +0x20
    hkVector4 m_vertexB;   // +0x30
};

hkpCapsuleShape::hkpCapsuleShape(const hkVector4 &vertexA, const hkVector4 &vertexB, hkReal radius)
    : hkpConvexShape(HK_SHAPE_CAPSULE, radius)
{
    m_vertexA = vertexA;
    m_vertexB = vertexB;
    m_vertexA(3) = radius;
    m_vertexB(3) = radius;
}
