// hkpConstraintCollisionFilter's scalar deleting destructor (Physics/Collide/Filter/Constraint/
// hkpConstraintCollisionFilter.h): the empty user-written destructor is inlined (own vtables, then
// hkpConstraintListener's inline destructor at +0x40), the base destructor ~hkpPairCollisionFilter is called.
#include "havok/hkpConstraintListener.h"
#include "havok/hkpPairCollisionFilter.h"

// RTTI: hkpPairCollisionFilter at +0x0, hkpConstraintListener at +0x40.
class hkpConstraintCollisionFilter : public hkpPairCollisionFilter, public hkpConstraintListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpConstraintCollisionFilter(hkFinishLoadedObjectFlag flag) : hkpPairCollisionFilter(flag) {}
    virtual ~hkpConstraintCollisionFilter();
};

hkpConstraintCollisionFilter::~hkpConstraintCollisionFilter()
{
}
