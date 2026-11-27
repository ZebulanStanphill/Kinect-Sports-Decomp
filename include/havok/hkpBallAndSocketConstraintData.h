// hkpBallAndSocketConstraintData
// (Physics/Dynamics/Constraint/Bilateral/BallAndSocket/hkpBallAndSocketConstraintData.h), 0x50 bytes (the game's
// reflection: hkpBallAndSocketConstraintDataClass; m_atoms is at +0x10). The atoms' layout is the reflection table
// of hkpBallAndSocketConstraintDataAtoms (lbl_82139F4C). Their constructor is inline. The data's constructor is out
// of line (82D96728). The class declares no destructor: the vtable's slot 0 is the scalar deleting
// destructor the linker folded with others (??_GhkpShape@@UAAPAXI@Z). getType (+0x20, 82D96720) returns 0; slots
// +0x28 to +0x3C are hkpConstraintData's virtual functions (hkpConstraintData.h says what each is). The
// finish constructors follow Havok's header: they leave the loaded members alone.
#ifndef HAVOK_HKPBALLANDSOCKETCONSTRAINTDATA_H
#define HAVOK_HKPBALLANDSOCKETCONSTRAINTDATA_H

#include "havok/hkBase.h"
#include "havok/hkpConstraintData.h"
#include "havok/hkpSetLocalTranslationsConstraintAtom.h"
#include "havok/hkpBallSocketConstraintAtom.h"

class hkpBallAndSocketConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    // 0x40 bytes, 16-byte aligned.
    struct Atoms {
        Atoms() {}
        Atoms(hkFinishLoadedObjectFlag f) : m_pivots(f), m_ballSocket(f) {}

        hkpSetLocalTranslationsConstraintAtom m_pivots;   // +0x0
        hkpBallSocketConstraintAtom m_ballSocket;         // +0x30
    };
    hkpBallAndSocketConstraintData();
    hkpBallAndSocketConstraintData(hkFinishLoadedObjectFlag flag) : hkpConstraintData(flag), m_atoms(flag) {}
    virtual void getConstraintInfo(ConstraintInfo &infoOut) const;   // +0x3C 82D966B8

    Atoms m_atoms;   // +0x10
};

#endif
