// hkpWheelConstraintData (Physics/Dynamics/Constraint/Bilateral/Wheel/hkpWheelConstraintData.h), 0x160 bytes (the
// game's reflection: hkpWheelConstraintDataClass; m_atoms is at +0x10). The atoms' layout is the reflection table
// of hkpWheelConstraintDataAtoms (lbl_8213CF00). Their constructor is inline. The data's constructor is out of line
// (??0hkpWheelConstraintData@@QAA@XZ, 82D99678). The class declares no destructor: the vtable's slot 0 is the
// scalar deleting destructor the linker folded with others (??_GhkpShape@@UAAPAXI@Z). getType (+0x20, 82D99268)
// returns 9; slots +0x28 to +0x3C are hkpConstraintData's virtual functions that hkpConstraintData.h does not
// declare yet. The finish constructors follow Havok's header: they leave the loaded members alone.
#ifndef HAVOK_HKPWHEELCONSTRAINTDATA_H
#define HAVOK_HKPWHEELCONSTRAINTDATA_H

#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkpConstraintData.h"
#include "havok/hkpSetLocalTransformsConstraintAtom.h"
#include "havok/hkpLinLimitConstraintAtom.h"
#include "havok/hkpLinSoftConstraintAtom.h"
#include "havok/hkpLinConstraintAtom.h"
#include "havok/hkpSetLocalRotationsConstraintAtom.h"
#include "havok/hkp2dAngConstraintAtom.h"

class hkpWheelConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    // 0x130 bytes, 16-byte aligned.
    struct Atoms {
        Atoms() {}
        Atoms(hkFinishLoadedObjectFlag f)
            : m_suspensionBase(f), m_lin0Limit(f), m_lin0Soft(f), m_lin1(f), m_lin2(f), m_steeringBase(f),
              m_2dAng(f)
        {
        }

        hkpSetLocalTransformsConstraintAtom m_suspensionBase;   // +0x0
        hkpLinLimitConstraintAtom m_lin0Limit;                  // +0x90
        hkpLinSoftConstraintAtom m_lin0Soft;                    // +0x9C
        hkpLinConstraintAtom m_lin1;                            // +0xA8
        hkpLinConstraintAtom m_lin2;                            // +0xAC
        hkpSetLocalRotationsConstraintAtom m_steeringBase;      // +0xB0
        hkp2dAngConstraintAtom m_2dAng;                         // +0x120
    };
    hkpWheelConstraintData();
    hkpWheelConstraintData(hkFinishLoadedObjectFlag flag) : hkpConstraintData(flag), m_atoms(flag) {}

    Atoms m_atoms;                        // +0x10
    hkVector4 m_initialAxleInB;           // +0x140
    hkVector4 m_initialSteeringAxisInB;   // +0x150
};

#endif
