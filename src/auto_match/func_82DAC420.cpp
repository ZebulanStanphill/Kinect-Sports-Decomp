#include "havok/hkBase.h"
#include "havok/hkpRigidBody.h"
#include "havok/hkpConstraintInstance.h"
#include "havok/hkpSimpleContactConstraintAtom.h"
#include "havok/hkpDynamicsContactMgr.h"

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

// hkpWorldOperationUtil::removeConstraintImmediately(hkpWorld *, hkpConstraintInstance *, FireCallbacks) is
// out of line (fn_82D8EAD8).
extern "C" void fn_82D8EAD8(hkpWorld *world, hkpConstraintInstance *constraint, int fireCallbacks);

// hkpConstraintInstance::setPriority(ConstraintPriority) is out of line (fn_82D958D8).
extern "C" void fn_82D958D8(hkpConstraintInstance *self, hkpConstraintInstance::ConstraintPriority priority);

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

hkpSimpleConstraintContactMgr::~hkpSimpleConstraintContactMgr()
{
    if (m_contactConstraintData.m_atom->m_numContactPoints)
        fn_82D8EAD8(m_world, &m_constraint, 1);
    m_constraint.m_entities[0] = HK_NULL;
    m_constraint.m_entities[1] = HK_NULL;
    m_constraint.m_data = HK_NULL;
}
