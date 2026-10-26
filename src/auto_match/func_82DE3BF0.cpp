// cleanupLoadedObjecthkpConstrainedSystemFilter: the cleanup function in hkpConstrainedSystemFilter's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpConstrainedSystemFilter {
public:
    virtual ~hkpConstrainedSystemFilter();
};

void HK_CALL cleanupLoadedObjecthkpConstrainedSystemFilter(void *p)
{
    static_cast<hkpConstrainedSystemFilter *>(p)->~hkpConstrainedSystemFilter();
}
