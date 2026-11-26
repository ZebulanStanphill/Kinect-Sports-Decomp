// hkpPoweredChainData::hkpPoweredChainData(hkFinishLoadedObjectFlag) (Physics/Dynamics/Constraint/Chain/Powered/hkpPoweredChainData.cpp). The bridge atom's finish constructor re-inits it with its stored pointer, then the class points it at itself. It keeps its fn_ name (a Matching getVtable unit calls it), so it is defined inline and expanded below.
#include "havok/hkBase.h"
#include "havok/hkpPoweredChainData.h"

extern "C" hkpPoweredChainData *fn_82DA1288(hkpPoweredChainData *self, hkFinishLoadedObjectFlag f)
{
    self->hkpPoweredChainData::hkpPoweredChainData(f);
    return self;
}
