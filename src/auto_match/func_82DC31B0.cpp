// hkpConstraintCollisionFilter::hkpConstraintCollisionFilter(const hkpCollisionFilter *) (hkpConstraintCollisionFilter.cpp).
#include "havok/hkpConstraintCollisionFilter.h"

hkpConstraintCollisionFilter::hkpConstraintCollisionFilter(const hkpCollisionFilter *childFilter)
    : hkpPairCollisionFilter(childFilter)
{
    m_type = 6;   // HK_FILTER_CONSTRAINT
}
