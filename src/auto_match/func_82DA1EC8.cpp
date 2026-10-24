// hkpRagdollLimitsData::hkpRagdollLimitsData() (Physics/Dynamics/Constraint/Bilateral/Ragdoll/hkpRagdollLimitsData.cpp), /O2 /QVMXReserve.
// The float constants are literals; the rename map names the game's copies __real@... (1.0f is lbl_82002AE0,
// which Matching units reference, so it stays a static constant with that name).
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
extern "C" __vector4 __vxor(__vector4 a, __vector4 b);

// The game's 1.0f keeps its lbl_ name (Matching units reference it).
static const float lbl_82002AE0 = 1.0f;

class hkVector4 {
public:
    HK_FORCE_INLINE void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    HK_FORCE_INLINE void setZero4() { m_quad = __vxor(m_quad, m_quad); }
    HK_FORCE_INLINE hkReal &operator()(int i) { return m_quad.vector4_f32[i]; }
    __vector4 m_quad;
};

class hkMatrix3 {
public:
    HK_FORCE_INLINE void setZero()
    {
        hkVector4 zero; zero.setZero4();
        m_col0 = zero;
        m_col1 = zero;
        m_col2 = zero;
    }
    HK_FORCE_INLINE void setIdentity()
    {
        setZero();
        m_col0(0) = lbl_82002AE0;
        m_col1(1) = lbl_82002AE0;
        m_col2(2) = lbl_82002AE0;
    }
    hkVector4 m_col0, m_col1, m_col2;
};
class hkRotation : public hkMatrix3 {};

class hkpConstraintData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpConstraintData() : m_userData(0) {}
    hkUlong m_userData;   // +0x8
};

struct hkpConstraintAtom {
    enum AtomType {
        TYPE_SET_LOCAL_ROTATIONS = 4,
        TYPE_TWIST_LIMIT = 15,
        TYPE_CONE_LIMIT = 16
    };
    hkpConstraintAtom(AtomType type) : m_type(hkUint16(type)) {}
    hkUint16 m_type;
};

struct hkpSetLocalRotationsConstraintAtom : public hkpConstraintAtom {
    hkpSetLocalRotationsConstraintAtom() : hkpConstraintAtom(TYPE_SET_LOCAL_ROTATIONS) {}
    hkRotation m_rotationA;
    hkRotation m_rotationB;
};

struct hkpTwistLimitConstraintAtom : public hkpConstraintAtom {
    hkpTwistLimitConstraintAtom() : hkpConstraintAtom(TYPE_TWIST_LIMIT) { m_isEnabled = true; }
    hkUint8 m_isEnabled;
    hkUint8 m_twistAxis;
    hkUint8 m_refAxis;
    hkReal m_minAngle;
    hkReal m_maxAngle;
    hkReal m_angularLimitsTauFactor;
};

struct hkpConeLimitConstraintAtom : public hkpConstraintAtom {
    enum MeasurementMode {
        ZERO_WHEN_VECTORS_ALIGNED = 0,
        ZERO_WHEN_VECTORS_PERPENDICULAR = 1
    };
    hkpConeLimitConstraintAtom() : hkpConstraintAtom(TYPE_CONE_LIMIT) { m_isEnabled = true; m_memOffsetToAngleOffset = 0; }
    hkUint8 m_isEnabled;
    hkUint8 m_twistAxisInA;
    hkUint8 m_refAxisInB;
    hkUint8 m_angleMeasurementMode;
    hkUint8 m_memOffsetToAngleOffset;
    hkReal m_minAngle;
    hkReal m_maxAngle;
    hkReal m_angularLimitsTauFactor;
};

class hkpRagdollLimitsData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    struct Atoms {
        Atoms() {}
        hkpSetLocalRotationsConstraintAtom m_rotations;   // +0x10
        hkpTwistLimitConstraintAtom m_twistLimit;         // +0x80
        hkpConeLimitConstraintAtom m_coneLimit;           // +0x94
        hkpConeLimitConstraintAtom m_planesLimit;         // +0xA8
    };
    hkpRagdollLimitsData();
    void setConeLimitStabilization(hkBool enable)
    {
        m_atoms.m_coneLimit.m_memOffsetToAngleOffset = enable ? 16 : 0;
    }
    Atoms m_atoms;
};

hkpRagdollLimitsData::hkpRagdollLimitsData()
{
    m_atoms.m_rotations.m_rotationA.setIdentity();
    m_atoms.m_rotations.m_rotationB.setIdentity();

    m_atoms.m_twistLimit.m_twistAxis = 0;
    m_atoms.m_twistLimit.m_refAxis = 1;
    m_atoms.m_twistLimit.m_minAngle = -0.5236f;
    m_atoms.m_twistLimit.m_maxAngle = 0.5236f;
    m_atoms.m_twistLimit.m_angularLimitsTauFactor = 0.8f;

    m_atoms.m_coneLimit.m_twistAxisInA = 0;
    m_atoms.m_coneLimit.m_refAxisInB = 0;
    m_atoms.m_coneLimit.m_angleMeasurementMode = hkpConeLimitConstraintAtom::ZERO_WHEN_VECTORS_ALIGNED;
    m_atoms.m_coneLimit.m_minAngle = -100.0f;
    m_atoms.m_coneLimit.m_maxAngle = 1.0f;
    m_atoms.m_coneLimit.m_angularLimitsTauFactor = 0.8f;
    setConeLimitStabilization(true);

    m_atoms.m_planesLimit.m_twistAxisInA = 0;
    m_atoms.m_planesLimit.m_refAxisInB = 1;
    m_atoms.m_planesLimit.m_angleMeasurementMode = hkpConeLimitConstraintAtom::ZERO_WHEN_VECTORS_PERPENDICULAR;
    m_atoms.m_planesLimit.m_minAngle = -0.025f;
    m_atoms.m_planesLimit.m_maxAngle = 0.025f;
    m_atoms.m_planesLimit.m_angularLimitsTauFactor = 0.8f;
}
