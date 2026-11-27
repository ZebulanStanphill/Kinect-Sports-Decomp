// hkpPrismaticConstraintData (Physics/Dynamics/Constraint/Bilateral/Prismatic/hkpPrismaticConstraintData.h), 0xD0 bytes
// (the game's reflection: hkpPrismaticConstraintDataClass, with one member, m_atoms at +0x10).
// The atoms' layout is the reflection table of hkpPrismaticConstraintDataAtoms (lbl_8213C0A0); their constructor is
// inline. The data's constructor is out of line (82D972A0); the destructor (82D96FB0) releases the motor.
// The vtable (??_7hkpPrismaticConstraintData@@6B@, 16 slots) has 82D96FA8 at +0x20 (getType: 6); slots +0x28 to
// +0x3C are hkpConstraintData's virtual functions (hkpConstraintData.h says what each is).
// The finish constructors follow Havok's header: they leave the loaded members alone.
#ifndef HAVOK_HKPPRISMATICCONSTRAINTDATA_H
#define HAVOK_HKPPRISMATICCONSTRAINTDATA_H

#include "havok/hkBase.h"
#include "havok/hkpConstraintData.h"
#include "havok/hkpSetLocalTransformsConstraintAtom.h"
#include "havok/hkpLinMotorConstraintAtom.h"
#include "havok/hkpLinFrictionConstraintAtom.h"
#include "havok/hkpAngConstraintAtom.h"
#include "havok/hkpLinConstraintAtom.h"
#include "havok/hkpLinLimitConstraintAtom.h"

class hkpPrismaticConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    // 0xC0 bytes, 16-byte aligned.
    struct Atoms {
        Atoms() {}
        Atoms(hkFinishLoadedObjectFlag f)
            : m_transforms(f), m_motor(f), m_friction(f), m_ang(f), m_lin0(f), m_lin1(f), m_linLimit(f)
        {
        }

        hkpSetLocalTransformsConstraintAtom m_transforms;   // +0x0
        hkpLinMotorConstraintAtom m_motor;                  // +0x90
        hkpLinFrictionConstraintAtom m_friction;            // +0xA0
        hkpAngConstraintAtom m_ang;                         // +0xA8
        hkpLinConstraintAtom m_lin0;                        // +0xAC
        hkpLinConstraintAtom m_lin1;                        // +0xB0
        hkpLinLimitConstraintAtom m_linLimit;               // +0xB4
    };
    hkpPrismaticConstraintData();
    hkpPrismaticConstraintData(hkFinishLoadedObjectFlag flag) : hkpConstraintData(flag), m_atoms(flag) {}
    virtual ~hkpPrismaticConstraintData();
    virtual void getConstraintInfo(ConstraintInfo &infoOut) const;   // +0x3C 82D96F80

    Atoms m_atoms;   // +0x10
};

#endif
