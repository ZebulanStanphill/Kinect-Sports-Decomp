// cleanupLoadedObjecthkxScene: the cleanup function in hkxScene's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkSceneData.h"

void HK_CALL cleanupLoadedObjecthkxScene(void *p)
{
    static_cast<hkxScene *>(p)->~hkxScene();
}
