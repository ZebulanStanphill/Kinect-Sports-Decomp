// hkpNullCollisionFilter::hkpNullCollisionFilter() (Physics/Collide/Filter/Null/hkpNullCollisionFilter.cpp):
// hkpCollisionFilter() is out of line, then the five subobject vtables are stored and m_type = HK_FILTER_NULL.
// The classes are declared here as in havok/hkpCollisionFilter.h, which has no default constructor.
#include "havok/hkBase.h"
#include "havok/hkpNullCollisionFilter.h"

hkpNullCollisionFilter::hkpNullCollisionFilter()
{
    m_type = HK_FILTER_NULL;
}
