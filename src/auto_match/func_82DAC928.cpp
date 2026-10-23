// hkpSimpleConstraintContactMgr's scalar deleting destructor ??_GhkpSimpleConstraintContactMgr@@UAAPAXI@Z
// (Physics/Dynamics/Collide/hkpSimpleConstraintContactMgr.h): calls the out-of-line destructor
// (fn_82DAC420), then frees through the class allocator. The function at the end only makes the compiler
// emit the vtable, and with it this function.
#include "havok/hkBase.h"

class hkpWorld;
class hkpRigidBody;

class hkpContactMgr : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    enum Type {
        TYPE_SIMPLE_CONSTRAINT_CONTACT_MGR,
        TYPE_REPORT_CONTACT_MGR,
        TYPE_CONVEX_LIST_CONTACT_MGR,
        TYPE_NULL_CONTACT_MGR,
        TYPE_USER_CONTACT_MGR,
        TYPE_MAX
    };
    hkpContactMgr(Type type) : m_type(type) {}

    Type m_type;   // +0x8
};

class hkpDynamicsContactMgr : public hkpContactMgr {
public:
    hkpDynamicsContactMgr(Type type) : hkpContactMgr(type) {}
};

// hkpSimpleConstraintContactMgr (Physics/Dynamics/Collide/hkpSimpleConstraintContactMgr.h). The
// contact constraint data (+0x14) and the constraint instance (+0x44) are kept opaque here.
class hkpSimpleConstraintContactMgr : public hkpDynamicsContactMgr {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpSimpleConstraintContactMgr(hkpWorld *world, hkpRigidBody *bodyA, hkpRigidBody *bodyB);
    hkpSimpleConstraintContactMgr() : hkpDynamicsContactMgr(TYPE_SIMPLE_CONSTRAINT_CONTACT_MGR) {}
    virtual ~hkpSimpleConstraintContactMgr();

    hkpWorld *m_world;                          // +0xC
    hkUint16 m_skipNextNprocessCallbacks;       // +0x10
    hkUint16 m_reservedContactPoints;           // +0x12
    char m_contactConstraintData[0x30];         // +0x14 hkpSimpleContactConstraintData
    char m_constraint[0x38];                    // +0x44 hkpConstraintInstance
};

void emitVtable_82DAC928(void *p) { new (p) hkpSimpleConstraintContactMgr; }
