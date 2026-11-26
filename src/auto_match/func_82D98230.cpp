// hkpStiffSpringConstraintData::hkpStiffSpringConstraintData() (Physics/Dynamics/Constraint/Bilateral/StiffSpring/
// hkpStiffSpringConstraintData.cpp). It keeps its fn_ name, so the constructor is defined forced inline and run by
// MSVC's explicit constructor call: the atoms' constructors set their types, then the pivots and length are zeroed.
#include "havok/hkBase.h"
#include "havok/hkpStiffSpringConstraintData.h"

HK_FORCE_INLINE hkpStiffSpringConstraintData::hkpStiffSpringConstraintData()
{
    m_atoms.m_pivots.m_translationA.setZero4();
    m_atoms.m_pivots.m_translationB.setZero4();
    m_atoms.m_spring.m_length = 0.0f;
}

extern "C" hkpStiffSpringConstraintData *fn_82D98230(hkpStiffSpringConstraintData *self)
{
    self->hkpStiffSpringConstraintData::hkpStiffSpringConstraintData();
    return self;
}
