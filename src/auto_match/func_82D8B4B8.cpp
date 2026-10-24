// hkpRigidBody::createDynamicRigidMotion(hkpMotion::MotionType, const hkVector4 &position,
// const hkQuaternion &rotation, hkReal mass, const hkMatrix3 &inertiaLocal,
// const hkVector4 &centreOfMass, hkReal maxLinearVelocity, hkReal maxAngularVelocity,
// hkpMaxSizeMotion *motionBufferOut) (Physics/Dynamics/Entity/hkpRigidBody.cpp): constructs the
// motion for the motion type in the caller's buffer (placement new, hence the null checks), then
// sets its inertia, centre of mass and mass (except for keyframed motions) and its velocity limits.
// A static member function; it keeps its fn_ name (callers are C units). Havok code: /O2 (flag file).
// The cases are in the order their code appears in the binary (sphere, box, thin box, dynamic, ...),
// which decides which duplicate constructor block the dynamic case shares. hkMath::max2/min2 take
// const references: by value, the shared (1,1) - (2,2) difference is computed twice. The 0.8f
// sphere test is a plain literal (symbols.txt names its constant __real@3f4ccccd).
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;

extern "C" double __fsel(double a, double b, double c);   // PPC intrinsic

struct hkMath {
    static HK_FORCE_INLINE hkReal HK_CALL max2(const hkReal &x, const hkReal &y) { return hkReal(__fsel(x - y, x, y)); }
    static HK_FORCE_INLINE hkReal HK_CALL min2(const hkReal &x, const hkReal &y) { return hkReal(__fsel(x - y, y, x)); }
};

class hkVector4 {
public:
    HK_FORCE_INLINE hkReal &operator()(int i) { return m_quad.vector4_f32[i]; }
    HK_FORCE_INLINE const hkReal &operator()(int i) const { return m_quad.vector4_f32[i]; }
    hkQuadReal m_quad;
};

class hkQuaternion {
public:
    hkVector4 m_vec;
};

class hkMatrix3 {
public:
    HK_FORCE_INLINE const hkReal &operator()(int row, int col) const { return m_col[col](row); }
    hkVector4 m_col[3];
};

// hkUFloat8 (Common/Base/Types/hkBaseTypes.h): operator=(const hkReal &) is out of line
// (fn_82CE5458, which keeps its fn_ name: Matching C units call it).
class hkUFloat8;
extern "C" void fn_82CE5458(hkUFloat8 *self, const float *f);
class hkUFloat8 {
public:
    HK_FORCE_INLINE void operator=(const hkReal &f) { fn_82CE5458(this, &f); }
    hkUint8 m_value;
};

// hkMotionState (Common/Base/Math/Motion/hkMotionState.h), 0xB0 bytes.
class hkMotionState {
public:
    char m_transformEtc[0xA0];         // +0x0  m_transform, m_sweptTransform, m_deltaAngle
    hkReal m_objectRadius;             // +0xA0
    hkReal m_linearDamping;            // +0xA4
    hkReal m_angularDamping;           // +0xA8
    hkUFloat8 m_maxLinearVelocity;     // +0xAC
    hkUFloat8 m_maxAngularVelocity;    // +0xAD
    hkUint8 m_deactivationClass;       // +0xAE
    char m_rest[0x1];                  // +0xAF
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

    virtual void setMass(hkReal m);                                          // +0x0C
    virtual void setMassInv(hkReal mInv);                                    // +0x10
    virtual void getInertiaLocal(hkMatrix3 &inertiaOut) const;               // +0x14
    virtual void getInertiaWorld(hkMatrix3 &inertiaOut) const;               // +0x18
    virtual void setInertiaLocal(const hkMatrix3 &inertia);                  // +0x1C
    virtual void setInertiaInvLocal(const hkMatrix3 &inertiaInv);            // +0x20
    virtual void getInertiaInvLocal(hkMatrix3 &inertiaInvOut) const;         // +0x24
    virtual void getInertiaInvWorld(hkMatrix3 &inertiaInvOut) const;         // +0x28
    virtual void setCenterOfMassInLocal(const hkVector4 &centerOfMass);      // +0x2C

    hkMotionState *getMotionState() { return &m_motionState; }

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
    hkInt16 m_gravityFactor;                       // +0x11E
};

class hkpSphereMotion : public hkpMotion {
public:
    HK_FORCE_INLINE hkpSphereMotion(const hkVector4 &position, const hkQuaternion &rotation) : hkpMotion(position, rotation)
    {
        m_type = MOTION_SPHERE_INERTIA;
    }
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

class hkpCharacterMotion : public hkpMotion {
public:
    HK_FORCE_INLINE hkpCharacterMotion(const hkVector4 &position, const hkQuaternion &rotation) : hkpMotion(position, rotation)
    {
        m_type = MOTION_CHARACTER;
    }
};

extern "C" void fn_82D8B4B8(hkpMotion::MotionType motionType, const hkVector4 &position, const hkQuaternion &rotation,
                            hkReal mass, const hkMatrix3 &inertiaLocal, const hkVector4 &centreOfMass,
                            hkReal maxLinearVelocity, hkReal maxAngularVelocity, hkpMaxSizeMotion *motionBufferOut)
{
    hkpMotion *motion;

    switch (motionType) {
    case hkpMotion::MOTION_SPHERE_INERTIA:
        motion = new (motionBufferOut) hkpSphereMotion(position, rotation);
        break;
    case hkpMotion::MOTION_BOX_INERTIA:
        motion = new (motionBufferOut) hkpBoxMotion(position, rotation);
        break;
    case hkpMotion::MOTION_THIN_BOX_INERTIA:
        motion = new (motionBufferOut) hkpThinBoxMotion(position, rotation);
        break;
    case hkpMotion::MOTION_DYNAMIC: {
        hkReal maxDiag = hkMath::max2(inertiaLocal(0, 0), hkMath::max2(inertiaLocal(1, 1), inertiaLocal(2, 2)));
        hkReal minDiag = hkMath::min2(inertiaLocal(0, 0), hkMath::min2(inertiaLocal(1, 1), inertiaLocal(2, 2)));
        if (minDiag > maxDiag * 0.8f) {
            motion = new (motionBufferOut) hkpSphereMotion(position, rotation);
        } else {
            motion = new (motionBufferOut) hkpBoxMotion(position, rotation);
        }
        break;
    }
    case hkpMotion::MOTION_KEYFRAMED:
        maxLinearVelocity = 1000000.0f;
        maxAngularVelocity = 1000000.0f;
        motion = new (motionBufferOut) hkpKeyframedRigidMotion(position, rotation);
        break;
    case hkpMotion::MOTION_CHARACTER:
        motion = new (motionBufferOut) hkpCharacterMotion(position, rotation);
        break;
    case hkpMotion::MOTION_FIXED:
        motion = new (motionBufferOut) hkpFixedRigidMotion(position, rotation);
        break;
    default:
        motion = new (motionBufferOut) hkpFixedRigidMotion(position, rotation);
        break;
    }

    if (motionType != hkpMotion::MOTION_KEYFRAMED) {
        motion->setInertiaLocal(inertiaLocal);
        motion->setCenterOfMassInLocal(centreOfMass);
        motion->setMass(mass);
    }
    motion->getMotionState()->m_maxLinearVelocity = maxLinearVelocity;
    motion->getMotionState()->m_maxAngularVelocity = maxAngularVelocity;
}
