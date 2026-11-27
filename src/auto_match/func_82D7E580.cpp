// finishLoadedObjecthkpBallSocketChainData: the finish function in hkpBallSocketChainData's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in
// Havok): runs the out-of-line finish constructor (82D9B0D0) on the loaded object.
#include "havok/hkpBallSocketChainData.h"

extern "C" void fn_82D7E580(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpBallSocketChainData(f);
}
