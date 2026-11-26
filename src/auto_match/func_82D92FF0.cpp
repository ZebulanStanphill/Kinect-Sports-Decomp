#include "havok/hkBase.h"
#include "havok/hkTransform.h"
#include "havok/hkSweptTransform.h"

extern "C" const float lbl_82131F88[]; // hkUFloat8 -> hkReal table

class hkUFloat8
{
  public:
    HK_FORCE_INLINE operator hkReal() const
    {
        return lbl_82131F88[m_value];
    }

    hkUint8 m_value;
};

class hkMotionState;
extern "C" void fn_82D92FF0(hkMotionState *self, const hkMotionState *other); // hkMotionState::operator=

class hkMotionState
{
  public:
    HK_FORCE_INLINE void operator=(const hkMotionState &other)
    {
        m_transform = other.m_transform;
        m_sweptTransform = other.m_sweptTransform;
        m_deltaAngle = other.m_deltaAngle;
        m_objectRadius = other.m_objectRadius;
        m_linearDamping = other.m_linearDamping;
        m_angularDamping = other.m_angularDamping;
        m_maxLinearVelocity = other.m_maxLinearVelocity;
        m_maxAngularVelocity = other.m_maxAngularVelocity;
        m_deactivationClass = other.m_deactivationClass;
    }

    hkTransform m_transform;           // +0x00
    hkSweptTransform m_sweptTransform; // +0x40
    hkVector4 m_deltaAngle;            // +0x90
    hkReal m_objectRadius;             // +0xa0
    hkReal m_linearDamping;            // +0xa4
    hkReal m_angularDamping;           // +0xa8
    hkUFloat8 m_maxLinearVelocity;     // +0xac
    hkUFloat8 m_maxAngularVelocity;    // +0xad
    hkUint8 m_deactivationClass;       // +0xae
};

extern "C" void fn_82D92FF0(hkMotionState *self, const hkMotionState *other)
{
    *self = *other;
}
