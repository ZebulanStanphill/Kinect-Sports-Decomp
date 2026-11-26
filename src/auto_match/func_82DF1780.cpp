#include "havok/hkBase.h"
#include "havok/hkpGroupCollisionFilter.h"

hkpGroupCollisionFilter::hkpGroupCollisionFilter()
{
    m_noGroupCollisionEnabled = true;
    for (int i = 0; i < 32; ++i)
        m_collisionGroups[i] = 0;
}
