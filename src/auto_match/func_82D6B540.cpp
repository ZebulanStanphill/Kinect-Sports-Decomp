#include "havok/hkBase.h"
#include "havok/hkTransform.h"

struct SweptTransform_82D6B540 {
    hkUint8 bytes[0x50];
};

class hkMotionState
{
  public:
    hkMotionState(const hkMotionState &other);

    hkTransform &getTransform()
    {
        return m_transform;
    }

    const hkTransform &getTransform() const
    {
        return m_transform;
    }

    hkTransform m_transform;                  // 0x00
    SweptTransform_82D6B540 m_sweptTransform; // 0x40
    hkVector4 m_deltaAngle;                   // 0x90
    hkReal m_objectRadius;                    // 0xa0
    hkReal m_linearDamping;                   // 0xa4
    hkReal m_angularDamping;                  // 0xa8
    hkUint8 m_maxLinearVelocity;              // 0xac
    hkUint8 m_maxAngularVelocity;             // 0xad
    hkUint8 m_deactivationClass;              // 0xae
};

hkMotionState::hkMotionState(const hkMotionState &other)
{
    __vector4 first = other.m_transform.m_rotation.m_col0.m_quad;
    __vector4 second = other.m_transform.m_rotation.m_col1.m_quad;
    __vector4 third = other.m_transform.m_rotation.m_col2.m_quad;
    __vector4 translation = other.m_transform.m_translation.m_quad;
    m_transform.m_rotation.m_col0.m_quad = first;
    m_transform.m_rotation.m_col1.m_quad = second;
    m_transform.m_rotation.m_col2.m_quad = third;
    m_transform.m_translation.m_quad = translation;
    m_sweptTransform = other.m_sweptTransform;
    m_deltaAngle.m_quad = other.m_deltaAngle.m_quad;
    m_objectRadius = other.m_objectRadius;
    m_linearDamping = other.m_linearDamping;
    m_angularDamping = other.m_angularDamping;
    m_maxLinearVelocity = other.m_maxLinearVelocity;
    m_maxAngularVelocity = other.m_maxAngularVelocity;
    m_deactivationClass = other.m_deactivationClass;
}
