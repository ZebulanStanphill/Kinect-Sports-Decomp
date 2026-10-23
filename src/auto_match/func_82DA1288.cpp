// hkpPoweredChainData::hkpPoweredChainData(hkFinishLoadedObjectFlag) (Physics/Dynamics/Constraint/Chain/Powered/hkpPoweredChainData.cpp). The bridge atom's finish constructor re-inits it with its stored pointer, then the class points it at itself. It keeps its fn_ name (a Matching getVtable unit calls it), so it is defined inline and expanded below.
#include "havok/hkBase.h"

class hkpConstraintData;

// hkpBridgeConstraintAtom::init(hkpConstraintData *) is out of line (sets
// m_buildJacobianFunc and m_constraintData); it keeps its fn_ name because a
// Matching C unit defines it.
extern "C" void fn_82D9FE70(void *self, hkpConstraintData *data);

struct hkpConstraintAtom {
    hkpConstraintAtom(hkFinishLoadedObjectFlag f) {}
    hkUint16 m_type;   // +0x0
};

struct hkpBridgeConstraintAtom : public hkpConstraintAtom {
    hkpBridgeConstraintAtom(hkFinishLoadedObjectFlag f) : hkpConstraintAtom(f)
    {
        if (f.m_finishing)
            init(m_constraintData);
    }
    void init(hkpConstraintData *constraintData) { fn_82D9FE70(this, constraintData); }

    void *m_buildJacobianFunc;           // +0x4
    hkpConstraintData *m_constraintData; // +0x8
};

struct hkpBridgeAtoms {
    hkpBridgeAtoms(hkFinishLoadedObjectFlag f) : m_bridgeAtom(f) {}
    hkpBridgeConstraintAtom m_bridgeAtom;
};

class hkpConstraintData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpConstraintData(hkFinishLoadedObjectFlag f) : hkReferencedObject(f) {}

    hkUlong m_userData;   // +0x8
};

class hkpConstraintChainData : public hkpConstraintData {
public:
    hkpConstraintChainData(hkFinishLoadedObjectFlag f) : hkpConstraintData(f) {}
};

class hkpPoweredChainData : public hkpConstraintChainData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpPoweredChainData(hkFinishLoadedObjectFlag f) : hkpConstraintChainData(f), m_atoms(f)
    {
        if (f.m_finishing)
            m_atoms.m_bridgeAtom.init(this);
    }
    virtual ~hkpPoweredChainData();

    hkpBridgeAtoms m_atoms;
};

extern "C" hkpPoweredChainData *fn_82DA1288(hkpPoweredChainData *self, hkFinishLoadedObjectFlag f)
{
    self->hkpPoweredChainData::hkpPoweredChainData(f);
    return self;
}
