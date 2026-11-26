// hkpMalleableConstraintData::~hkpMalleableConstraintData (Physics/Dynamics/Constraint/Malleable/hkpMalleableConstraintData.cpp).
#include "havok/hkBase.h"
#include "havok/hkpConstraintData.h"

class hkpParametricCurve : public hkReferencedObject {
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
