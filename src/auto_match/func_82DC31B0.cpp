// hkpConstraintCollisionFilter::hkpConstraintCollisionFilter(const hkpCollisionFilter *) (hkpConstraintCollisionFilter.cpp).
#include "havok/hkpConstraintListener.h"
#include "havok/hkpPairCollisionFilter.h"

// RTTI: hkpPairCollisionFilter at +0x0, hkpConstraintListener at +0x40.
class hkpConstraintCollisionFilter : public hkpPairCollisionFilter, public hkpConstraintListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpConstraintCollisionFilter(const hkpCollisionFilter *childFilter = HK_NULL);
    hkpConstraintCollisionFilter(hkFinishLoadedObjectFlag flag) : hkpPairCollisionFilter(flag) {}
    virtual ~hkpConstraintCollisionFilter();
};

hkpConstraintCollisionFilter::hkpConstraintCollisionFilter(const hkpCollisionFilter *childFilter)
    : hkpPairCollisionFilter(childFilter)
{
    m_type = 6;   // HK_FILTER_CONSTRAINT
}
