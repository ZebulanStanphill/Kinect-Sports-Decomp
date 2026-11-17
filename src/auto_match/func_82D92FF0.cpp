#include "havok/hkBase.h"
#include "havok/hkString.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;

typedef __vector4 hkQuadReal;

class hkVector4
{
  public:
    HK_FORCE_INLINE void operator=(const hkVector4 &v)
    {
        m_quad = v.m_quad;
    }

    HK_FORCE_INLINE hkReal &operator()(int i)
    {
        return m_quad.vector4_f32[i];
    }

    HK_FORCE_INLINE const hkReal &operator()(int i) const
    {
        return m_quad.vector4_f32[i];
    }

    hkQuadReal m_quad;
};

class hkQuaternion
{
  public:
    hkVector4 m_vec;
};

class hkMatrix3
{
  public:
    hkVector4 m_col0;
    hkVector4 m_col1;
    hkVector4 m_col2;
};

class hkTransform
{
  public:
    hkVector4 m_rotation[3];
    hkVector4 m_translation;
};

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

class hkSweptTransform
{
  public:
    HK_FORCE_INLINE hkReal getBaseTime() const
    {
        return m_centerOfMass0(3);
    }

    HK_FORCE_INLINE hkReal getInvDeltaTime() const
    {
        return m_centerOfMass1(3);
    }

    hkVector4 m_centerOfMass0;     // +0x00 (w: base time)
    hkVector4 m_centerOfMass1;     // +0x10 (w: inverse delta time)
    hkQuaternion m_rotation0;      // +0x20
    hkQuaternion m_rotation1;      // +0x30
    hkVector4 m_centerOfMassLocal; // +0x40
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
