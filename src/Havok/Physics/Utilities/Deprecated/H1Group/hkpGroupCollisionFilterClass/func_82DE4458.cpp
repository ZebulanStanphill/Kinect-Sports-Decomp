// cleanupLoadedObjecthkpGroupCollisionFilter: the cleanup function in hkpGroupCollisionFilter's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpGroupCollisionFilter {
public:
    virtual ~hkpGroupCollisionFilter();
};

void HK_CALL cleanupLoadedObjecthkpGroupCollisionFilter(void *p)
{
    static_cast<hkpGroupCollisionFilter *>(p)->~hkpGroupCollisionFilter();
}
