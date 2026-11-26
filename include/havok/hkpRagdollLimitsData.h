// hkpRagdollLimitsData (Physics/Dynamics/Constraint/Bilateral/Ragdoll/hkpRagdollLimitsData.h, the path is
// Havok's), 0xC0 bytes: the angular limits of a ragdoll joint, without the positional part. The game's reflection
// gives the layout: hkpRagdollLimitsDataClass (initialiser 83131480) has one member, m_atoms at +0x10;
// hkpRagdollLimitsDataAtoms (0xB0 bytes, members lbl_8213C518 + 0x18) has m_rotations at +0x0, m_twistLimit at
// +0x70, m_coneLimit at +0x84 and m_planesLimit at +0x98, and the enum Axis.
// The constructor is out of line (82DA1EC8, ??0hkpRagdollLimitsData@@QAA@XZ). setConeLimitStabilization is out of
// line as fn_82DA1EA8, which keeps its fn_ name (a C unit); the constructor has it inlined (it sets the cone
// limit's m_memOffsetToAngleOffset to 16 when enabled and to 0 when not). The finish constructor (inline in
// finishLoadedObjecthkpRagdollLimitsData, 82D7F9B8) calls it when finishing and the offset is set; it is forced
// inline so that getVtablehkpRagdollLimitsData (82D7FA10) folds it to the vtable store. The destructor is implicit
// (slot 0 of ??_7hkpRagdollLimitsData@@6B@ is a deleting destructor folded with hkpShape's). The vtable (16 slots)
// has isValid 82DA1D30 (+0x1C), getType 82DA1EC0 (+0x20, returns 19) and getRuntimeInfo 82DA1D18 (+0x24); its slot
// +0x3C (82DA1D08) is one of hkpConstraintData's virtual functions that hkpConstraintData.h does not declare yet.
#ifndef HAVOK_HKPRAGDOLLLIMITSDATA_H
#define HAVOK_HKPRAGDOLLLIMITSDATA_H

#include "havok/hkBase.h"
#include "havok/hkpConstraintData.h"
#include "havok/hkpSetLocalRotationsConstraintAtom.h"
#include "havok/hkpTwistLimitConstraintAtom.h"
#include "havok/hkpConeLimitConstraintAtom.h"

class hkpRagdollLimitsData;
extern "C" void fn_82DA1EA8(hkpRagdollLimitsData *self, hkBool enable);   // setConeLimitStabilization

class hkpRagdollLimitsData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    // 0xB0 bytes, 16-byte aligned.
    struct Atoms {
        enum Axis {
            AXIS_TWIST = 0,
            AXIS_PLANES = 1,
            AXIS_CROSS_PRODUCT = 2
        };
        Atoms() {}
        Atoms(hkFinishLoadedObjectFlag f) : m_rotations(f), m_twistLimit(f), m_coneLimit(f), m_planesLimit(f) {}

        hkpSetLocalRotationsConstraintAtom m_rotations;   // +0x0
        hkpTwistLimitConstraintAtom m_twistLimit;         // +0x70
        hkpConeLimitConstraintAtom m_coneLimit;           // +0x84
        hkpConeLimitConstraintAtom m_planesLimit;         // +0x98
    };
    hkpRagdollLimitsData();
    HK_FORCE_INLINE hkpRagdollLimitsData(hkFinishLoadedObjectFlag f) : hkpConstraintData(f), m_atoms(f)
    {
        if (f.m_finishing) {
            if (m_atoms.m_coneLimit.m_memOffsetToAngleOffset)
                fn_82DA1EA8(this, true);   // the hkBool temporary is built here
        }
    }
    virtual hkBool isValid() const;                                                  // +0x1C
    virtual int getType() const;                                                     // +0x20
    virtual void getRuntimeInfo(hkBool wantRuntime, RuntimeInfo &infoOut) const;     // +0x24
    void setConeLimitStabilization(hkBool enable) { fn_82DA1EA8(this, enable); }

    Atoms m_atoms;   // +0x10
};

#endif
