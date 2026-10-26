// cleanupLoadedObjecthkpRigidBody: the cleanup function in hkpRigidBody's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpRigidBody {
public:
    virtual ~hkpRigidBody();
};

void HK_CALL cleanupLoadedObjecthkpRigidBody(void *p)
{
    static_cast<hkpRigidBody *>(p)->~hkpRigidBody();
}
