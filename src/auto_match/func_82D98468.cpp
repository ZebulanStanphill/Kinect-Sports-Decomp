// hkpBreakableConstraintData::~hkpBreakableConstraintData (Physics/Dynamics/Constraint/Breakable/hkpBreakableConstraintData.cpp).
#include "havok/hkBase.h"
#include "havok/hkpConstraintData.h"

class hkpParametricCurve : public hkReferencedObject {
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
