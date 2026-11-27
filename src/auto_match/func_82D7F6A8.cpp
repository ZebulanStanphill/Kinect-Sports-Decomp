// finishLoadedObjecthkpPoweredChainData: the finish function in hkpPoweredChainData's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in
// Havok): runs the out-of-line finish constructor (82DA1288) on the loaded object.
#include "havok/hkpPoweredChainData.h"

extern "C" void fn_82D7F6A8(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpPoweredChainData(f);
}
