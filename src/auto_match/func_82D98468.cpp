// hkpBreakableConstraintData::~hkpBreakableConstraintData (Physics/Dynamics/Constraint/Breakable/hkpBreakableConstraintData.cpp).
#include "havok/hkBase.h"
#include "havok/hkpBreakableConstraintData.h"

hkpBreakableConstraintData::~hkpBreakableConstraintData()
{
    m_constraintData->removeReference();
}
