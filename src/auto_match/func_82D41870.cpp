// hkpCollisionFilter::hkpCollisionFilter() (Physics/Collide/Filter/hkpCollisionFilter.cpp): the four filter
// interfaces' vtables are stored first, then the class's own; m_type starts as HK_FILTER_UNKNOWN. The
// classes are declared here as in havok/hkpCollisionFilter.h, which has no default constructor.
#include "havok/hkBase.h"
#include "havok/hkpCollisionFilter.h"

hkpCollisionFilter::hkpCollisionFilter() : m_type(HK_FILTER_UNKNOWN)
{
}
