// cleanupLoadedObjecthkpDisplayBindingDataPhysicsSystem: the cleanup function in hkpDisplayBindingDataPhysicsSystem's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpDisplayBindingDataPhysicsSystem {
public:
    virtual ~hkpDisplayBindingDataPhysicsSystem();
};

void HK_CALL cleanupLoadedObjecthkpDisplayBindingDataPhysicsSystem(void *p)
{
    static_cast<hkpDisplayBindingDataPhysicsSystem *>(p)->~hkpDisplayBindingDataPhysicsSystem();
}
