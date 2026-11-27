// hkpPointToPlaneConstraintData
// (Physics/Dynamics/Constraint/Bilateral/PointToPlane/hkpPointToPlaneConstraintData.h), 0xB0 bytes (the game's
// reflection: hkpPointToPlaneConstraintDataClass; m_atoms is at +0x10). The atoms' layout is the reflection table
// of hkpPointToPlaneConstraintDataAtoms (lbl_8213BC80). Their constructor is inline. The data's constructor is out
// of line (82D98F80). The class declares no destructor: the vtable's slot 0 is the scalar deleting
// destructor the linker folded with others (??_GhkpShape@@UAAPAXI@Z). getType (+0x20, 82D98D38) returns 14; slots
// +0x28 to +0x3C are hkpConstraintData's virtual functions (hkpConstraintData.h says what each is). The
// finish constructors follow Havok's header: they leave the loaded members alone.
#ifndef HAVOK_HKPPOINTTOPLANECONSTRAINTDATA_H
#define HAVOK_HKPPOINTTOPLANECONSTRAINTDATA_H

#include "havok/hkBase.h"
#include "havok/hkpConstraintData.h"
#include "havok/hkpSetLocalTransformsConstraintAtom.h"
#include "havok/hkpLinConstraintAtom.h"

class hkpPointToPlaneConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    // 0xA0 bytes, 16-byte aligned.
    struct Atoms {
        Atoms() {}
        Atoms(hkFinishLoadedObjectFlag f) : m_transforms(f), m_lin(f) {}

        hkpSetLocalTransformsConstraintAtom m_transforms;   // +0x0
        hkpLinConstraintAtom m_lin;                         // +0x90
    };
    hkpPointToPlaneConstraintData();
    hkpPointToPlaneConstraintData(hkFinishLoadedObjectFlag flag) : hkpConstraintData(flag), m_atoms(flag) {}
    virtual void getConstraintInfo(ConstraintInfo &infoOut) const;   // +0x3C 82D98CF8

    Atoms m_atoms;   // +0x10
};

#endif
