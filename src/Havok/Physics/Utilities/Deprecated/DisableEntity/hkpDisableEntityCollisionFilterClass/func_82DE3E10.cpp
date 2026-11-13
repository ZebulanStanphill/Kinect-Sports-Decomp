// cleanupLoadedObjecthkpDisableEntityCollisionFilter: the cleanup function in hkpDisableEntityCollisionFilter's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpDisableEntityCollisionFilter {
public:
    virtual ~hkpDisableEntityCollisionFilter();
};

void HK_CALL cleanupLoadedObjecthkpDisableEntityCollisionFilter(void *p)
{
    static_cast<hkpDisableEntityCollisionFilter *>(p)->~hkpDisableEntityCollisionFilter();
}
