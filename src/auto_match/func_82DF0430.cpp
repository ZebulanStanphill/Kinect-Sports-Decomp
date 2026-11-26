// hkpDisableEntityCollisionFilter::~hkpDisableEntityCollisionFilter (hkpDisableEntityCollisionFilter.cpp): unregisters itself from the entities that still list it, then m_disabledEntities is destroyed.
#include "havok/hkBase.h"
#include "havok/hkpEntity.h"
#include "havok/hkpDisableEntityCollisionFilter.h"

hkpDisableEntityCollisionFilter::~hkpDisableEntityCollisionFilter()
{
    for (int i = 0; i < m_disabledEntities.getSize(); i++) {
        if (m_disabledEntities[i]->getEntityListeners().indexOf(this) >= 0)
            m_disabledEntities[i]->removeEntityListener(this);
    }
}
