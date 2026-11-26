// hkSweptTransform (Common/Base/Math/SweptTransform/hkSweptTransform.h),
// 0x50 bytes: the centre of mass and the rotation of a body at the start and
// at the end of a step. The w of m_centerOfMass0 is the base time, the w of
// m_centerOfMass1 the inverse delta time (hkSweptTransformUtil::lerp2, 83080BC0, computes
// (t - base) * invDelta from them).
#ifndef HAVOK_HKSWEPTTRANSFORM_H
#define HAVOK_HKSWEPTTRANSFORM_H

#include "havok/hkQuaternion.h"

class hkSweptTransform {
public:
    HK_FORCE_INLINE hkReal getBaseTime() const { return m_centerOfMass0(3); }
    HK_FORCE_INLINE hkReal getInvDeltaTime() const { return m_centerOfMass1(3); }

    hkVector4 m_centerOfMass0;       // +0x0
    hkVector4 m_centerOfMass1;       // +0x10
    hkQuaternion m_rotation0;        // +0x20
    hkQuaternion m_rotation1;        // +0x30
    hkVector4 m_centerOfMassLocal;   // +0x40
};

#endif
