// cleanupLoadedObjecthkpDefaultConvexListFilter: the cleanup function in hkpDefaultConvexListFilter's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpDefaultConvexListFilter.h"

void HK_CALL cleanupLoadedObjecthkpDefaultConvexListFilter(void *p)
{
    static_cast<hkpDefaultConvexListFilter *>(p)->~hkpDefaultConvexListFilter();
}
