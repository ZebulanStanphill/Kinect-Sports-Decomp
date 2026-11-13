// cleanupLoadedObjecthkpPhysicsSystemWithContacts: the cleanup function in hkpPhysicsSystemWithContacts's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpPhysicsSystemWithContacts {
public:
    virtual ~hkpPhysicsSystemWithContacts();
};

void HK_CALL cleanupLoadedObjecthkpPhysicsSystemWithContacts(void *p)
{
    static_cast<hkpPhysicsSystemWithContacts *>(p)->~hkpPhysicsSystemWithContacts();
}
