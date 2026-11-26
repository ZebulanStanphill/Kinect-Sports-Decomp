#include "havok/hkBase.h"
#include "havok/hkpCollisionFilter.h"
class hkpGroupCollisionFilter : public hkpCollisionFilter {
public:
 HK_DECLARE_CLASS_ALLOCATOR(0);
 hkpGroupCollisionFilter();
 hkBool m_noGroupCollisionEnabled;
 unsigned int m_collisionLookupTable[32];
};
hkpGroupCollisionFilter::hkpGroupCollisionFilter() {
 m_noGroupCollisionEnabled = true;
 for (int i=0;i<32;++i) m_collisionLookupTable[i]=0;
}
