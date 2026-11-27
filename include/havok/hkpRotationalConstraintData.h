// hkpRotationalConstraintData (Physics/Dynamics/Constraint/Bilateral/Rotational/hkpRotationalConstraintData.h),
// 0x90 bytes (the game's reflection: hkpRotationalConstraintDataClass; m_atoms is at +0x10). The atoms' layout is
// the reflection table of hkpRotationalConstraintDataAtoms (lbl_8213C650). Their constructor is inline. The data's
// constructor is out of line (82DA2468). The class declares no destructor: the vtable's slot 0 is the scalar
// deleting destructor the linker folded with others (??_GhkpShape@@UAAPAXI@Z). getType (+0x20, 82DA2460) returns
// 16; slots +0x28 to +0x3C are hkpConstraintData's virtual functions (hkpConstraintData.h says what each is).
// The finish constructors follow Havok's header: they leave the loaded members alone.
#ifndef HAVOK_HKPROTATIONALCONSTRAINTDATA_H
#define HAVOK_HKPROTATIONALCONSTRAINTDATA_H

#include "havok/hkBase.h"
#include "havok/hkpConstraintData.h"
#include "havok/hkpSetLocalRotationsConstraintAtom.h"
#include "havok/hkpAngConstraintAtom.h"

class hkpRotationalConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    // 0x80 bytes, 16-byte aligned.
    struct Atoms {
        Atoms() {}
        Atoms(hkFinishLoadedObjectFlag f) : m_rotations(f), m_ang(f) {}

        hkpSetLocalRotationsConstraintAtom m_rotations;   // +0x0
        hkpAngConstraintAtom m_ang;                       // +0x70
    };
    hkpRotationalConstraintData();
    hkpRotationalConstraintData(hkFinishLoadedObjectFlag flag) : hkpConstraintData(flag), m_atoms(flag) {}
    virtual void getConstraintInfo(ConstraintInfo &infoOut) const;   // +0x3C 82DA2390

    Atoms m_atoms;   // +0x10
};

#endif
