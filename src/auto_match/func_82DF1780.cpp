#include "havok/hkBase.h"
class hkpCollidableCollidableFilter { public: virtual ~hkpCollidableCollidableFilter(); virtual void filter(); };
class hkpShapeCollectionFilter { public: virtual void filter1(); virtual void filter2(); virtual void limit(); virtual ~hkpShapeCollectionFilter(); };
class hkpRayShapeCollectionFilter { public: virtual void filter(); virtual ~hkpRayShapeCollectionFilter(); };
class hkpRayCollidableFilter { public: virtual ~hkpRayCollidableFilter(); virtual void filter(); };
class hkpCollisionFilter : public hkReferencedObject, public hkpCollidableCollidableFilter, public hkpShapeCollectionFilter, public hkpRayShapeCollectionFilter, public hkpRayCollidableFilter {
public:
 hkpCollisionFilter();
 virtual void init();
 char pad[24];
};
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
