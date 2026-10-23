// hkpBreakableConstraintData::~hkpBreakableConstraintData (Physics/Dynamics/Constraint/Breakable/hkpBreakableConstraintData.cpp).
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

class hkpBreakableConstraintData : public hkpConstraintData {
public:
    virtual ~hkpBreakableConstraintData();

    char m_atoms[0xC];                    // +0xC  hkpBridgeAtoms
    hkpConstraintData *m_constraintData;  // +0x18
};

hkpBreakableConstraintData::~hkpBreakableConstraintData()
{
    m_constraintData->removeReference();
}
