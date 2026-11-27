// hkpLimitedHingeConstraintData::~hkpLimitedHingeConstraintData (Physics/Dynamics/Constraint/Bilateral/LimitedHinge/hkpLimitedHingeConstraintData.cpp).
#include "havok/hkBase.h"
#include "havok/hkpConstraintMotor.h"
#include "havok/hkpLimitedHingeConstraintData.h"

hkpLimitedHingeConstraintData::~hkpLimitedHingeConstraintData()
{
    if (m_atoms.m_angMotor.m_motor)
        m_atoms.m_angMotor.m_motor->removeReference();
}
