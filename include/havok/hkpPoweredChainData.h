// hkpPoweredChainData (Physics/Dynamics/Constraint/Chain/Powered/hkpPoweredChainData.h), 0x40 bytes: a chain of
// powered (motor-driven) ragdoll joints solved together. The members, their offsets and types are the game's
// reflection table for the class (lbl_8213BF00) and, for ConstraintInfo (0x50 bytes), that of
// hkpPoweredChainDataConstraintInfo (lbl_8213BE70). The constructor (??0hkpPoweredChainData@@QAA@XZ, 82DA11E0) and
// the destructor (82DA12F0) are out of line. The finish constructor is out of line as fn_82DA1288, which keeps its
// fn_ name (a Matching unit defines it); it is defined inline here so that a unit can expand it: the bridge atom's
// finish constructor re-inits it with its stored pointer, then the class points it at itself. The vtable
// (??_7hkpPoweredChainData@@6B@, 17 slots) has 82DA0EF0 at +0x20 (getType: 102); slots +0x28 to +0x40 are virtual
// functions of hkpConstraintData and hkpConstraintChainData that their header does not declare yet.
#ifndef HAVOK_HKPPOWEREDCHAINDATA_H
#define HAVOK_HKPPOWEREDCHAINDATA_H

#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkQuaternion.h"
#include "havok/hkpConstraintAtom.h"
#include "havok/hkpConstraintData.h"

class hkpConstraintMotor;

class hkpPoweredChainData : public hkpConstraintChainData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    struct ConstraintInfo {
        hkVector4 m_pivotInA;              // +0x0
        hkVector4 m_pivotInB;              // +0x10
        hkQuaternion m_aTc;                // +0x20
        hkQuaternion m_bTc;                // +0x30
        hkpConstraintMotor *m_motors[3];   // +0x40
        hkBool m_switchBodies;             // +0x4C
    };
    hkpPoweredChainData();
    HK_FORCE_INLINE hkpPoweredChainData(hkFinishLoadedObjectFlag f) : hkpConstraintChainData(f), m_atoms(f), m_infos(f)
    {
        if (f.m_finishing)
            m_atoms.m_bridgeAtom.init(this);
    }
    virtual ~hkpPoweredChainData();

    hkpBridgeAtoms m_atoms;            // +0xC
    hkArray<ConstraintInfo> m_infos;   // +0x18
    hkReal m_tau;                      // +0x24
    hkReal m_damping;                  // +0x28
    hkReal m_cfmLinAdd;                // +0x2C
    hkReal m_cfmLinMul;                // +0x30
    hkReal m_cfmAngAdd;                // +0x34
    hkReal m_cfmAngMul;                // +0x38
    hkReal m_maxErrorDistance;         // +0x3C
};

#endif
