// hkpDisableEntityCollisionFilter
// (Physics/Utilities/Deprecated/DisableEntity/hkpDisableEntityCollisionFilter.h),
// 0x40 bytes: a filter that ignores a list of entities and listens for
// their deletion.
#ifndef HAVOK_HKPDISABLEENTITYCOLLISIONFILTER_H
#define HAVOK_HKPDISABLEENTITYCOLLISIONFILTER_H

#include "havok/hkpCollisionFilter.h"
#include "havok/hkpEntityListener.h"

class hkpDisableEntityCollisionFilter : public hkpCollisionFilter, public hkpEntityListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpDisableEntityCollisionFilter();
    hkpDisableEntityCollisionFilter(hkFinishLoadedObjectFlag flag) : hkpCollisionFilter(flag), m_disabledEntities(flag) {}
    virtual ~hkpDisableEntityCollisionFilter();

    hkArray<hkpEntity *> m_disabledEntities;   // +0x34
};

#endif
