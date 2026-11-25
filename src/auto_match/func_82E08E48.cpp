// cleanupLoadedObjecthkMemoryResourceContainer: the cleanup function in hkMemoryResourceContainer's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkMemoryResourceContainer.h"

void HK_CALL cleanupLoadedObjecthkMemoryResourceContainer(void *p)
{
    static_cast<hkMemoryResourceContainer *>(p)->~hkMemoryResourceContainer();
}
