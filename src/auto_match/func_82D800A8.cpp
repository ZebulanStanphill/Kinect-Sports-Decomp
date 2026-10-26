// cleanupLoadedObjecthkpWorld: the cleanup function in hkpWorld's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpWorld {
public:
    virtual ~hkpWorld();
};

void HK_CALL cleanupLoadedObjecthkpWorld(void *p)
{
    static_cast<hkpWorld *>(p)->~hkpWorld();
}
