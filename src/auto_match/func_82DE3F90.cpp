// cleanupLoadedObjecthkpDisplayBindingDataPhysicsSystem: the cleanup function in
// hkpDisplayBindingData::PhysicsSystem's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpDisplayBindingData.h"

void HK_CALL cleanupLoadedObjecthkpDisplayBindingDataPhysicsSystem(void *p)
{
    static_cast<hkpDisplayBindingData::PhysicsSystem *>(p)->~PhysicsSystem();
}
