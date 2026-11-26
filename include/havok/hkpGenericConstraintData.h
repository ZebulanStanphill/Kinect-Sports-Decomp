// hkpGenericConstraintData (Physics/Dynamics/Constraint/Bilateral/Generic/hkpGenericConstraintData.h), 0x58 bytes: a
// constraint built from a command scheme. The members, their offsets and types are the game's reflection table for
// the class (lbl_8213B394: m_atoms, m_scheme). The constructor (??0hkpGenericConstraintData@@QAA@XZ, 82D9DFD8) and
// the destructor (82D9DF68, releases the scheme's motors) are out of line. The finish constructor is out of line as
// fn_82D9DF00, which keeps its fn_ name (a Matching unit defines it); it is defined inline here so that a unit can
// expand it.
// The vtable (??_7hkpGenericConstraintData@@6B@, 16 slots) has 82D9D7B8 at +0x20 (getType: 10); slots +0x28 to
// +0x3C are hkpConstraintData's virtual functions (hkpConstraintData.h says what each is).
#ifndef HAVOK_HKPGENERICCONSTRAINTDATA_H
#define HAVOK_HKPGENERICCONSTRAINTDATA_H

#include "havok/hkBase.h"
#include "havok/hkpConstraintAtom.h"
#include "havok/hkpConstraintData.h"
#include "havok/hkpGenericConstraintDataScheme.h"

class hkpGenericConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpGenericConstraintData();
    HK_FORCE_INLINE hkpGenericConstraintData(hkFinishLoadedObjectFlag f) : hkpConstraintData(f), m_atoms(f), m_scheme(f)
    {
        if (f.m_finishing)
            m_atoms.m_bridgeAtom.init(this);
    }
    virtual ~hkpGenericConstraintData();

    hkpBridgeAtoms m_atoms;                    // +0xC
    hkpGenericConstraintDataScheme m_scheme;   // +0x18
};

#endif
