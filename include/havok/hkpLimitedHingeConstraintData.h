// hkpLimitedHingeConstraintData (Physics/Dynamics/Constraint/Bilateral/LimitedHinge/hkpLimitedHingeConstraintData.h),
// 0xE0 bytes (the game's reflection: hkpLimitedHingeConstraintDataClass, with one member, m_atoms at +0x10).
// The atoms' layout is the reflection table of hkpLimitedHingeConstraintDataAtoms (lbl_8213B708); their
// constructor is out of line (??0Atoms@hkpLimitedHingeConstraintData@@QAA@XZ, 82D93FE8) and the data's
// constructor (82D93C00) calls it, then fills the atoms' defaults. The destructor (82D93908) releases the
// angular motor.
// The vtable (??_7hkpLimitedHingeConstraintData@@6B@, 16 slots) has 82D93900 at +0x20 (getType: 2); slots +0x28
// to +0x3C are hkpConstraintData's virtual functions (hkpConstraintData.h says what each is).
// The finish constructors follow Havok's header: they leave the loaded members alone.
#ifndef HAVOK_HKPLIMITEDHINGECONSTRAINTDATA_H
#define HAVOK_HKPLIMITEDHINGECONSTRAINTDATA_H

#include "havok/hkBase.h"
#include "havok/hkpConstraintData.h"
#include "havok/hkpSetLocalTransformsConstraintAtom.h"
#include "havok/hkpAngMotorConstraintAtom.h"
#include "havok/hkpAngFrictionConstraintAtom.h"
#include "havok/hkpAngLimitConstraintAtom.h"
#include "havok/hkp2dAngConstraintAtom.h"
#include "havok/hkpBallSocketConstraintAtom.h"

class hkpLimitedHingeConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    // 0xD0 bytes, 16-byte aligned.
    struct Atoms {
        Atoms();
        Atoms(hkFinishLoadedObjectFlag f)
            : m_transforms(f), m_angMotor(f), m_angFriction(f), m_angLimit(f), m_2dAng(f), m_ballSocket(f)
        {
        }

        hkpSetLocalTransformsConstraintAtom m_transforms;   // +0x0
        hkpAngMotorConstraintAtom m_angMotor;               // +0x90
        hkpAngFrictionConstraintAtom m_angFriction;         // +0xA4
        hkpAngLimitConstraintAtom m_angLimit;               // +0xB0
        hkp2dAngConstraintAtom m_2dAng;                     // +0xC0
        hkpBallSocketConstraintAtom m_ballSocket;           // +0xC4
    };
    hkpLimitedHingeConstraintData();
    hkpLimitedHingeConstraintData(hkFinishLoadedObjectFlag flag) : hkpConstraintData(flag), m_atoms(flag) {}
    virtual ~hkpLimitedHingeConstraintData();

    Atoms m_atoms;   // +0x10
};

#endif
