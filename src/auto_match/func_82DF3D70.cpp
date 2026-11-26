// hkpPhysicsSystemWithContacts::~hkpPhysicsSystemWithContacts (hkpPhysicsSystemWithContacts.cpp); the base destructor
// ~hkpPhysicsSystem is out of line (fn_82D94BD8).
#include "havok/hkBase.h"
#include "havok/hkpPhysicsSystemWithContacts.h"

class hkpSerializedAgentNnEntry : public hkReferencedObject {
};

HK_FORCE_INLINE hkpPhysicsSystemWithContacts::~hkpPhysicsSystemWithContacts()
{
    // The local copy of this puts the loop's lwzx base first, as in the original.
    hkpPhysicsSystemWithContacts *self = this;
    const int numContacts = self->m_contacts.getSize();
    for (int i = 0; i < numContacts; i++)
        self->m_contacts[i]->removeReference();
}

extern "C" void fn_82DF3D70(hkpPhysicsSystemWithContacts *self) { self->hkpPhysicsSystemWithContacts::~hkpPhysicsSystemWithContacts(); }
