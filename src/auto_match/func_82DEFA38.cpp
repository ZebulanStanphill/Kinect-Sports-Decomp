// hkpConstrainedSystemFilter::hkpConstrainedSystemFilter(const hkpCollisionFilter *) (hkpConstrainedSystemFilter.cpp).
#include "havok/hkBase.h"
#include "havok/hkpConstrainedSystemFilter.h"

hkpConstrainedSystemFilter::hkpConstrainedSystemFilter(const hkpCollisionFilter *otherFilter)
{
    m_otherFilter = otherFilter;
    if (otherFilter)
        otherFilter->addReference();
}
