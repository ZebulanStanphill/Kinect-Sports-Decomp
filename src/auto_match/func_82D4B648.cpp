// hkpGroupFilter::~hkpGroupFilter (Physics/Collide/Filter/Group/hkpGroupFilter.cpp).
#include "havok/hkpCollisionFilter.h"

class hkpGroupFilter : public hkpCollisionFilter {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpGroupFilter(hkFinishLoadedObjectFlag flag) : hkpCollisionFilter(flag) {}
    virtual ~hkpGroupFilter();

    int m_nextFreeSystemGroup;              // +0x30
    hkUint32 m_collisionLookupTable[32];    // +0x34
};

hkpGroupFilter::~hkpGroupFilter()
{
}
