#include "havok/hkpGroupFilter.h"
hkpGroupFilter::hkpGroupFilter() : hkpCollisionFilter() {
 m_type=HK_FILTER_GROUP;
 for(int i=0;i<32;++i) m_collisionLookupTable[i]=0xffffffff;
 m_nextFreeSystemGroup=0;
}
