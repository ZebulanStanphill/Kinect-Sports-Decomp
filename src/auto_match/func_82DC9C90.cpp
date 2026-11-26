#include "havok/hkBase.h"
#include "havok/hkpCollisionFilter.h"

extern "C" void fn_82CEAB80(void *,hkMemoryAllocator *,int);
class PairMap { public:
 HK_FORCE_INLINE PairMap():data(0),size(0),mask(-1) { fn_82CEAB80(this,&hkMemoryRouter::getInstance().heap(),0); }
 void *data; int size,mask;
};
class hkpPairCollisionFilter: public hkpCollisionFilter { public:
 hkpPairCollisionFilter(const hkpCollisionFilter *);
 PairMap pairs; const hkpCollisionFilter *child;
};
hkpPairCollisionFilter::hkpPairCollisionFilter(const hkpCollisionFilter *c):hkpCollisionFilter(),child(c) { m_type=5; if(c)c->addReference(); }
