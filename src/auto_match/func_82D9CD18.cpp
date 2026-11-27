// hkpConstraintChainInstance::entityRemovedCallback(hkpEntity *)
// (Physics/Dynamics/Constraint/Chain/hkpConstraintChainInstance.cpp): slot +0x10 of
// ??_7hkpConstraintChainInstance@@6B@. With the entity's world's critical operations locked it removes the
// chain's action (82D88AE0) and the constraint itself (82D8EA98) from that world, then unlocks it, running the
// pending operations as hkpWorld::unlockCriticalOperations does (82D80C18 / 82D80C30). The four world
// functions keep their fn_ names.
#include "havok/hkpConstraintChainInstance.h"
#include "havok/hkpConstraintChainInstanceAction.h"
#include "havok/hkpWorld.h"

extern "C" void fn_82D88AE0(hkpWorld *world, hkpAction *action);
extern "C" void fn_82D8EA98(hkpWorld *world, hkpConstraintInstance *constraint);
extern "C" void fn_82D80C18(hkpWorld *world);
extern "C" void fn_82D80C30(hkpWorld *world);

void hkpConstraintChainInstance::entityRemovedCallback(hkpEntity *entity)
{
    hkpWorld *world = entity->m_world;
    world->m_criticalOperationsLockCount++;
    fn_82D88AE0(world, m_action);
    fn_82D8EA98(world, this);
    if (--world->m_criticalOperationsLockCount == 0 && !world->m_blockExecutingPendingOperations) {
        if (world->m_pendingOperationsCount)
            fn_82D80C18(world);
        if (world->m_pendingOperationQueueCount == 1 && world->m_pendingBodyOperationsCount)
            fn_82D80C30(world);
    }
}
