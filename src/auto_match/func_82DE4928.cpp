// finishLoadedObjecthkpPhysicsSystemWithContacts: the finish function in hkpPhysicsSystemWithContacts's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok).
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
    virtual ~hkpPhysicsSystemWithContacts();

    hkArray<hkpSerializedAgentNnEntry *> m_contacts;   // +0x44
};

void HK_CALL finishLoadedObjecthkpPhysicsSystemWithContacts(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpPhysicsSystemWithContacts(f);
}
