// hkpRagdollLimitsData::isValid() const (Physics/Dynamics/Constraint/Bilateral/Ragdoll/hkpRagdollLimitsData.cpp):
// slot +0x1C of ??_7hkpRagdollLimitsData@@6B@. Each test is folded into the result in turn: both local rotations
// orthonormal (82CE6150, hkRotation's isOrthonormal by its use, keeps its fn_ name; the game's epsilon keeps its
// lbl_ name), the cone limit's minimum at -100 (the cone limit measures from its own axis), its maximum in
// [0, pi), and both other limits' minimum not above their maximum.
#include "havok/hkpRagdollLimitsData.h"

extern "C" {
hkBool *fn_82CE6150(hkBool *result, const hkRotation *rotation, hkReal epsilon);
extern float lbl_82006848;
}

hkBool hkpRagdollLimitsData::isValid() const
{
    hkBool valid = true;
    hkReal eps = lbl_82006848;
    hkBool tmp;
    valid = valid && *fn_82CE6150(&tmp, &m_atoms.m_rotations.m_rotationA, eps);
    valid = valid && *fn_82CE6150(&tmp, &m_atoms.m_rotations.m_rotationB, eps);
    valid = valid && m_atoms.m_coneLimit.m_minAngle == -100.0f;
    valid = valid && m_atoms.m_coneLimit.m_maxAngle >= 0.0f;
    valid = valid && m_atoms.m_coneLimit.m_maxAngle < 3.14159265358979f;
    valid = valid && m_atoms.m_planesLimit.m_minAngle <= m_atoms.m_planesLimit.m_maxAngle;
    valid = valid && m_atoms.m_twistLimit.m_minAngle <= m_atoms.m_twistLimit.m_maxAngle;
    return valid;
}
