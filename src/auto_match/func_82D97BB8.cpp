// hkpRagdollConstraintData::~hkpRagdollConstraintData (Physics/Dynamics/Constraint/Bilateral/Ragdoll/hkpRagdollConstraintData.cpp).
#include "havok/hkBase.h"
#include "havok/hkpConstraintMotor.h"
#include "havok/hkpRagdollConstraintData.h"

hkpRagdollConstraintData::~hkpRagdollConstraintData()
{
    for (int i = 0; i < 3; i++)
        if (m_atoms.m_ragdollMotors.m_motors[i])
            m_atoms.m_ragdollMotors.m_motors[i]->removeReference();
}
