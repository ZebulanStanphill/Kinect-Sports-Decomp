#ifndef HAVOK_HKTRANSFORM_H
#define HAVOK_HKTRANSFORM_H

#include "havok/hkRotation.h"

// A rotation and a translation (0x40 bytes).
class hkTransform {
public:
    HK_FORCE_INLINE hkRotation &getRotation() { return m_rotation; }
    HK_FORCE_INLINE const hkRotation &getRotation() const { return m_rotation; }
    HK_FORCE_INLINE hkVector4 &getTranslation() { return m_translation; }
    HK_FORCE_INLINE const hkVector4 &getTranslation() const { return m_translation; }
    HK_FORCE_INLINE const hkVector4 &getColumn(int i) const { return m_rotation.getColumn(i); }
    HK_FORCE_INLINE void setTranslation(const hkVector4 &t) { m_translation = t; }
    HK_FORCE_INLINE void setRotation(const hkQuaternion &q) { m_rotation.set(q); }
    HK_FORCE_INLINE void setIdentity()
    {
        m_rotation.setIdentity();
        m_translation.setZero4();
    }

    void setMul(const hkTransform &a, const hkTransform &b);
    void setMulInverseMul(const hkTransform &a, const hkTransform &b);

    hkRotation m_rotation;      // +0x00
    hkVector4 m_translation;    // +0x30
};

HK_FORCE_INLINE void hkVector4::_setTransformedPos(const hkTransform &t, const hkVector4 &b)
{
    const hkQuadReal b0 = __vspltw(b.m_quad, 0);
    const hkQuadReal b1 = __vspltw(b.m_quad, 1);
    const hkQuadReal b2 = __vspltw(b.m_quad, 2);
    const hkQuadReal r0 = __vmulfp(t.getRotation().getColumn(0).m_quad, b0);
    const hkQuadReal r1 = __vmaddfp(t.getRotation().getColumn(1).m_quad, b1, r0);
    const hkQuadReal r2 = __vmaddfp(t.getRotation().getColumn(2).m_quad, b2, r1);
    m_quad = __vaddfp(t.getTranslation().m_quad, r2);
}

#endif
