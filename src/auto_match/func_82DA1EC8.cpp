// hkpRagdollLimitsData::hkpRagdollLimitsData() (Physics/Dynamics/Constraint/Bilateral/Ragdoll/hkpRagdollLimitsData.cpp), /O2 /QVMXReserve.
// The float constants are literals; the rename map names the game's copies __real@... (symbols.txt already
// names 1.0f __real@3f800000).
#include "havok/hkBase.h"
#include "havok/hkRotation.h"

// The game's 1.0f keeps its lbl_ name (Matching units reference it).

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
