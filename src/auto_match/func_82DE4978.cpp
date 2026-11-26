// getVtablehkpPhysicsSystemWithContacts (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok): builds a finished object in a local buffer and returns
// its vtable pointer.
#include "havok/hkBase.h"
#include "havok/hkpPhysicsSystemWithContacts.h"

class hkpSerializedAgentNnEntry : public hkReferencedObject {
};

const void *HK_CALL getVtablehkpPhysicsSystemWithContacts()
{
    union {
        void *ptr;
        char buf[sizeof(hkpPhysicsSystemWithContacts)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpPhysicsSystemWithContacts(f);
    return u.ptr;
}
