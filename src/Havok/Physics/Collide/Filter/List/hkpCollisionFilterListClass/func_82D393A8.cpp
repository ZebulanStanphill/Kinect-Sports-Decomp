// cleanupLoadedObjecthkpCollisionFilterList: the cleanup function in hkpCollisionFilterList's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpCollisionFilterList {
public:
    virtual ~hkpCollisionFilterList();
};

void HK_CALL cleanupLoadedObjecthkpCollisionFilterList(void *p)
{
    static_cast<hkpCollisionFilterList *>(p)->~hkpCollisionFilterList();
}
