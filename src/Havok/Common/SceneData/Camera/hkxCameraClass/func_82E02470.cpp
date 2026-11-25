// cleanupLoadedObjecthkxCamera: the cleanup function in hkxCamera's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkSceneData.h"

void HK_CALL cleanupLoadedObjecthkxCamera(void *p)
{
    static_cast<hkxCamera *>(p)->~hkxCamera();
}
