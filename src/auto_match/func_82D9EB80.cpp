// hkpHingeLimitsData::hkpHingeLimitsData() (Physics/Dynamics/Constraint/Bilateral/Hinge/hkpHingeLimitsData.cpp),
// /O2 /QVMXReserve. -pi and pi are literals; the rename map names the game's copies __real@c0490fdb and
// __real@40490fdb (as for hkpLimitedHingeConstraintData, func_82D93C00).
#include "havok/hkBase.h"
#include "havok/hkpHingeLimitsData.h"

// The game's 1.0f keeps its lbl_ name (Matching units reference it).

hkpHingeLimitsData::hkpHingeLimitsData()
{
    m_atoms.m_rotations.m_rotationA.setIdentity();
    m_atoms.m_rotations.m_rotationB.setIdentity();

    m_atoms.m_2dAng.m_freeRotationAxis = 0;

    m_atoms.m_angLimit.m_limitAxis = 0;
    m_atoms.m_angLimit.m_minAngle = -3.14159265358979f;
    m_atoms.m_angLimit.m_maxAngle = 3.14159265358979f;
    m_atoms.m_angLimit.m_angularLimitsTauFactor = 1.0f;
}
