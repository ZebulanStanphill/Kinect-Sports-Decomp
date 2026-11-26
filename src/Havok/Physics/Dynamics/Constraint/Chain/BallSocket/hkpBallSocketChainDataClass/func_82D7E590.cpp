// cleanupLoadedObjecthkpBallSocketChainData: the cleanup function in hkpBallSocketChainData's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpBallSocketChainData.h"

void HK_CALL cleanupLoadedObjecthkpBallSocketChainData(void *p)
{
    static_cast<hkpBallSocketChainData *>(p)->~hkpBallSocketChainData();
}
