// hkpCollisionFilterList::~hkpCollisionFilterList (Physics/Collide/Filter/List/hkpCollisionFilterList.cpp):
// releases every filter, then the filter hkArray (+0x30) and the bases are destroyed (the four filter
// interfaces' inline destructors store their vtables).
#include "havok/hkpCollisionFilterList.h"

hkpCollisionFilterList::~hkpCollisionFilterList()
{
    for (int i = 0; i < m_collisionFilters.getSize(); i++) {
        m_collisionFilters[i]->removeReference();
    }
}
