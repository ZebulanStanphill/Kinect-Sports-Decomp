// hkpConstrainedSystemFilter::~hkpConstrainedSystemFilter (hkpConstrainedSystemFilter.cpp).
#include "havok/hkBase.h"
#include "havok/hkpConstrainedSystemFilter.h"

hkpConstrainedSystemFilter::~hkpConstrainedSystemFilter()
{
    if (m_otherFilter)
        m_otherFilter->removeReference();
}
