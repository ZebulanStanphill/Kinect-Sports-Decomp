// hkpBallSocketChainData::hkpBallSocketChainData(hkFinishLoadedObjectFlag) (Physics/Dynamics/Constraint/Chain/BallSocket/hkpBallSocketChainData.cpp). The bridge atom's finish constructor re-inits it with its stored pointer, then the class points it at itself. It keeps its fn_ name (a Matching getVtable unit calls it), so it is defined inline and expanded below.
#include "havok/hkBase.h"
#include "havok/hkpBallSocketChainData.h"

extern "C" hkpBallSocketChainData *fn_82D9B0D0(hkpBallSocketChainData *self, hkFinishLoadedObjectFlag f)
{
    self->hkpBallSocketChainData::hkpBallSocketChainData(f);
    return self;
}
