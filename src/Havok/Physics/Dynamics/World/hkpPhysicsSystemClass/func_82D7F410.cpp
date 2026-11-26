// cleanupLoadedObjecthkpPhysicsSystem: the cleanup function in hkpPhysicsSystem's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpPhysicsSystem.h"

void HK_CALL cleanupLoadedObjecthkpPhysicsSystem(void *p)
{
    static_cast<hkpPhysicsSystem *>(p)->~hkpPhysicsSystem();
}
