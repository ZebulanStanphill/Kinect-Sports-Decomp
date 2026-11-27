// hkpPrismaticConstraintData::~hkpPrismaticConstraintData (Physics/Dynamics/Constraint/Bilateral/Prismatic/hkpPrismaticConstraintData.cpp).
#include "havok/hkBase.h"
#include "havok/hkpConstraintMotor.h"
#include "havok/hkpPrismaticConstraintData.h"

hkpPrismaticConstraintData::~hkpPrismaticConstraintData()
{
    if (m_atoms.m_motor.m_motor)
        m_atoms.m_motor.m_motor->removeReference();
}
