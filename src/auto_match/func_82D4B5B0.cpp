#include "havok/hkBase.h"
#include "havok/hkpCollisionFilter.h"

class hkpGroupFilter : public hkpCollisionFilter {
public:
 hkpGroupFilter();
 int next; unsigned masks[32];
};
hkpGroupFilter::hkpGroupFilter() : hkpCollisionFilter() {
 m_type=2;
 for(int i=0;i<32;++i) masks[i]=0xffffffff;
 next=0;
}
