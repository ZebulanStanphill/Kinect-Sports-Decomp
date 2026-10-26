// cleanupLoadedObjecthkpPhysicsData: the cleanup function in hkpPhysicsData's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpPhysicsData {
public:
    virtual ~hkpPhysicsData();
};

void HK_CALL cleanupLoadedObjecthkpPhysicsData(void *p)
{
    static_cast<hkpPhysicsData *>(p)->~hkpPhysicsData();
}
