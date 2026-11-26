// hkpLimitedHingeConstraintData::hkpLimitedHingeConstraintData() (Physics/Dynamics/Constraint/Bilateral/
// LimitedHinge/hkpLimitedHingeConstraintData.cpp), /O2 /QVMXReserve. The atoms' own constructor (82D93FE8)
// is out of line.
// -pi and pi are literals, and the rename map names the game's copies __real@c0490fdb and __real@40490fdb.
#include "havok/hkBase.h"
#include "havok/hkpLimitedHingeConstraintData.h"

hkpLimitedHingeConstraintData::hkpLimitedHingeConstraintData()
{
    m_atoms.m_transforms.m_transformA.setIdentity();
    m_atoms.m_transforms.m_transformB.setIdentity();

    m_atoms.m_2dAng.m_freeRotationAxis = 0;

    m_atoms.m_angLimit.m_limitAxis = 0;
    m_atoms.m_angLimit.m_minAngle = -3.14159265358979f;
    m_atoms.m_angLimit.m_maxAngle = 3.14159265358979f;
    m_atoms.m_angLimit.m_angularLimitsTauFactor = 1.0f;

    m_atoms.m_angFriction.m_firstFrictionAxis = 0;
    m_atoms.m_angFriction.m_numFrictionAxes = 1;
    m_atoms.m_angFriction.m_maxFrictionTorque = 0.0f;

    m_atoms.m_angMotor.m_initializedOffset = 0x40;
    m_atoms.m_angMotor.m_previousTargetAngleOffset = 0x44;
    m_atoms.m_angMotor.m_correspondingAngLimitSolverResultOffset = 0x10;
    m_atoms.m_angMotor.m_isEnabled = false;
    m_atoms.m_angMotor.m_targetAngle = 0.0f;
    m_atoms.m_angMotor.m_motor = HK_NULL;
    m_atoms.m_angMotor.m_motorAxis = 0;
}
