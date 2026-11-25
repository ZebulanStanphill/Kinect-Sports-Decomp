#include "havok/hkRotation.h"

__forceinline void hkVector4::setRotatedInverseDir(const hkRotation &r, const hkVector4 &b)
{
    const hkQuadReal d0 = __vmsum3fp(r.getColumn(0).m_quad, b.m_quad);
    const hkQuadReal d1 = __vmsum3fp(r.getColumn(1).m_quad, b.m_quad);
    const hkQuadReal d2 = __vmsum3fp(r.getColumn(2).m_quad, b.m_quad);
    const hkQuadReal xz = __vmrghw(d0, d2);
    const hkQuadReal y0 = __vmrghw(d1, lbl_82132D00);
    m_quad = __vmrghw(xz, y0);
}

struct Body_8309EED8 {
    char pad0[0x20];
    hkVector4 m_angularVelocity;   // 0x20
    char pad30[0x10];
    hkVector4 m_centerOfMass;      // 0x40
    hkRotation m_rotation;         // 0x50
};

extern "C" void fn_8309EED8(const Body_8309EED8 *bodyA, const Body_8309EED8 *bodyB, const hkVector4 &pointA,
                            const hkVector4 &pointB, float a, float b, hkVector4 &out)
{
    out.setSub4(pointB, pointA);
    hkSimdReal scale = b / a;
    hkVector4 angA;
    angA.setRotatedInverseDir(bodyA->m_rotation, bodyA->m_angularVelocity);
    hkVector4 angB;
    angB.setRotatedInverseDir(bodyB->m_rotation, bodyB->m_angularVelocity);
    hkVector4 armA;
    armA.setSub4(pointA, bodyA->m_centerOfMass);
    hkVector4 armB;
    armB.setSub4(pointB, bodyB->m_centerOfMass);
    hkVector4 velA;
    velA.setCross(armA, angA);
    hkVector4 velB;
    velB.setCross(armB, angB);
    out.addMul4(scale, velB);
    out.subMul4(scale, velA);
}
