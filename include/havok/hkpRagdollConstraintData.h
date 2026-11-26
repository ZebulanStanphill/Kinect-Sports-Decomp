// hkpRagdollConstraintData (Physics/Dynamics/Constraint/Bilateral/Ragdoll/hkpRagdollConstraintData.h), 0x140 bytes
// (the game's reflection: hkpRagdollConstraintDataClass, with one member, m_atoms at +0x10).
// The atoms' layout is the reflection table of hkpRagdollConstraintDataAtoms (lbl_8213C380); their constructor is
// out of line (??0Atoms@hkpRagdollConstraintData@@QAA@XZ, 82D98100) and the data's constructor (82D97CB8) calls
// it, then fills the atoms' defaults. The destructor (82D97BB8) releases the three motors.
// setConeLimitStabilization is out of line as fn_82D97680, which keeps its fn_ name (a C unit): it sets the cone
// limit's m_memOffsetToAngleOffset to 56 when enabled and to 0 when not. The finish constructor (inline in
// finishLoadedObjecthkpRagdollConstraintData, 82D7F8A0) calls it when finishing and the offset is set; it is
// forced inline so that getVtablehkpRagdollConstraintData (82D7F8F8, built /O1) folds it to the vtable store.
// The vtable (??_7hkpRagdollConstraintData@@6B@, 16 slots) has 82D97818 at +0x20 (getType: 7); slots +0x28 to
// +0x3C are hkpConstraintData's virtual functions that hkpConstraintData.h does not declare yet.
#ifndef HAVOK_HKPRAGDOLLCONSTRAINTDATA_H
#define HAVOK_HKPRAGDOLLCONSTRAINTDATA_H

#include "havok/hkBase.h"
#include "havok/hkpConstraintData.h"
#include "havok/hkpSetLocalTransformsConstraintAtom.h"
#include "havok/hkpRagdollMotorConstraintAtom.h"
#include "havok/hkpAngFrictionConstraintAtom.h"
#include "havok/hkpTwistLimitConstraintAtom.h"
#include "havok/hkpConeLimitConstraintAtom.h"
#include "havok/hkpBallSocketConstraintAtom.h"

class hkpRagdollConstraintData;
extern "C" void fn_82D97680(hkpRagdollConstraintData *self, hkBool enable);   // setConeLimitStabilization

class hkpRagdollConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    // 0x130 bytes, 16-byte aligned.
    struct Atoms {
        Atoms();
        Atoms(hkFinishLoadedObjectFlag f)
            : m_transforms(f), m_ragdollMotors(f), m_angFriction(f), m_twistLimit(f), m_coneLimit(f),
              m_planesLimit(f), m_ballSocket(f)
        {
        }

        hkpSetLocalTransformsConstraintAtom m_transforms;   // +0x0
        hkpRagdollMotorConstraintAtom m_ragdollMotors;      // +0x90
        hkpAngFrictionConstraintAtom m_angFriction;         // +0xE0
        hkpTwistLimitConstraintAtom m_twistLimit;           // +0xEC
        hkpConeLimitConstraintAtom m_coneLimit;             // +0x100
        hkpConeLimitConstraintAtom m_planesLimit;           // +0x114
        hkpBallSocketConstraintAtom m_ballSocket;           // +0x128
    };
    hkpRagdollConstraintData();
    HK_FORCE_INLINE hkpRagdollConstraintData(hkFinishLoadedObjectFlag f) : hkpConstraintData(f), m_atoms(f)
    {
        if (f.m_finishing) {
            if (m_atoms.m_coneLimit.m_memOffsetToAngleOffset)
                fn_82D97680(this, true);   // the hkBool temporary is built here
        }
    }
    virtual ~hkpRagdollConstraintData();
    void setConeLimitStabilization(hkBool enable) { fn_82D97680(this, enable); }

    Atoms m_atoms;   // +0x10
};

#endif
