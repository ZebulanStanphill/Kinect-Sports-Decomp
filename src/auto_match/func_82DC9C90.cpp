#include "havok/hkBase.h"
#include "havok/hkpPairCollisionFilter.h"

hkpPairCollisionFilter::hkpPairCollisionFilter(const hkpCollisionFilter *childFilter)
    : hkpCollisionFilter(), m_childFilter(childFilter)
{
    m_type = 5;
    if (childFilter)
        childFilter->addReference();
}
