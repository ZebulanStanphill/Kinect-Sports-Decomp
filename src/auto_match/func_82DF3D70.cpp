// hkpPhysicsSystemWithContacts::~hkpPhysicsSystemWithContacts (hkpPhysicsSystemWithContacts.cpp); the base destructor
// ~hkpPhysicsSystem is out of line (fn_82D94BD8).
#include "havok/hkBase.h"

class hkpRigidBody;
class hkpConstraintInstance;
class hkpAction;
class hkpPhantom;

// Physics/Dynamics/World/hkpPhysicsSystem.h.
class hkpPhysicsSystem : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpPhysicsSystem();
    hkpPhysicsSystem(hkFinishLoadedObjectFlag f)
        : hkReferencedObject(f), m_rigidBodies(f), m_constraints(f), m_actions(f), m_phantoms(f), m_name(f) {}
    virtual ~hkpPhysicsSystem();

    hkArray<hkpRigidBody *> m_rigidBodies;             // +0x8
    hkArray<hkpConstraintInstance *> m_constraints;    // +0x14
    hkArray<hkpAction *> m_actions;                    // +0x20
    hkArray<hkpPhantom *> m_phantoms;                  // +0x2C
    hkStringPtr m_name;                                // +0x38
    hkUlong m_userData;                                // +0x3C
    hkBool m_active;                                   // +0x40
};

class hkpSerializedAgentNnEntry : public hkReferencedObject {
};

// Physics/Utilities/Serialize/hkpPhysicsSystemWithContacts.h.
class hkpPhysicsSystemWithContacts : public hkpPhysicsSystem {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpPhysicsSystemWithContacts();
    hkpPhysicsSystemWithContacts(hkFinishLoadedObjectFlag f) : hkpPhysicsSystem(f), m_contacts(f) {}
    virtual HK_FORCE_INLINE ~hkpPhysicsSystemWithContacts();

    hkArray<hkpSerializedAgentNnEntry *> m_contacts;   // +0x44
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
