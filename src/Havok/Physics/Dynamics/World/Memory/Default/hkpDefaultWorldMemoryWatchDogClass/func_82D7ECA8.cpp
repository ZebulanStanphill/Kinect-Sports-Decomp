// cleanupLoadedObjecthkpDefaultWorldMemoryWatchDog: the cleanup function in hkpDefaultWorldMemoryWatchDog's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpDefaultWorldMemoryWatchDog.h"

void HK_CALL cleanupLoadedObjecthkpDefaultWorldMemoryWatchDog(void *p)
{
    static_cast<hkpDefaultWorldMemoryWatchDog *>(p)->~hkpDefaultWorldMemoryWatchDog();
}
