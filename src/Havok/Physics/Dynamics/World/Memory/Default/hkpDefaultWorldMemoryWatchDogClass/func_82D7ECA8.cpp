// cleanupLoadedObjecthkpDefaultWorldMemoryWatchDog: the cleanup function in hkpDefaultWorldMemoryWatchDog's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpDefaultWorldMemoryWatchDog {
public:
    virtual ~hkpDefaultWorldMemoryWatchDog();
};

void HK_CALL cleanupLoadedObjecthkpDefaultWorldMemoryWatchDog(void *p)
{
    static_cast<hkpDefaultWorldMemoryWatchDog *>(p)->~hkpDefaultWorldMemoryWatchDog();
}
