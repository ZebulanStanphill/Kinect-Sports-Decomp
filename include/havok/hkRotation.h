#ifndef HAVOK_HKROTATION_H
#define HAVOK_HKROTATION_H

#include "havok/hkMatrix3.h"

class hkQuaternion;
class hkRotation;
extern "C" void fn_82CE6010(hkRotation *self, const hkQuaternion *q);   // hkRotation::set(const hkQuaternion &)

// An orthonormal hkMatrix3.
class hkRotation : public hkMatrix3 {
public:
    HK_FORCE_INLINE void set(const hkQuaternion &q) { fn_82CE6010(this, &q); }
};

HK_FORCE_INLINE void hkVector4::_setRotatedDir(const hkRotation &r, const hkVector4 &b)
{
    const hkQuadReal b0 = __vspltw(b.m_quad, 0);
    const hkQuadReal b1 = __vspltw(b.m_quad, 1);
    const hkQuadReal b2 = __vspltw(b.m_quad, 2);
    const hkQuadReal r0 = __vmulfp(r.getColumn(0).m_quad, b0);
    const hkQuadReal r1 = __vmaddfp(r.getColumn(1).m_quad, b1, r0);
    m_quad = __vmaddfp(r.getColumn(2).m_quad, b2, r1);
}

#endif
