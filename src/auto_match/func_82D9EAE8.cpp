// hkpHingeLimitsData::isValid() const (Physics/Dynamics/Constraint/Bilateral/Hinge/hkpHingeLimitsData.cpp): slot
// +0x1C of ??_7hkpHingeLimitsData@@6B@. Both local rotations must be orthonormal (82CE6150, hkRotation's
// isOrthonormal by its use, keeps its fn_ name; the game's epsilon keeps its lbl_ name).
#include "havok/hkpHingeLimitsData.h"

extern "C" {
hkBool *fn_82CE6150(hkBool *result, const hkRotation *rotation, hkReal epsilon);
extern float lbl_82006848;
}

hkBool hkpHingeLimitsData::isValid() const
{
    hkBool a, b;
    hkReal eps = lbl_82006848;
    return *fn_82CE6150(&a, &m_atoms.m_rotations.m_rotationA, eps) &&
           *fn_82CE6150(&b, &m_atoms.m_rotations.m_rotationB, eps);
}
