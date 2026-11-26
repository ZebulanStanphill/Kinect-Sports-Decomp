// finishLoadedObjecthkpPhysicsSystemWithContacts: the finish function in hkpPhysicsSystemWithContacts's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok).
#include "havok/hkBase.h"
#include "havok/hkpPhysicsSystemWithContacts.h"

class hkpSerializedAgentNnEntry : public hkReferencedObject {
};

void HK_CALL finishLoadedObjecthkpPhysicsSystemWithContacts(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpPhysicsSystemWithContacts(f);
}
