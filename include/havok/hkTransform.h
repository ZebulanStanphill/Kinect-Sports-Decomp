#ifndef HAVOK_HKTRANSFORM_H
#define HAVOK_HKTRANSFORM_H

#include "havok/hkRotation.h"

class hkTransform {
public:
    HK_FORCE_INLINE const hkRotation &getRotation() const { return m_rotation; }
    HK_FORCE_INLINE const hkVector4 &getTranslation() const { return m_translation; }

    void setMul(const hkTransform &a, const hkTransform &b);
    void setMulInverseMul(const hkTransform &a, const hkTransform &b);

    hkRotation m_rotation;      // +0x00
    hkVector4 m_translation;    // +0x30
};

#endif
