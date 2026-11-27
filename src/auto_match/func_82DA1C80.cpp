// hkpPulleyConstraintData::hkpPulleyConstraintData() (Physics/Dynamics/Constraint/Pulley/
// hkpPulleyConstraintData.cpp), /O2 /QVMXReserve (flag file).
// The atoms' constructors store their types (3 = SET_LOCAL_TRANSLATIONS, 20 = PULLEY); the body zeroes
// the four pivots and sets the rope length 0.0f and the leverage 1.0f. Both floats are literals.
#include "havok/hkBase.h"
#include "havok/hkpPulleyConstraintData.h"

// The game's 1.0f keeps its lbl_ name (Matching units reference it).

hkpPulleyConstraintData::hkpPulleyConstraintData()
{
    m_atoms.m_translations.m_translationA.setZero4();
    m_atoms.m_translations.m_translationB.setZero4();
    m_atoms.m_pulley.m_fixedPivotAinWorld.setZero4();
    m_atoms.m_pulley.m_fixedPivotBinWorld.setZero4();
    m_atoms.m_pulley.m_ropeLength = 0.0f;
    m_atoms.m_pulley.m_leverageOnBodyB = 1.0f;
}
