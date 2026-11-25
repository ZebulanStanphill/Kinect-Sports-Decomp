// cleanupLoadedObjecthkxAnimatedFloat: the cleanup function in hkxAnimatedFloat's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkSceneData.h"

void HK_CALL cleanupLoadedObjecthkxAnimatedFloat(void *p)
{
    static_cast<hkxAnimatedFloat *>(p)->~hkxAnimatedFloat();
}
