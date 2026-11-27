#include "havok/hkpMouseSpringAction.h"

// Slot +0x18 of ??_7hkpMouseSpringAction@@6B@: hkpUnaryAction's, then forgets the entity.
void hkpMouseSpringAction::entityRemovedCallback(hkpEntity *entity)
{
    hkpUnaryAction::entityRemovedCallback(entity);
    m_entity = HK_NULL;
}
