// hkpPhysicsSystemWithContacts (Physics/Utilities/Serialize/hkpPhysicsSystemWithContacts.h), 0x50 bytes: a
// physics system that also saves the contact points between its bodies (hkpSaveContactPointsUtil fills
// m_contacts). The constructor (fn_82DF3B68) and the destructor (82DF3D70) are out of line. Its vtable
// overrides clone (fn_82DF3BB8) and hasContacts (fn_82D3ABC8).
#ifndef HAVOK_HKPPHYSICSSYSTEMWITHCONTACTS_H
#define HAVOK_HKPPHYSICSSYSTEMWITHCONTACTS_H

#include "havok/hkpPhysicsSystem.h"

class hkpSerializedAgentNnEntry;

class hkpPhysicsSystemWithContacts : public hkpPhysicsSystem {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpPhysicsSystemWithContacts();
    hkpPhysicsSystemWithContacts(hkFinishLoadedObjectFlag f) : hkpPhysicsSystem(f), m_contacts(f) {}
    virtual ~hkpPhysicsSystemWithContacts();

    hkArray<hkpSerializedAgentNnEntry *> m_contacts;   // +0x44
};

#endif
