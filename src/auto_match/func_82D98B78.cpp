// hkpMalleableConstraintData::~hkpMalleableConstraintData (Physics/Dynamics/Constraint/Malleable/hkpMalleableConstraintData.cpp).
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

class hkpMalleableConstraintData : public hkpConstraintData {
public:
    virtual ~hkpMalleableConstraintData();

    hkpConstraintData *m_constraintData;  // +0xC
    char m_atoms[0xC];                    // +0x10 hkpBridgeAtoms
};

hkpMalleableConstraintData::~hkpMalleableConstraintData()
{
    m_constraintData->removeReference();
}
