// cleanupLoadedObjecthkpPhysicsSystemWithContacts: the cleanup function in hkpPhysicsSystemWithContacts's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpPhysicsSystemWithContacts.h"

void HK_CALL cleanupLoadedObjecthkpPhysicsSystemWithContacts(void *p)
{
    static_cast<hkpPhysicsSystemWithContacts *>(p)->~hkpPhysicsSystemWithContacts();
}
