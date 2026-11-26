#include "havok/hkBase.h"
#include "havok/hkpRigidBody.h"
#include "havok/hkpCollisionDispatcher.h"
#include "havok/hkpWorld.h"
#include "havok/hkpSimpleConstraintContactMgr.h"

extern "C" {
int fn_82DC73A8(int sizeOfAllAtoms);   // the allocation size of a contact atom block (hkpSimpleContactConstraintAtomUtil)
}

#define C2_HKPCONSTRAINTDATA
// Out-of-line helpers that keep their fn_ names.
extern "C" {
void fn_82DBFAA8(void *constraint);   // hkpConstraintCallbackUtil::fireConstraintDeleted(hkpConstraintInstance *)
}

// hkpWorldOperationUtil::removeConstraintImmediately(hkpWorld *, hkpConstraintInstance *, FireCallbacks) is
// out of line (fn_82D8EAD8).
extern "C" void fn_82D8EAD8(hkpWorld *world, hkpConstraintInstance *constraint, int fireCallbacks);

// hkpConstraintInstance::setPriority(ConstraintPriority) is out of line (fn_82D958D8).
extern "C" void fn_82D958D8(hkpConstraintInstance *self, hkpConstraintInstance::ConstraintPriority priority);

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
