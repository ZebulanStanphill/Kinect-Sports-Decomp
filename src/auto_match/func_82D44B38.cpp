// hkpCollisionFilterList::~hkpCollisionFilterList (Physics/Collide/Filter/List/hkpCollisionFilterList.cpp):
// releases every filter, then the filter hkArray (+0x30) and the bases are destroyed (the four filter
// interfaces' inline destructors store their vtables).
#include "havok/hkpCollisionFilter.h"

class hkpCollisionFilterList : public hkpCollisionFilter {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpCollisionFilterList(hkFinishLoadedObjectFlag flag);
    virtual ~hkpCollisionFilterList();

    hkArray<hkpCollisionFilter *> m_collisionFilters;   // +0x30
};

hkpCollisionFilterList::~hkpCollisionFilterList()
{
    for (int i = 0; i < m_collisionFilters.getSize(); i++) {
        m_collisionFilters[i]->removeReference();
    }
}
