// hkpRagdollLimitsData::hkpRagdollLimitsData() (Physics/Dynamics/Constraint/Bilateral/Ragdoll/hkpRagdollLimitsData.cpp), /O2 /QVMXReserve.
// The float constants are literals; the rename map names the game's copies __real@... (symbols.txt already
// names 1.0f __real@3f800000).
#include "havok/hkBase.h"
#include "havok/hkpConstraintData.h"
#include "havok/hkpSetLocalRotationsConstraintAtom.h"
#include "havok/hkpConeLimitConstraintAtom.h"
#include "havok/hkpTwistLimitConstraintAtom.h"

// The game's 1.0f keeps its lbl_ name (Matching units reference it).

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
