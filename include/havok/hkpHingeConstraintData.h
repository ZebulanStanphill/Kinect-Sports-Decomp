// hkpHingeConstraintData (Physics/Dynamics/Constraint/Bilateral/Hinge/hkpHingeConstraintData.h), 0xB0 bytes (the
// game's reflection: hkpHingeConstraintDataClass; m_atoms is at +0x10). The atoms' layout is the reflection table
// of hkpHingeConstraintDataAtoms (lbl_8213B408). Their constructor is out of line
// (??0Atoms@hkpHingeConstraintData@@QAA@XZ, 82D96EB0). The data's constructor is out of line
// (??0hkpHingeConstraintData@@QAA@XZ, 82D96B50). The class declares no destructor: the vtable's slot 0 is the
// scalar deleting destructor the linker folded with others (??_GhkpShape@@UAAPAXI@Z). getType (+0x20, 82D96840)
// returns 1; slots +0x28 to +0x3C are hkpConstraintData's virtual functions that hkpConstraintData.h does not
// declare yet. The finish constructors follow Havok's header: they leave the loaded members alone.
#ifndef HAVOK_HKPHINGECONSTRAINTDATA_H
#define HAVOK_HKPHINGECONSTRAINTDATA_H

#include "havok/hkBase.h"
#include "havok/hkpConstraintData.h"
#include "havok/hkpSetLocalTransformsConstraintAtom.h"
#include "havok/hkp2dAngConstraintAtom.h"
#include "havok/hkpBallSocketConstraintAtom.h"

class hkpHingeConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    // 0xA0 bytes, 16-byte aligned.
    struct Atoms {
        Atoms();
        Atoms(hkFinishLoadedObjectFlag f) : m_transforms(f), m_2dAng(f), m_ballSocket(f) {}

        hkpSetLocalTransformsConstraintAtom m_transforms;   // +0x0
        hkp2dAngConstraintAtom m_2dAng;                     // +0x90
        hkpBallSocketConstraintAtom m_ballSocket;           // +0x94
    };
    hkpHingeConstraintData();
    hkpHingeConstraintData(hkFinishLoadedObjectFlag flag) : hkpConstraintData(flag), m_atoms(flag) {}

    Atoms m_atoms;   // +0x10
};

#endif
