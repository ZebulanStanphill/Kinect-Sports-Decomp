// hkpNullCollisionFilter::hkpNullCollisionFilter(hkFinishLoadedObjectFlag), the out-of-line finish constructor
// (Physics/Collide/Filter/Null/hkpNullCollisionFilter.cpp): the interfaces' vtables, the class's own, and
// m_type = HK_FILTER_NULL when finishing. Its finish function and getVtable function call it.
#include "havok/hkpNullCollisionFilter.h"

hkpNullCollisionFilter::hkpNullCollisionFilter(hkFinishLoadedObjectFlag flag) : hkpCollisionFilter(flag)
{
    if (flag.m_finishing)
        m_type = HK_FILTER_NULL;
}
