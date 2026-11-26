#include "havok/hkBase.h"
#include "havok/hkpRigidBody.h"
#include "havok/hkpConstraintInstance.h"
#include "havok/hkpCollisionDispatcher.h"

extern "C" {
int fn_82DC73A8(int sizeOfAllAtoms);   // the allocation size of a contact atom block (hkpSimpleContactConstraintAtomUtil)
}

// hkpDynamicsCpIdMgr (Physics/Dynamics/Collide/hkpDynamicsCpIdMgr.h): an hkArray<hkUint8>. Its implicit
// destructor is out of line (fn_82DAC7C8).
class hkpDynamicsCpIdMgr {
public:
    ~hkpDynamicsCpIdMgr();
    hkArray<hkUint8> m_values;   // +0x0
};

struct hkpSimpleContactConstraintAtom {
    hkUint16 m_type;                 // +0x0
    hkUint16 m_sizeOfAllAtoms;       // +0x2
    hkUint16 m_numContactPoints;     // +0x4
    hkUint16 m_numReservedContactPoints;   // +0x6
};

#define C2_HKPCONSTRAINTDATA
// hkpSimpleContactConstraintData (Physics/Dynamics/Collide/hkpSimpleContactConstraintData.h), 0x30 bytes.
class hkpSimpleContactConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpSimpleContactConstraintData(hkpConstraintInstance *constraint, hkpRigidBody *bodyA, hkpRigidBody *bodyB);
    virtual ~hkpSimpleContactConstraintData();

    hkpDynamicsCpIdMgr m_idMgrA;                  // +0xC
    void *m_clientData;                           // +0x18
    hkpConstraintInstance *m_constraint;          // +0x1C
    char m_pad20[0x8];                            // +0x20
    hkpSimpleContactConstraintAtom *m_atom;       // +0x28
    hkUint32 m_atomSize;                          // +0x2C
};

// Out-of-line helpers that keep their fn_ names.
extern "C" {
void fn_82DBFAA8(void *constraint);   // hkpConstraintCallbackUtil::fireConstraintDeleted(hkpConstraintInstance *)
}

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

// hkpWorldOperationUtil::removeConstraintImmediately(hkpWorld *, hkpConstraintInstance *, FireCallbacks) is
// out of line (fn_82D8EAD8).
extern "C" void fn_82D8EAD8(hkpWorld *world, hkpConstraintInstance *constraint, int fireCallbacks);

// hkpConstraintInstance::setPriority(ConstraintPriority) is out of line (fn_82D958D8).
extern "C" void fn_82D958D8(hkpConstraintInstance *self, hkpConstraintInstance::ConstraintPriority priority);

class hkpWorld {
public:
    hkpCollisionDispatcher *getCollisionDispatcher() const { return m_collisionDispatcher; }
    char m_pad[0x80];
    hkpCollisionDispatcher *m_collisionDispatcher;   // +0x80
};

// hkpSimpleConstraintContactMgr (Physics/Dynamics/Collide/hkpSimpleConstraintContactMgr.h).
class hkpSimpleConstraintContactMgr : public hkpDynamicsContactMgr {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpSimpleConstraintContactMgr(hkpWorld *world, hkpRigidBody *bodyA, hkpRigidBody *bodyB);
    virtual ~hkpSimpleConstraintContactMgr();

    hkpWorld *m_world;                                      // +0xC
    hkUint16 m_skipNextNprocessCallbacks;                   // +0x10
    hkUint16 m_reservedContactPoints;                       // +0x12
    hkpSimpleContactConstraintData m_contactConstraintData; // +0x14
    hkpConstraintInstance m_constraint;                     // +0x44
};

hkpSimpleConstraintContactMgr::hkpSimpleConstraintContactMgr(hkpWorld *world, hkpRigidBody *bodyA, hkpRigidBody *bodyB)
    : hkpDynamicsContactMgr(hkpContactMgr::TYPE_SIMPLE_CONSTRAINT_CONTACT_MGR),
      m_contactConstraintData(&m_constraint, bodyA, bodyB),
      m_constraint(hkpConstraintInstance::PRIORITY_PSI)
{
    m_constraint.m_data = &m_contactConstraintData;
    m_constraint.m_uid = 0xffffffff;
    m_constraint.m_entities[0] = bodyA;
    m_constraint.m_entities[1] = bodyB;
    m_world = world;
    m_reservedContactPoints = 0;
    m_skipNextNprocessCallbacks = 0;
    m_contactConstraintData.m_memSizeAndFlags = 0;
    m_constraint.m_memSizeAndFlags = 0;

    hkpCollisionDispatcher *dispatcher = world->getCollisionDispatcher();
    hkpCollisionDispatcher::CollisionQualityIndex index =
        dispatcher->getCollisionQualityIndex(bodyA->getQualityType(), bodyB->getQualityType());
    hkpCollisionQualityInfo *qualityInfo = dispatcher->getCollisionQualityInfo(index);
    fn_82D958D8(&m_constraint, hkpConstraintInstance::ConstraintPriority(qualityInfo->m_constraintPriority));
}
