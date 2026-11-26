// hkpDisableEntityCollisionFilter: registers an entity whose collisions the filter disables (adds it to
// m_disabledEntities and makes the filter one of its entity listeners).
#include "havok/hkBase.h"
#include "havok/hkpDisableEntityCollisionFilter.h"
#include "havok/hkpEntity.h"

extern "C" hkBool fn_82DF05A8(hkpDisableEntityCollisionFilter *self, hkpEntity *entity)
{
    if (entity == HK_NULL)
        return false;
    // m_disabledEntities.indexOf(entity) >= 0, with the index test folded away.
    {
        int i = 0;
        const int size = self->m_disabledEntities.m_size;
        if (size > 0) {
            hkpEntity *const *p = self->m_disabledEntities.m_data;
            do {
                if (*p == entity)
                    return false;
                ++p;
                ++i;
            } while (i < size);
        }
    }
    self->m_disabledEntities.pushBack(entity);
    if (entity->getEntityListeners().indexOf(self) < 0)
        entity->addEntityListener(self);
    return true;
}
