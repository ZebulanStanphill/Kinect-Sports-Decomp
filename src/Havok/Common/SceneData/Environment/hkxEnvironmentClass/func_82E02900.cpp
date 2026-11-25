// cleanupLoadedObjecthkxEnvironment: the cleanup function in hkxEnvironment's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkSceneData.h"

void HK_CALL cleanupLoadedObjecthkxEnvironment(void *p)
{
    static_cast<hkxEnvironment *>(p)->~hkxEnvironment();
}
