// hkpFixedRigidMotion::hkpFixedRigidMotion(const hkVector4 &, const hkQuaternion &) (Physics/Dynamics/Motion/Rigid/hkpFixedRigidMotion.cpp).
#include "havok/hkBase.h"

// VMX128 vector type and the intrinsic hkVector4::setZero4 uses (the XDK's vectorintrinsics.h is not
// available, so they are declared here; the compiler implements __vxor itself).
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
extern "C" __vector4 __vxor(__vector4 a, __vector4 b);
#pragma intrinsic(__vxor)

typedef __vector4 hkQuadReal;

class hkVector4 {
public:
    HK_FORCE_INLINE hkVector4() {}
    HK_FORCE_INLINE hkVector4(const hkVector4 &v) { m_quad = v.m_quad; }
    HK_FORCE_INLINE void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    HK_FORCE_INLINE void setZero4() { m_quad = __vxor(m_quad, m_quad); }
    HK_FORCE_INLINE hkReal &operator()(int i) { return m_quad.vector4_f32[i]; }
    HK_FORCE_INLINE const hkReal &operator()(int i) const { return m_quad.vector4_f32[i]; }
    hkQuadReal m_quad;
};

class hkQuaternion {
public:
    hkVector4 m_vec;
};

// hkHalf (Common/Base/Types/hkBaseTypes.h): the top 16 bits of a float.
class hkHalf {
public:
    hkHalf &operator=(const hkReal &f)
    {
        int t = ((const int *)&f)[0];
        m_value = hkInt16(t >> 16);
        return *this;
    }
    hkInt16 m_value;
};

extern "C" const float lbl_82002AE0;   // 1.0f

// hkMotionState::initMotionState(const hkVector4 &, const hkQuaternion &) is out of line (fn_830824B8).
class hkMotionState;
extern "C" void fn_830824B8(hkMotionState *self, const hkVector4 &position, const hkQuaternion &rotation);

// hkMotionState (Common/Base/Math/Motion/hkMotionState.h), 0xB0 bytes.
class hkMotionState {
public:
    void initMotionState(const hkVector4 &position, const hkQuaternion &rotation) { fn_830824B8(this, position, rotation); }

    char m_transformEtc[0xA0];   // +0x0  m_transform, m_sweptTransform, m_deltaAngle
    hkReal m_objectRadius;       // +0xA0
    hkReal m_linearDamping;      // +0xA4
    hkReal m_angularDamping;     // +0xA8
    char m_rest[0x4];            // +0xAC
};

class hkpMaxSizeMotion;

// hkpMotion (Physics/Dynamics/Motion/hkpMotion.h), 0x120 bytes.
class hkpMotion : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    enum MotionType {
        MOTION_INVALID,
        MOTION_DYNAMIC,
        MOTION_SPHERE_INERTIA,
        MOTION_BOX_INERTIA,
        MOTION_KEYFRAMED,
        MOTION_FIXED,
        MOTION_THIN_BOX_INERTIA,
        MOTION_CHARACTER,
        MOTION_MAX_ID
    };
    hkpMotion(const hkVector4 &position, const hkQuaternion &rotation, bool wantDeactivation = false);

    hkUint8 m_type;                                // +0x8   hkEnum<MotionType, hkUint8>
    hkUint8 m_deactivationIntegrateCounter;        // +0x9
    hkUint16 m_deactivationNumInactiveFrames[2];   // +0xA
    hkMotionState m_motionState;                   // +0x10
    hkVector4 m_inertiaAndMassInv;                 // +0xC0
    hkVector4 m_linearVelocity;                    // +0xD0
    hkVector4 m_angularVelocity;                   // +0xE0
    hkVector4 m_deactivationRefPosition[2];        // +0xF0
    hkUint32 m_deactivationRefOrientation[2];      // +0x110
    hkpMaxSizeMotion *m_savedMotion;               // +0x118
    hkUint16 m_savedQualityTypeIndex;              // +0x11C
    hkHalf m_gravityFactor;                        // +0x11E
};

class hkpBoxMotion : public hkpMotion {
public:
    hkpBoxMotion(const hkVector4 &position, const hkQuaternion &rotation);
};

class hkpThinBoxMotion : public hkpBoxMotion {
public:
    hkpThinBoxMotion(const hkVector4 &position, const hkQuaternion &rotation);
};

class hkpKeyframedRigidMotion : public hkpMotion {
public:
    hkpKeyframedRigidMotion(const hkVector4 &position, const hkQuaternion &rotation);
};

class hkpFixedRigidMotion : public hkpKeyframedRigidMotion {
public:
    hkpFixedRigidMotion(const hkVector4 &position, const hkQuaternion &rotation);
};

hkpFixedRigidMotion::hkpFixedRigidMotion(const hkVector4 &position, const hkQuaternion &rotation) : hkpKeyframedRigidMotion(position, rotation)
{
    m_type = MOTION_FIXED;
}
