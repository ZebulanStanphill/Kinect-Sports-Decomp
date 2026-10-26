// cleanupLoadedObjecthkMemoryResourceContainer: the cleanup function in hkMemoryResourceContainer's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkMemoryResourceContainer {
public:
    virtual ~hkMemoryResourceContainer();
};

void HK_CALL cleanupLoadedObjecthkMemoryResourceContainer(void *p)
{
    static_cast<hkMemoryResourceContainer *>(p)->~hkMemoryResourceContainer();
}
