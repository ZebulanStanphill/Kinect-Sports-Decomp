// hkpMalleableConstraintData (Physics/Dynamics/Constraint/Malleable/hkpMalleableConstraintData.h), 0x20 bytes: wraps
// another constraint's data and scales its strength.
// The layout is the game's: the reflection table (lbl_8213B970) has three members, and the constructor
// (??0hkpMalleableConstraintData@@QAA@PAVhkpConstraintData@@@Z, 82D98A90) stores m_constraintData (+0xC), inits the
// bridge atom (+0x10) and sets m_strength (+0x1C) to 0.01f. The destructor (82D98B78) is out of line. The finish
// constructor is out of line as fn_82D98B10, which keeps its fn_ name (a Matching unit defines it); it is defined
// inline here so that a unit can expand it.
// The vtable (??_7hkpMalleableConstraintData@@6B@, 16 slots) has 82D98A78 at +0x20 (getType: 13); slots +0x28 to
// +0x3C are hkpConstraintData's virtual functions (hkpConstraintData.h says what each is).
#ifndef HAVOK_HKPMALLEABLECONSTRAINTDATA_H
#define HAVOK_HKPMALLEABLECONSTRAINTDATA_H

#include "havok/hkBase.h"
#include "havok/hkpConstraintAtom.h"
#include "havok/hkpConstraintData.h"

class hkpMalleableConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpMalleableConstraintData(hkpConstraintData *constraintData);
    HK_FORCE_INLINE hkpMalleableConstraintData(hkFinishLoadedObjectFlag f) : hkpConstraintData(f), m_atoms(f)
    {
        if (f.m_finishing)
            m_atoms.m_bridgeAtom.init(this);
    }
    virtual ~hkpMalleableConstraintData();

    hkpConstraintData *m_constraintData;   // +0xC
    hkpBridgeAtoms m_atoms;                // +0x10
    hkReal m_strength;                     // +0x1C
};

#endif
