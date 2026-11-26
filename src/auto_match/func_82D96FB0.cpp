// hkpPrismaticConstraintData::~hkpPrismaticConstraintData (Physics/Dynamics/Constraint/Bilateral/Prismatic/hkpPrismaticConstraintData.cpp).
#include "havok/hkBase.h"
#include "havok/hkpConstraintMotor.h"
#include "havok/hkpConstraintData.h"

class hkpParametricCurve : public hkReferencedObject {
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
