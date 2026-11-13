// cleanupLoadedObjecthkpGroupFilter: the cleanup function in hkpGroupFilter's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpGroupFilter {
public:
    virtual ~hkpGroupFilter();
};

void HK_CALL cleanupLoadedObjecthkpGroupFilter(void *p)
{
    static_cast<hkpGroupFilter *>(p)->~hkpGroupFilter();
}
