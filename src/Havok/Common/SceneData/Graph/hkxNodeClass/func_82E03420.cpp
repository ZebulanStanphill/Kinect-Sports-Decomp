// cleanupLoadedObjecthkxNode: the cleanup function in hkxNode's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkSceneData.h"

void HK_CALL cleanupLoadedObjecthkxNode(void *p)
{
    static_cast<hkxNode *>(p)->~hkxNode();
}
