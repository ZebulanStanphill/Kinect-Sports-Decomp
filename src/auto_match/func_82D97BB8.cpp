// hkpRagdollConstraintData::~hkpRagdollConstraintData (Physics/Dynamics/Constraint/Bilateral/Ragdoll/hkpRagdollConstraintData.cpp).
#include "havok/hkBase.h"

class hkpConstraintMotor : public hkReferencedObject {
};
class hkpParametricCurve : public hkReferencedObject {
};

class hkpConstraintData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkUlong m_userData;   // +0x8
};

class hkpRagdollConstraintData : public hkpConstraintData {
public:
    virtual ~hkpRagdollConstraintData();

    char m_atoms[0xE0 - 0xC];             // +0xC  hkpRagdollConstraintData::Atoms, up to
    hkpConstraintMotor *m_motors[3];      // +0xE0 m_atoms.m_ragdollMotors.m_motors
};

hkpRagdollConstraintData::~hkpRagdollConstraintData()
{
    for (int i = 0; i < 3; i++)
        if (m_motors[i])
            m_motors[i]->removeReference();
}
