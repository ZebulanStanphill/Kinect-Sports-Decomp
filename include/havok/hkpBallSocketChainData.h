// hkpBallSocketChainData (Physics/Dynamics/Constraint/Chain/BallSocket/hkpBallSocketChainData.h), 0x34 bytes: a
// chain of ball-and-socket constraints solved together. The members, their offsets and types are the game's
// reflection table for the class (lbl_8213A098) and, for ConstraintInfo (0x20 bytes), that of
// hkpBallSocketChainDataConstraintInfo (lbl_8213A068). The constructor (??0hkpBallSocketChainData@@QAA@XZ,
// 82D9B038) and the destructor (82D9B138) are out of line. The finish constructor is out of line too (82D9B0D0):
// the bridge atom's finish constructor re-inits it with its stored pointer, then the class points it at itself. The
// vtable (??_7hkpBallSocketChainData@@6B@, 17 slots) has 82D9AF28 at +0x20 (getType: 101); slots +0x28 to +0x40 are
// virtual functions of hkpConstraintData and hkpConstraintChainData (hkpConstraintData.h says what each is).
#ifndef HAVOK_HKPBALLSOCKETCHAINDATA_H
#define HAVOK_HKPBALLSOCKETCHAINDATA_H

#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkpConstraintAtom.h"
#include "havok/hkpConstraintData.h"

class hkpBallSocketChainData : public hkpConstraintChainData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    struct ConstraintInfo {
        hkVector4 m_pivotInA;   // +0x0
        hkVector4 m_pivotInB;   // +0x10
    };
    hkpBallSocketChainData();
    hkpBallSocketChainData(hkFinishLoadedObjectFlag f);
    virtual ~hkpBallSocketChainData();
    virtual int getNumConstraintInfos() { return m_infos.getSize(); }   // +0x40 82897B20
    virtual void getConstraintInfo(hkpConstraintData::ConstraintInfo &infoOut) const;   // +0x3C 82D9AF30

    hkpBridgeAtoms m_atoms;            // +0xC
    hkArray<ConstraintInfo> m_infos;   // +0x18
    hkReal m_tau;                      // +0x24
    hkReal m_damping;                  // +0x28
    hkReal m_cfm;                      // +0x2C
    hkReal m_maxErrorDistance;         // +0x30
};

#endif
