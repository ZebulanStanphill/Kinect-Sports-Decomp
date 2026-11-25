// cleanupLoadedObjecthkxNodeSelectionSet: the cleanup function in hkxNodeSelectionSet's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkSceneData.h"

void HK_CALL cleanupLoadedObjecthkxNodeSelectionSet(void *p)
{
    static_cast<hkxNodeSelectionSet *>(p)->~hkxNodeSelectionSet();
}
