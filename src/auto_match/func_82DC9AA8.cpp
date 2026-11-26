// hkpPairCollisionFilter::~hkpPairCollisionFilter (Physics/Collide/Filter/Pair/hkpPairCollisionFilter.cpp).
#include "havok/hkpPairCollisionFilter.h"

hkpPairCollisionFilter::~hkpPairCollisionFilter()
{
    if (m_childFilter)
        m_childFilter->removeReference();
}
