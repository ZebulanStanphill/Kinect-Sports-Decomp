// hkpCollisionFilterList::hkpCollisionFilterList() (Physics/Collide/Filter/List/hkpCollisionFilterList.cpp):
// the out-of-line hkpCollisionFilter default constructor (??0hkpCollisionFilter@@QAA@XZ), then the five
// vtables and the empty filter hkArray at +0x30. hkpCollisionFilter and its interfaces are declared as in
// havok/hkpCollisionFilter.h, plus the default constructor that header does not declare.
#include "havok/hkBase.h"
#include "havok/hkpCollisionFilter.h"

class hkpCollisionFilterList : public hkpCollisionFilter {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpCollisionFilterList();
    hkpCollisionFilterList(hkFinishLoadedObjectFlag flag) : hkpCollisionFilter(flag), m_collisionFilters(flag) {}
    virtual ~hkpCollisionFilterList();

    hkArray<hkpCollisionFilter *> m_collisionFilters;   // +0x30
};

hkpCollisionFilterList::hkpCollisionFilterList()
{
}
