#include "havok/hkBase.h"
#include "havok/hkpAction.h"
#include "havok/hkpEntity.h"

hkpUnaryAction::hkpUnaryAction(hkpEntity *entity, hkUlong userData) : hkpAction(userData), m_entity(entity)
{
    if (entity)
        entity->addReference();
}
