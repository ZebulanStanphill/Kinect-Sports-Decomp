// hkpBreakableConstraintData::hkpBreakableConstraintData(hkpConstraintData *) (Physics/Dynamics/Constraint/Breakable/hkpBreakableConstraintData.cpp). The limit is the literal 10.0f; the game's copy is lbl_8200D898, so this matches only with it named __real@41200000 (a load of an extern constant cannot move above the stores).
#include "havok/hkBase.h"
#include "havok/hkpConstraintAtom.h"
#include "havok/hkpConstraintData.h"

class hkpBreakableConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpBreakableConstraintData(hkpConstraintData *constraintData);

    hkpBridgeAtoms m_atoms;                // +0xC
    hkpConstraintData *m_constraintData;   // +0x18
    hkUint16 m_childRuntimeSize;           // +0x1C
    hkUint16 m_childNumSolverResults;      // +0x1E
    hkReal m_solverResultLimit;            // +0x20
    hkBool m_removeWhenBroken;             // +0x24
    hkBool m_revertBackVelocityOnBreak;    // +0x25
};

hkpBreakableConstraintData::hkpBreakableConstraintData(hkpConstraintData *constraintData)
{
    m_solverResultLimit = 10.0f;
    m_constraintData = constraintData;
    m_removeWhenBroken = false;
    m_revertBackVelocityOnBreak = false;
    m_constraintData->addReference();

    hkpConstraintData::RuntimeInfo info;
    m_constraintData->getRuntimeInfo(true, info);
    m_childRuntimeSize = hkUint16(info.m_sizeOfExternalRuntime);
    m_childNumSolverResults = hkUint16(info.m_numSolverResults);
    m_atoms.m_bridgeAtom.init(this);
}
