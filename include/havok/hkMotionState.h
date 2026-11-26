#ifndef HAVOK_HKMOTIONSTATE_H
#define HAVOK_HKMOTIONSTATE_H

#include "havok/hkSweptTransform.h"
#include "havok/hkTransform.h"
#include "havok/hkUFloat8.h"

class hkMotionState;
// hkMotionState::initMotionState, out of line (hkpShapePhantom's constructor, 82D99F58, calls it).
extern "C" void fn_830824B8(hkMotionState *self, const hkVector4 &position, const hkQuaternion &rotation);

// hkMotionState (0xB0): its (implicit) copy constructor is emitted out of line, fn_82D6B540.
// The assignment is the implicit member-wise one: inline in 82D9D568, and also emitted out of line
// as fn_82D92FF0, which copies the transform, the swept transform, m_deltaAngle, three floats and
// the three bytes at +0xAC to +0xAE (nothing at +0xAF).
class hkMotionState {
public:
    hkMotionState() {}
    hkMotionState(const hkMotionState &other);
    hkTransform &getTransform() { return m_transform; }
    const hkTransform &getTransform() const { return m_transform; }
    hkSweptTransform &getSweptTransform() { return m_sweptTransform; }
    const hkSweptTransform &getSweptTransform() const { return m_sweptTransform; }
    void initMotionState(const hkVector4 &position, const hkQuaternion &rotation)
    {
        fn_830824B8(this, position, rotation);
    }

    hkTransform m_transform;          // +0x0
    hkSweptTransform m_sweptTransform;   // +0x40
    hkVector4 m_deltaAngle;           // +0x90
    hkReal m_objectRadius;            // +0xA0
    hkReal m_linearDamping;           // +0xA4
    hkReal m_angularDamping;          // +0xA8
    hkUFloat8 m_maxLinearVelocity;    // +0xAC
    hkUFloat8 m_maxAngularVelocity;   // +0xAD
    hkUint8 m_deactivationClass;      // +0xAE
};

#endif
