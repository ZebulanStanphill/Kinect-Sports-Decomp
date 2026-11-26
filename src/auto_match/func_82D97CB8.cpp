// hkpRagdollConstraintData::hkpRagdollConstraintData() (Physics/Dynamics/Constraint/Bilateral/Ragdoll/
// hkpRagdollConstraintData.cpp), /O2 /QVMXReserve. The atoms' own constructor (82D98100) is out of line.
// The float constants are literals; the rename map names the game's copies __real@... (symbols.txt already
// names 1.0f __real@3f800000).
#include "havok/hkBase.h"
#include "havok/hkpRagdollConstraintData.h"

hkpRagdollConstraintData::hkpRagdollConstraintData()
{
    m_atoms.m_transforms.m_transformA.setIdentity();
    m_atoms.m_transforms.m_transformB.setIdentity();

    m_atoms.m_angFriction.m_firstFrictionAxis = 0;
    m_atoms.m_angFriction.m_numFrictionAxes = 3;
    m_atoms.m_angFriction.m_maxFrictionTorque = 0.0f;

    m_atoms.m_ragdollMotors.m_isEnabled = false;
    m_atoms.m_ragdollMotors.m_initializedOffset = 0x60;
    m_atoms.m_ragdollMotors.m_previousTargetAnglesOffset = 0x64;
    m_atoms.m_ragdollMotors.m_target_bRca.setIdentity();
    m_atoms.m_ragdollMotors.m_motors[0] = HK_NULL;
    m_atoms.m_ragdollMotors.m_motors[1] = HK_NULL;
    m_atoms.m_ragdollMotors.m_motors[2] = HK_NULL;

    m_atoms.m_twistLimit.m_twistAxis = 0;
    m_atoms.m_twistLimit.m_refAxis = 1;
    m_atoms.m_twistLimit.m_minAngle = -0.5236f;
    m_atoms.m_twistLimit.m_maxAngle = 0.5236f;
    m_atoms.m_twistLimit.m_angularLimitsTauFactor = 0.8f;

    m_atoms.m_coneLimit.m_twistAxisInA = 0;
    m_atoms.m_coneLimit.m_refAxisInB = 0;
    m_atoms.m_coneLimit.m_angleMeasurementMode = hkpConeLimitConstraintAtom::ZERO_WHEN_VECTORS_ALIGNED;
    m_atoms.m_coneLimit.m_memOffsetToAngleOffset = 0x38;
    m_atoms.m_coneLimit.m_minAngle = -100.0f;
    m_atoms.m_coneLimit.m_maxAngle = 1.0f;
    m_atoms.m_coneLimit.m_angularLimitsTauFactor = 0.8f;

    m_atoms.m_planesLimit.m_twistAxisInA = 0;
    m_atoms.m_planesLimit.m_refAxisInB = 1;
    m_atoms.m_planesLimit.m_angleMeasurementMode = hkpConeLimitConstraintAtom::ZERO_WHEN_VECTORS_PERPENDICULAR;
    m_atoms.m_planesLimit.m_minAngle = -0.025f;
    m_atoms.m_planesLimit.m_maxAngle = 0.025f;
    m_atoms.m_planesLimit.m_angularLimitsTauFactor = 0.8f;
}
