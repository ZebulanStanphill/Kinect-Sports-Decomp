#include "havok/hkBase.h"
#include "havok/hkpAction.h"

class hkpEntity : public hkReferencedObject {
};

hkpUnaryAction::hkpUnaryAction(hkpEntity *entity, hkUlong userData) : hkpAction(userData), m_entity(entity)
{
    if (entity)
        entity->addReference();
}
