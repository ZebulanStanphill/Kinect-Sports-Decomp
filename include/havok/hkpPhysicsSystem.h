// hkpPhysicsSystem (Physics/Utilities/Serialize/hkpPhysicsSystem.h), 0x44 bytes: a group of rigid bodies,
// constraints, actions and phantoms that are added to a world together. The members are the ones the
// constructors and the destructor (fn_82D94BD8) handle, in that order. Its vtable (??_7hkpPhysicsSystem@@6B@)
// has hkReferencedObject's three slots and two of its own: clone (fn_82D94D30) and hasContacts (fn_82609770,
// false here; hkpPhysicsSystemWithContacts overrides both). The names of the two follow Havok's header.
#ifndef HAVOK_HKPPHYSICSSYSTEM_H
#define HAVOK_HKPPHYSICSSYSTEM_H

#include "havok/hkBase.h"

class hkpAction;
class hkpConstraintInstance;
class hkpPhantom;
class hkpPhysicsSystem;
class hkpRigidBody;

extern "C" void fn_82D94360(hkpPhysicsSystem *self);   // hkpPhysicsSystem::removeAll()

class hkpPhysicsSystem : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    // Out of line in the game as fn_82D94B58, which keeps its fn_ name (a Matching unit calls it); defined
    // here so that its unit can expand it.
    HK_FORCE_INLINE hkpPhysicsSystem() : m_name(HK_NULL), m_userData(0), m_active(true) {}
    hkpPhysicsSystem(hkFinishLoadedObjectFlag f)
        : hkReferencedObject(f), m_rigidBodies(f), m_constraints(f), m_actions(f), m_phantoms(f), m_name(f) {}
    virtual ~hkpPhysicsSystem();
    virtual hkpPhysicsSystem *clone() const;   // +0xC
    virtual hkBool hasContacts();              // +0x10

    void removeAll() { fn_82D94360(this); }

    hkArray<hkpRigidBody *> m_rigidBodies;             // +0x8
    hkArray<hkpConstraintInstance *> m_constraints;    // +0x14
    hkArray<hkpAction *> m_actions;                    // +0x20
    hkArray<hkpPhantom *> m_phantoms;                  // +0x2C
    hkStringPtr m_name;                                // +0x38
    hkUlong m_userData;                                // +0x3C
    hkBool m_active;                                   // +0x40
};

#endif
