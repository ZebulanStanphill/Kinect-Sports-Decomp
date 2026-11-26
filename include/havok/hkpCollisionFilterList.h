// hkpCollisionFilterList (Physics/Collide/Filter/List/hkpCollisionFilterList.h), 0x3C bytes: a collision
// filter that asks a list of filters in turn. The filter array at +0x30 is the one member; the destructor
// (82D44B38) releases every filter in it. The default constructor (82D44C48), the constructor from an array
// (82D449E0) and the destructor are out of line. The finish constructor is out of line too (fn_82D39418, called
// by its finish and getVtable functions); its unit expands this forced-inline form, which sets m_type when
// finishing.
#ifndef HAVOK_HKPCOLLISIONFILTERLIST_H
#define HAVOK_HKPCOLLISIONFILTERLIST_H

#include "havok/hkpCollisionFilter.h"

class hkpCollisionFilterList : public hkpCollisionFilter {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpCollisionFilterList();
    hkpCollisionFilterList(const hkArrayBase<hkpCollisionFilter *> &collisionFilters);
    HK_FORCE_INLINE hkpCollisionFilterList(hkFinishLoadedObjectFlag flag)
        : hkpCollisionFilter(flag), m_collisionFilters(flag)
    {
        if (flag.m_finishing)
            m_type = HK_FILTER_LIST;
    }
    virtual ~hkpCollisionFilterList();

    hkArray<hkpCollisionFilter *> m_collisionFilters;   // +0x30
};

#endif
