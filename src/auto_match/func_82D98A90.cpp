// hkpMalleableConstraintData::hkpMalleableConstraintData(hkpConstraintData *) (Physics/Dynamics/Constraint/Malleable/hkpMalleableConstraintData.cpp). The strength is the literal 0.01f; the game's copy is lbl_82021544, so this matches only with it named __real@3c23d70a (a load of an extern constant cannot move above the stores).
#include "havok/hkBase.h"
#include "havok/hkpMalleableConstraintData.h"

hkpMalleableConstraintData::hkpMalleableConstraintData(hkpConstraintData *constraintData)
    : m_constraintData(constraintData), m_strength(0.01f)
{
    m_constraintData->addReference();
    m_atoms.m_bridgeAtom.init(this);
}
