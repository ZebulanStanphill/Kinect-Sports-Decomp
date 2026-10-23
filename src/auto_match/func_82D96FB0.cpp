// hkpPrismaticConstraintData::~hkpPrismaticConstraintData (Physics/Dynamics/Constraint/Bilateral/Prismatic/hkpPrismaticConstraintData.cpp).
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

class hkpPrismaticConstraintData : public hkpConstraintData {
public:
    virtual ~hkpPrismaticConstraintData();

    char m_atoms[0xAC - 0xC];             // +0xC  hkpPrismaticConstraintData::Atoms, up to
    hkpConstraintMotor *m_motor;          // +0xAC m_atoms.m_motor.m_motor
};

hkpPrismaticConstraintData::~hkpPrismaticConstraintData()
{
    if (m_motor)
        m_motor->removeReference();
}
