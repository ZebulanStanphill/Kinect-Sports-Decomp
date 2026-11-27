// hkpPulleyConstraintData (Physics/Dynamics/Constraint/Pulley/hkpPulleyConstraintData.h), 0x80 bytes (the game's
// reflection: hkpPulleyConstraintDataClass; m_atoms is at +0x10). The atoms' layout is the reflection table of
// hkpPulleyConstraintDataAtoms (lbl_8213C210). Their constructor is inline. The data's constructor is out of line
// (82DA1C80). The class declares no destructor: the vtable's slot 0 is the scalar deleting destructor the
// linker folded with others (??_GhkpShape@@UAAPAXI@Z). getType (+0x20, 82DA1C78) returns 15; slots +0x28 to +0x3C
// are hkpConstraintData's virtual functions (hkpConstraintData.h says what each is). The finish constructors
// follow Havok's header: they leave the loaded members alone.
#ifndef HAVOK_HKPPULLEYCONSTRAINTDATA_H
#define HAVOK_HKPPULLEYCONSTRAINTDATA_H

#include "havok/hkBase.h"
#include "havok/hkpConstraintData.h"
#include "havok/hkpSetLocalTranslationsConstraintAtom.h"
#include "havok/hkpPulleyConstraintAtom.h"

class hkpPulleyConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    // 0x70 bytes, 16-byte aligned.
    struct Atoms {
        Atoms() {}
        Atoms(hkFinishLoadedObjectFlag f) : m_translations(f), m_pulley(f) {}

        hkpSetLocalTranslationsConstraintAtom m_translations;   // +0x0
        hkpPulleyConstraintAtom m_pulley;                       // +0x30
    };
    hkpPulleyConstraintData();
    hkpPulleyConstraintData(hkFinishLoadedObjectFlag flag) : hkpConstraintData(flag), m_atoms(flag) {}
    virtual void getConstraintInfo(ConstraintInfo &infoOut) const;   // +0x3C 82DA1C08

    Atoms m_atoms;   // +0x10
};

#endif
