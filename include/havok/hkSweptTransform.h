// hkSweptTransform (Common/Base/Math/SweptTransform/hkSweptTransform.h),
// 0x50 bytes: the centre of mass and the rotation of a body at the start and
// at the end of a step. The w of m_centerOfMass0 is the base time.
#ifndef HAVOK_HKSWEPTTRANSFORM_H
#define HAVOK_HKSWEPTTRANSFORM_H

#include "havok/hkQuaternion.h"

class hkSweptTransform {
public:
    hkVector4 m_centerOfMass0;       // +0x0
    hkVector4 m_centerOfMass1;       // +0x10
    hkQuaternion m_rotation0;        // +0x20
    hkQuaternion m_rotation1;        // +0x30
    hkVector4 m_centerOfMassLocal;   // +0x40
};

#endif
