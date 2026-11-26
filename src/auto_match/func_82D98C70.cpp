// hkpMalleableConstraintData scalar deleting destructor, generated from the destructor below
// (Physics/Dynamics/Constraint/Malleable/hkpMalleableConstraintData.cpp; ~ is fn_82D98B78, inlined here).
#include "havok/hkBase.h"
#include "havok/hkpMalleableConstraintData.h"

hkpMalleableConstraintData::~hkpMalleableConstraintData()
{
    m_constraintData->removeReference();
}
