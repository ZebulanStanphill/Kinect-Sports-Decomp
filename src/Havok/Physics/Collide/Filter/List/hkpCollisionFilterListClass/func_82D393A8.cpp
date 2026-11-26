// cleanupLoadedObjecthkpCollisionFilterList: the cleanup function in hkpCollisionFilterList's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpCollisionFilterList.h"

void HK_CALL cleanupLoadedObjecthkpCollisionFilterList(void *p)
{
    static_cast<hkpCollisionFilterList *>(p)->~hkpCollisionFilterList();
}
