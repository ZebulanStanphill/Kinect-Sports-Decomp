// hkpMalleableConstraintData::hkpMalleableConstraintData(hkpConstraintData *) (Physics/Dynamics/Constraint/Malleable/hkpMalleableConstraintData.cpp). The strength is the literal 0.01f; the game's copy is lbl_82021544, so this matches only with it named __real@3c23d70a (a load of an extern constant cannot move above the stores).
#include "havok/hkBase.h"
#include "havok/hkpConstraintAtom.h"
#include "havok/hkpConstraintData.h"

class hkpMalleableConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpMalleableConstraintData(hkpConstraintData *constraintData);

    hkpConstraintData *m_constraintData;   // +0xC
    hkpBridgeAtoms m_atoms;                // +0x10
    hkReal m_strength;                     // +0x1C
};

hkpMalleableConstraintData::hkpMalleableConstraintData(hkpConstraintData *constraintData)
    : m_constraintData(constraintData), m_strength(0.01f)
{
    m_constraintData->addReference();
    m_atoms.m_bridgeAtom.init(this);
}
