// hkpLimitedHingeConstraintData::~hkpLimitedHingeConstraintData (Physics/Dynamics/Constraint/Bilateral/LimitedHinge/hkpLimitedHingeConstraintData.cpp).
#include "havok/hkBase.h"
#include "havok/hkpConstraintMotor.h"
#include "havok/hkpConstraintData.h"

class hkpLimitedHingeConstraintData : public hkpConstraintData {
public:
    virtual ~hkpLimitedHingeConstraintData();

    char m_atoms[0xB0 - 0xC];             // +0xC  hkpLimitedHingeConstraintData::Atoms, up to
    hkpConstraintMotor *m_angMotor;       // +0xB0 m_atoms.m_angMotor.m_motor
};

hkpLimitedHingeConstraintData::~hkpLimitedHingeConstraintData()
{
    if (m_angMotor)
        m_angMotor->removeReference();
}
