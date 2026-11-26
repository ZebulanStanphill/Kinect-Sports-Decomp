// hkpPoweredChainData::hkpPoweredChainData(hkFinishLoadedObjectFlag) (Physics/Dynamics/Constraint/Chain/Powered/hkpPoweredChainData.cpp). The bridge atom's finish constructor re-inits it with its stored pointer, then the class points it at itself. It keeps its fn_ name (a Matching getVtable unit calls it), so it is defined inline and expanded below.
#include "havok/hkBase.h"
#include "havok/hkpConstraintAtom.h"
#include "havok/hkpConstraintData.h"

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
