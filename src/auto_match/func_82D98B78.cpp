// hkpMalleableConstraintData::~hkpMalleableConstraintData (Physics/Dynamics/Constraint/Malleable/hkpMalleableConstraintData.cpp).
#include "havok/hkBase.h"
#include "havok/hkpMalleableConstraintData.h"

hkpMalleableConstraintData::~hkpMalleableConstraintData()
{
    m_constraintData->removeReference();
}
