// hkpUnaryAction::~hkpUnaryAction() (Physics/Dynamics/Action/hkpUnaryAction.cpp): releases the entity.
// hkpAction's destructor is inline (it stores hkpAction's vtable and destroys the name).
#include "havok/hkpAction.h"
#include "havok/hkpEntity.h"

hkpUnaryAction::~hkpUnaryAction()
{
    if (m_entity) {
        m_entity->removeReference();
        m_entity = HK_NULL;
    }
}
