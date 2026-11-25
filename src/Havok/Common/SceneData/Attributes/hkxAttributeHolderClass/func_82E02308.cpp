// cleanupLoadedObjecthkxAttributeHolder: the cleanup function in hkxAttributeHolder's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkSceneData.h"

void HK_CALL cleanupLoadedObjecthkxAttributeHolder(void *p)
{
    static_cast<hkxAttributeHolder *>(p)->~hkxAttributeHolder();
}
