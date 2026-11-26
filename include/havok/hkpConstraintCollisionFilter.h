// hkpConstraintCollisionFilter (Physics/Utilities, hkpConstraintCollisionFilter.cpp; the folder is not known), 0x44
// bytes: a pair filter that disables collisions between the bodies of each constraint added to the world.
// RTTI: hkpPairCollisionFilter at +0x0 (with its filter interfaces at +0x8 to +0x14), hkpConstraintListener at
// +0x40; the class has six vtables (??_7hkpConstraintCollisionFilter@@6B...). The constructor
// (??0hkpConstraintCollisionFilter@@QAA@PBVhkpCollisionFilter@@@Z, 82DC31B0) and the destructor (82DC3130) are out of
// line; the default argument follows Havok's header. The listener overrides are not declared (no unit needs them).
#ifndef HAVOK_HKPCONSTRAINTCOLLISIONFILTER_H
#define HAVOK_HKPCONSTRAINTCOLLISIONFILTER_H

#include "havok/hkBase.h"
#include "havok/hkpConstraintListener.h"
#include "havok/hkpPairCollisionFilter.h"

class hkpConstraintCollisionFilter : public hkpPairCollisionFilter, public hkpConstraintListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpConstraintCollisionFilter(const hkpCollisionFilter *childFilter = HK_NULL);
    hkpConstraintCollisionFilter(hkFinishLoadedObjectFlag flag) : hkpPairCollisionFilter(flag) {}
    virtual ~hkpConstraintCollisionFilter();
};

#endif
