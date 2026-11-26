// hkpGenericConstraintData::~hkpGenericConstraintData (Physics/Dynamics/Constraint/Bilateral/Generic/hkpGenericConstraintData.cpp): releases the scheme's motors; the scheme's destructor is out of line.
#include "havok/hkBase.h"
#include "havok/hkpConstraintMotor.h"
#include "havok/hkpGenericConstraintData.h"

hkpGenericConstraintData::~hkpGenericConstraintData()
{
    for (int i = 0; i < m_scheme.m_motors.getSize(); i++)
        m_scheme.m_motors[i]->removeReference();
}
