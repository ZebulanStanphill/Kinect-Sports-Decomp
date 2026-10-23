// hkpBreakableConstraintData scalar deleting destructor, generated from the destructor below
// (Physics/Dynamics/Constraint/Breakable/hkpBreakableConstraintData.cpp; ~ is fn_82D98468, inlined here).
#include "havok/hkBase.h"

class hkpConstraintData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkUlong m_userData;   // +0x8
};

class hkpBreakableConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    virtual ~hkpBreakableConstraintData();

    char m_atoms[0xC];                    // +0xC  hkpBridgeAtoms
    hkpConstraintData *m_constraintData;  // +0x18
};

hkpBreakableConstraintData::~hkpBreakableConstraintData()
{
    m_constraintData->removeReference();
}
