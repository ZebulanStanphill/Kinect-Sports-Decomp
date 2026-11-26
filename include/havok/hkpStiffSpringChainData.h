// hkpStiffSpringChainData (Physics/Dynamics/Constraint/Chain/StiffSpring/hkpStiffSpringChainData.h), 0x30 bytes: a
// chain of stiff springs solved together. The members, their offsets and types are the game's reflection table for
// the class (lbl_8213CB80) and, for ConstraintInfo (0x30 bytes), that of hkpStiffSpringChainDataConstraintInfo
// (lbl_8213CB38). The constructor (??0hkpStiffSpringChainData@@QAA@XZ, 82DA5A58) and the destructor (82DA5B50) are
// out of line. The finish constructor is out of line as fn_82DA5AE8, which keeps its fn_ name (a Matching unit
// defines it); it is defined inline here so that a unit can expand it: the bridge atom's finish constructor re-
// inits it with its stored pointer, then the class points it at itself. The vtable
// (??_7hkpStiffSpringChainData@@6B@, 17 slots) has 82DA5938 at +0x20 (getType: 100); slots +0x28 to +0x40 are
// virtual functions of hkpConstraintData and hkpConstraintChainData that their header does not declare yet.
#ifndef HAVOK_HKPSTIFFSPRINGCHAINDATA_H
#define HAVOK_HKPSTIFFSPRINGCHAINDATA_H

#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkpConstraintAtom.h"
#include "havok/hkpConstraintData.h"

class hkpStiffSpringChainData : public hkpConstraintChainData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    struct ConstraintInfo {
        hkVector4 m_pivotInA;    // +0x0
        hkVector4 m_pivotInB;    // +0x10
        hkReal m_springLength;   // +0x20
    };
    hkpStiffSpringChainData();
    HK_FORCE_INLINE hkpStiffSpringChainData(hkFinishLoadedObjectFlag f) : hkpConstraintChainData(f), m_atoms(f), m_infos(f)
    {
        if (f.m_finishing)
            m_atoms.m_bridgeAtom.init(this);
    }
    virtual ~hkpStiffSpringChainData();

    hkpBridgeAtoms m_atoms;            // +0xC
    hkArray<ConstraintInfo> m_infos;   // +0x18
    hkReal m_tau;                      // +0x24
    hkReal m_damping;                  // +0x28
    hkReal m_cfm;                      // +0x2C
};

#endif
