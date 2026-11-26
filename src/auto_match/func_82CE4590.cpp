// cleanupLoadedObjecthkLocalFrameGroup: the cleanup function in hkLocalFrameGroup's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkLocalFrameGroup.h"

void HK_CALL cleanupLoadedObjecthkLocalFrameGroup(void *p)
{
    static_cast<hkLocalFrameGroup *>(p)->~hkLocalFrameGroup();
}
