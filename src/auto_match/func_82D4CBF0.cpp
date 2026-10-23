// hkpNullCollisionFilter::~hkpNullCollisionFilter (Physics/Collide/Filter/Null/hkpNullCollisionFilter.cpp).
#include "havok/hkpCollisionFilter.h"

class hkpNullCollisionFilter : public hkpCollisionFilter {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpNullCollisionFilter(hkFinishLoadedObjectFlag flag) : hkpCollisionFilter(flag) {}
    virtual ~hkpNullCollisionFilter();
};

hkpNullCollisionFilter::~hkpNullCollisionFilter()
{
}
