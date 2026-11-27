// hkpBreakableConstraintData (Physics/Dynamics/Constraint/Breakable/hkpBreakableConstraintData.h), 0x28 bytes: wraps
// another constraint's data and breaks it when its solver results pass a limit.
// The members, their offsets and types are the game's reflection table for the class (lbl_8213A2D8). The constructor
// (??0hkpBreakableConstraintData@@QAA@PAVhkpConstraintData@@@Z, 82D98360) and the destructor (82D98468) are out of
// line. The finish constructor is out of line too (82D98400): the bridge atom's finish constructor re-inits it with its
// stored pointer, then the class points it at itself.
// The vtable (??_7hkpBreakableConstraintData@@6B@, 16 slots) has 82D98358 at +0x20 (getType: 12); slots +0x28 to
// +0x3C are hkpConstraintData's virtual functions (hkpConstraintData.h says what each is).
#ifndef HAVOK_HKPBREAKABLECONSTRAINTDATA_H
#define HAVOK_HKPBREAKABLECONSTRAINTDATA_H

#include "havok/hkBase.h"
#include "havok/hkpConstraintAtom.h"
#include "havok/hkpConstraintData.h"

class hkpBreakableConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpBreakableConstraintData(hkpConstraintData *constraintData);
    hkpBreakableConstraintData(hkFinishLoadedObjectFlag f);
    virtual ~hkpBreakableConstraintData();
    virtual void getConstraintInfo(ConstraintInfo &infoOut) const;   // +0x3C 82D982A8

    hkpBridgeAtoms m_atoms;                 // +0xC
    hkpConstraintData *m_constraintData;    // +0x18
    hkUint16 m_childRuntimeSize;            // +0x1C
    hkUint16 m_childNumSolverResults;       // +0x1E
    hkReal m_solverResultLimit;             // +0x20
    hkBool m_removeWhenBroken;              // +0x24
    hkBool m_revertBackVelocityOnBreak;     // +0x25
};

#endif
