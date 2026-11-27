// hkpHingeLimitsData (Physics/Dynamics/Constraint/Bilateral/Hinge/hkpHingeLimitsData.h, the path is Havok's),
// 0xA0 bytes: the angular limits of a hinge, without the positional part. The game's reflection gives the layout:
// hkpHingeLimitsDataClass (initialiser 831308F8) has one member, m_atoms at +0x10; hkpHingeLimitsDataAtoms
// (0x90 bytes, members lbl_8213B550 + 0x18) has m_rotations at +0x0, m_angLimit at +0x70 and m_2dAng at +0x80,
// and the enum Axis.
// The constructor is out of line (82D9EB80; 82DBF380 news and copies a data). The destructor is implicit (slot 0
// of ??_7hkpHingeLimitsData@@6B@ is a deleting destructor folded with hkpShape's). The vtable (16 slots) has
// isValid 82D9EAE8 (+0x1C), getType 82D9EB78 (+0x20, returns 18), getRuntimeInfo 82D9EAD0 (+0x24) and
// getConstraintInfo 82D9EAC0 (+0x3C). The finish constructor follows Havok's header: it leaves the loaded
// members alone.
#ifndef HAVOK_HKPHINGELIMITSDATA_H
#define HAVOK_HKPHINGELIMITSDATA_H

#include "havok/hkBase.h"
#include "havok/hkpConstraintData.h"
#include "havok/hkpSetLocalRotationsConstraintAtom.h"
#include "havok/hkpAngLimitConstraintAtom.h"
#include "havok/hkp2dAngConstraintAtom.h"

class hkpHingeLimitsData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    // 0x90 bytes, 16-byte aligned.
    struct Atoms {
        enum Axis {
            AXIS_AXLE = 0,
            AXIS_PERP_TO_AXLE_1 = 1,
            AXIS_PERP_TO_AXLE_2 = 2
        };
        Atoms() {}
        Atoms(hkFinishLoadedObjectFlag f) : m_rotations(f), m_angLimit(f), m_2dAng(f) {}

        hkpSetLocalRotationsConstraintAtom m_rotations;   // +0x0
        hkpAngLimitConstraintAtom m_angLimit;             // +0x70
        hkp2dAngConstraintAtom m_2dAng;                   // +0x80
    };
    hkpHingeLimitsData();   // 82D9EB80
    hkpHingeLimitsData(hkFinishLoadedObjectFlag flag) : hkpConstraintData(flag), m_atoms(flag) {}
    virtual hkBool isValid() const;                                                  // +0x1C
    virtual int getType() const;                                                     // +0x20
    virtual void getRuntimeInfo(hkBool wantRuntime, RuntimeInfo &infoOut) const;     // +0x24
    virtual void getConstraintInfo(ConstraintInfo &infoOut) const;   // +0x3C 82D9EAC0

    Atoms m_atoms;   // +0x10
};

#endif
