// hkpPhysicsSystem::~hkpPhysicsSystem (Physics/Utilities/Serialize/hkpPhysicsSystem.cpp): removeAll() releases the objects; then the members' destructors.
// hkStringPtr is declared here rather than taken from the shared havok/hkStringPtr.h (skipped through its
// include guard), which lacks the default constructor: it is out of line, fn_82CED2F8 (it stores a pointer
// read from a global, lbl_8323B430), and keeps its fn_ name (Matching C units call it), like the finish
// constructor fn_82CED308, the const char * constructor fn_82CED488 and the destructor fn_82CED5B8.
#define HAVOK_HKSTRINGPTR_H
#include "havok/hkBase.h"

class hkStringPtr;
extern "C" {
void fn_82CED2F8(hkStringPtr *self);                              // hkStringPtr::hkStringPtr()
void fn_82CED308(hkStringPtr *self, hkFinishLoadedObjectFlag f);  // hkStringPtr::hkStringPtr(hkFinishLoadedObjectFlag)
void fn_82CED5B8(hkStringPtr *self);                              // hkStringPtr::~hkStringPtr()
void fn_82CED488(hkStringPtr *self, const char *string);          // hkStringPtr::hkStringPtr(const char *)
}

class hkStringPtr {
public:
    enum { OWNED_FLAG = 0x1 };
    HK_FORCE_INLINE hkStringPtr() { fn_82CED2F8(this); }
    HK_FORCE_INLINE hkStringPtr(const char *string) { fn_82CED488(this, string); }
    HK_FORCE_INLINE hkStringPtr(hkFinishLoadedObjectFlag f) { fn_82CED308(this, f); }
    HK_FORCE_INLINE ~hkStringPtr() { fn_82CED5B8(this); }

    const char *m_stringAndFlag;
};

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
