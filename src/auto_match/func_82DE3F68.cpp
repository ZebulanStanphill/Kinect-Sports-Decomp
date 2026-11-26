// cleanupLoadedObjecthkpDisplayBindingDataRigidBody: the cleanup function in hkpDisplayBindingData::RigidBody's
// hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpDisplayBindingData.h"

void HK_CALL cleanupLoadedObjecthkpDisplayBindingDataRigidBody(void *p)
{
    static_cast<hkpDisplayBindingData::RigidBody *>(p)->~RigidBody();
}
