// cleanupLoadedObjecthkpConstrainedSystemFilter: the cleanup function in hkpConstrainedSystemFilter's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpConstrainedSystemFilter.h"

void HK_CALL cleanupLoadedObjecthkpConstrainedSystemFilter(void *p)
{
    static_cast<hkpConstrainedSystemFilter *>(p)->~hkpConstrainedSystemFilter();
}
