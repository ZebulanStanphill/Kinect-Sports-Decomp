// hkpBoxMotion::hkpBoxMotion(const hkVector4 &, const hkQuaternion &) (Physics/Dynamics/Motion/Rigid/hkpBoxMotion.cpp). The inertia starts at the vector constant (1,1,1,1), lbl_8217D960.
#include "havok/hkBase.h"
#include "havok/hkMotionState.h"

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

extern "C" void fn_830824B8(hkMotionState *self, const hkVector4 &position, const hkQuaternion &rotation);

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

extern "C" const hkVector4 lbl_8217D960;   // (1, 1, 1, 1)

hkpBoxMotion::hkpBoxMotion(const hkVector4 &position, const hkQuaternion &rotation) : hkpMotion(position, rotation)
{
    m_inertiaAndMassInv = lbl_8217D960;
    m_type = MOTION_BOX_INERTIA;
}
