// hkpConstrainedSystemFilter
// (Physics/Utilities/Collide/Filter/ConstrainedSystem/hkpConstrainedSystemFilter.h),
// 0x38 bytes: a filter that disables collisions between constrained bodies.
#ifndef HAVOK_HKPCONSTRAINEDSYSTEMFILTER_H
#define HAVOK_HKPCONSTRAINEDSYSTEMFILTER_H

#include "havok/hkpCollisionFilter.h"
#include "havok/hkpConstraintListener.h"

class hkpConstrainedSystemFilter : public hkpCollisionFilter, public hkpConstraintListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpConstrainedSystemFilter(const hkpCollisionFilter *otherFilter = HK_NULL);
    hkpConstrainedSystemFilter(hkFinishLoadedObjectFlag flag) : hkpCollisionFilter(flag) {}
    virtual ~hkpConstrainedSystemFilter();

    const hkpCollisionFilter *m_otherFilter;   // +0x34
};

#endif
