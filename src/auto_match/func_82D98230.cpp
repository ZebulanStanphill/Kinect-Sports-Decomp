// hkpStiffSpringConstraintData::hkpStiffSpringConstraintData() (Physics/Dynamics/Constraint/Bilateral/StiffSpring/
// hkpStiffSpringConstraintData.cpp): the atoms' constructors set their types, then the pivots and length are
// zeroed.
#include "havok/hkBase.h"
#include "havok/hkpStiffSpringConstraintData.h"

hkpStiffSpringConstraintData::hkpStiffSpringConstraintData()
{
    m_atoms.m_pivots.m_translationA.setZero4();
    m_atoms.m_pivots.m_translationB.setZero4();
    m_atoms.m_spring.m_length = 0.0f;
}
