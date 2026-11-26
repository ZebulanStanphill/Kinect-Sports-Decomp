// hkpBallSocketChainData::hkpBallSocketChainData(hkFinishLoadedObjectFlag) (Physics/Dynamics/Constraint/Chain/BallSocket/hkpBallSocketChainData.cpp). The bridge atom's finish constructor re-inits it with its stored pointer, then the class points it at itself. It keeps its fn_ name (a Matching getVtable unit calls it), so it is defined inline and expanded below.
#include "havok/hkBase.h"
#include "havok/hkpConstraintAtom.h"
#include "havok/hkpConstraintData.h"

class hkpBallSocketChainData : public hkpConstraintChainData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpBallSocketChainData(hkFinishLoadedObjectFlag f) : hkpConstraintChainData(f), m_atoms(f)
    {
        if (f.m_finishing)
            m_atoms.m_bridgeAtom.init(this);
    }
    virtual ~hkpBallSocketChainData();

    hkpBridgeAtoms m_atoms;
};

extern "C" hkpBallSocketChainData *fn_82D9B0D0(hkpBallSocketChainData *self, hkFinishLoadedObjectFlag f)
{
    self->hkpBallSocketChainData::hkpBallSocketChainData(f);
    return self;
}
