#ifndef HAVOK_HKMOTIONSTATE_H
#define HAVOK_HKMOTIONSTATE_H

#include "havok/hkTransform.h"

// hkMotionState (0xB0): its (implicit) copy constructor is emitted out of line, fn_82D6B540.
class hkMotionState {
public:
    hkMotionState() {}
    hkMotionState(const hkMotionState &other);
    hkTransform &getTransform() { return m_transform; }
    const hkTransform &getTransform() const { return m_transform; }

    hkTransform m_transform;          // +0x0
    hkUint8 m_sweptTransform[0x50];   // +0x40
    hkVector4 m_deltaAngle;           // +0x90
    hkReal m_objectRadius;            // +0xA0
    hkUint8 m_members[0xC];           // +0xA4: dampings, deactivation counters
};

#endif
