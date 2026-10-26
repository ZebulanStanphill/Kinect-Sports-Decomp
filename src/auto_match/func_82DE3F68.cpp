// cleanupLoadedObjecthkpDisplayBindingDataRigidBody: the cleanup function in hkpDisplayBindingDataRigidBody's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpDisplayBindingDataRigidBody {
public:
    virtual ~hkpDisplayBindingDataRigidBody();
};

void HK_CALL cleanupLoadedObjecthkpDisplayBindingDataRigidBody(void *p)
{
    static_cast<hkpDisplayBindingDataRigidBody *>(p)->~hkpDisplayBindingDataRigidBody();
}
