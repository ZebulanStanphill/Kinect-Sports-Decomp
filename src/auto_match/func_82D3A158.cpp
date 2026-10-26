// cleanupLoadedObjecthkpDefaultConvexListFilter: the cleanup function in hkpDefaultConvexListFilter's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpDefaultConvexListFilter {
public:
    virtual ~hkpDefaultConvexListFilter();
};

void HK_CALL cleanupLoadedObjecthkpDefaultConvexListFilter(void *p)
{
    static_cast<hkpDefaultConvexListFilter *>(p)->~hkpDefaultConvexListFilter();
}
