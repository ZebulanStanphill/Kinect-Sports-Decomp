// hkpConstraintInstance::entityRemovedCallback(hkpEntity *) (Physics/Dynamics/Constraint/hkpConstraintInstance.cpp):
// slot +0x10 of ??_7hkpConstraintInstance@@6B@. When the instance has an owner it is in a world: it is removed
// from the entity's world (82D8EAD8, which keeps its fn_ name; the 1 is its last argument).
#include "havok/hkpConstraintInstance.h"

extern "C" void fn_82D8EAD8(hkpWorld *world, hkpConstraintInstance *constraint, int flag);

void hkpConstraintInstance::entityRemovedCallback(hkpEntity *entity)
{
    if (m_owner)
        fn_82D8EAD8(entity->m_world, this, 1);
}
