#include "havok/hkBase.h"

class hkpRigidBody;
class hkpConstraintInstance;
class hkpAction;
class hkpPhantom;

class hkpPhysicsSystem;
extern "C" void fn_82D94360(hkpPhysicsSystem *self);   // hkpPhysicsSystem::removeAll()

// hkpPhysicsSystem (Physics/Utilities/Serialize/hkpPhysicsSystem.h). The default constructor is out of line
// in the game as fn_82D94B58, which keeps its fn_ name (a Matching unit calls it); it is defined inline
// here so that a unit can expand it.
class hkpPhysicsSystem : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    HK_FORCE_INLINE hkpPhysicsSystem() : m_name(HK_NULL), m_userData(0), m_active(true) {}
    virtual ~hkpPhysicsSystem();
    void removeAll() { fn_82D94360(this); }

    hkArray<hkpRigidBody *> m_rigidBodies;              // +0x8
    hkArray<hkpConstraintInstance *> m_constraints;     // +0x14
    hkArray<hkpAction *> m_actions;                     // +0x20
    hkArray<hkpPhantom *> m_phantoms;                   // +0x2C
    hkStringPtr m_name;                                 // +0x38
    hkUlong m_userData;                                 // +0x3C
    hkBool m_active;                                    // +0x40
};

hkpPhysicsSystem::~hkpPhysicsSystem()
{
    removeAll();
}
