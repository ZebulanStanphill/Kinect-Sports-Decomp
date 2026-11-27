// finishLoadedObjecthkpStiffSpringChainData: the finish function in hkpStiffSpringChainData's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in
// Havok): runs the out-of-line finish constructor (82DA5AE8) on the loaded object.
#include "havok/hkpStiffSpringChainData.h"

extern "C" void fn_82D7FE80(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpStiffSpringChainData(f);
}
