// hkpGroupFilter::hkpGroupFilter(hkFinishLoadedObjectFlag), the out-of-line finish constructor
// (Physics/Collide/Filter/Group/hkpGroupFilter.cpp): the interfaces' vtables, the class's own, and
// m_type = HK_FILTER_GROUP when finishing. Its finish function and getVtable function call it.
#include "havok/hkpGroupFilter.h"

hkpGroupFilter::hkpGroupFilter(hkFinishLoadedObjectFlag flag) : hkpCollisionFilter(flag)
{
    if (flag.m_finishing)
        m_type = HK_FILTER_GROUP;
}
