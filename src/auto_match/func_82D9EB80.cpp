// hkpHingeLimitsData::hkpHingeLimitsData() (Physics/Dynamics/Constraint/Bilateral/Hinge/hkpHingeLimitsData.cpp),
// /O2 /QVMXReserve. -pi and pi are literals; the rename map names the game's copies __real@c0490fdb and
// __real@40490fdb (as for hkpLimitedHingeConstraintData, func_82D93C00).
// The constructor keeps its fn_ name (func_82DBF380, which news and copies the data, is otherwise C-matchable):
// it is forced inline and run on the object by an explicit constructor call, which adds no null check.
#include "havok/hkBase.h"
#include "havok/hkpHingeLimitsData.h"

// The game's 1.0f keeps its lbl_ name (Matching units reference it).

HK_FORCE_INLINE hkpHingeLimitsData::hkpHingeLimitsData()
{
    m_atoms.m_rotations.m_rotationA.setIdentity();
    m_atoms.m_rotations.m_rotationB.setIdentity();

    m_atoms.m_2dAng.m_freeRotationAxis = 0;

    m_atoms.m_angLimit.m_limitAxis = 0;
    m_atoms.m_angLimit.m_minAngle = -3.14159265358979f;
    m_atoms.m_angLimit.m_maxAngle = 3.14159265358979f;
    m_atoms.m_angLimit.m_angularLimitsTauFactor = 1.0f;
}

extern "C" hkpHingeLimitsData *fn_82D9EB80(hkpHingeLimitsData *self)
{
    self->hkpHingeLimitsData::hkpHingeLimitsData();
    return self;
}
