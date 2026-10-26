// cleanupLoadedObjecthkMemoryResourceHandle: the cleanup function in hkMemoryResourceHandle's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkMemoryResourceHandle {
public:
    virtual ~hkMemoryResourceHandle();
};

void HK_CALL cleanupLoadedObjecthkMemoryResourceHandle(void *p)
{
    static_cast<hkMemoryResourceHandle *>(p)->~hkMemoryResourceHandle();
}
