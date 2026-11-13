// cleanupLoadedObjecthkpPhysicsSystem: the cleanup function in hkpPhysicsSystem's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpPhysicsSystem {
public:
    virtual ~hkpPhysicsSystem();
};

void HK_CALL cleanupLoadedObjecthkpPhysicsSystem(void *p)
{
    static_cast<hkpPhysicsSystem *>(p)->~hkpPhysicsSystem();
}
