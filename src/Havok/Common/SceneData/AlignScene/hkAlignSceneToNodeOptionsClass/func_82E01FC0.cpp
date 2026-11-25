// cleanupLoadedObjecthkAlignSceneToNodeOptions: the cleanup function in hkAlignSceneToNodeOptions's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkSceneData.h"

void HK_CALL cleanupLoadedObjecthkAlignSceneToNodeOptions(void *p)
{
    static_cast<hkAlignSceneToNodeOptions *>(p)->~hkAlignSceneToNodeOptions();
}
