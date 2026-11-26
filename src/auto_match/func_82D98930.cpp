// hkpBreakableConstraintData scalar deleting destructor, generated from the destructor below
// (Physics/Dynamics/Constraint/Breakable/hkpBreakableConstraintData.cpp; ~ is fn_82D98468, inlined here).
#include "havok/hkBase.h"
#include "havok/hkpBreakableConstraintData.h"

hkpBreakableConstraintData::~hkpBreakableConstraintData()
{
    m_constraintData->removeReference();
}
