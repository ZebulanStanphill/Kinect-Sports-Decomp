// hkpCollisionFilter::hkpCollisionFilter() (Physics/Collide/Filter/hkpCollisionFilter.cpp): the four filter
// interfaces' vtables are stored first, then the class's own; m_type starts as HK_FILTER_UNKNOWN. The
// classes are declared here as in havok/hkpCollisionFilter.h, which has no default constructor.
#include "havok/hkBase.h"

class hkpCollidable;
class hkpCdBody;
class hkpShapeContainer;
class hkpCollisionInput;
class hkpWorld;
struct hkpShapeRayCastInput;
struct hkpWorldRayCastInput;
typedef hkUint32 hkpShapeKey;

extern "C" void fn_8265CA20(void *p);   // global operator delete

class hkpCollidableCollidableFilter {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpCollidableCollidableFilter() {}
    virtual hkBool isCollisionEnabled(const hkpCollidable &a, const hkpCollidable &b) const;
};

class hkpShapeCollectionFilter {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual hkBool isCollisionEnabled(const hkpCollisionInput &input, const hkpCdBody &a, const hkpCdBody &b,
                                      const hkpShapeContainer &bContainer, hkpShapeKey bKey) const;
    virtual hkBool isCollisionEnabled(const hkpCollisionInput &input, const hkpCdBody &collectionBodyA,
                                      const hkpCdBody &collectionBodyB, const hkpShapeContainer &containerShapeA,
                                      const hkpShapeContainer &containerShapeB, hkpShapeKey keyA,
                                      hkpShapeKey keyB) const;
    virtual int numShapeKeyHitsLimitBreached(const hkpCollisionInput &input, const hkpCdBody &bodyA,
                                             hkpShapeKey keyA, const hkpCdBody &bodyB, hkpShapeKey keyB,
                                             hkpShapeKey *shapeKeysInOut, int numShapeKeys) const;
    virtual ~hkpShapeCollectionFilter() {}
};

class hkpRayShapeCollectionFilter {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual hkBool isCollisionEnabled(const hkpShapeRayCastInput &aInput, const hkpShapeContainer &bContainer,
                                      hkpShapeKey bKey) const;
    virtual ~hkpRayShapeCollectionFilter() {}
};

class hkpRayCollidableFilter {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpRayCollidableFilter() {}
    virtual hkBool isCollisionEnabled(const hkpWorldRayCastInput &a, const hkpCollidable &collidableB) const;
};

class hkpCollisionFilter : public hkReferencedObject,
                           public hkpCollidableCollidableFilter,
                           public hkpShapeCollectionFilter,
                           public hkpRayShapeCollectionFilter,
                           public hkpRayCollidableFilter {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    enum hkpFilterType {
        HK_FILTER_UNKNOWN = 0,
        HK_FILTER_NULL = 1,
        HK_FILTER_GROUP = 2,
        HK_FILTER_LIST = 3,
        HK_FILTER_CUSTOM = 4,
        HK_FILTER_PAIR = 5,
        HK_FILTER_CONSTRAINT = 6
    };
    hkpCollisionFilter();
    virtual void init(hkpWorld *world);   // primary vtable +0xC

    hkUint32 m_prepad[2];   // +0x18
    hkUint32 m_type;        // +0x20 hkEnum<hkpFilterType, hkUint32>
    hkUint32 m_postpad[3];  // +0x24
};

hkpCollisionFilter::hkpCollisionFilter() : m_type(HK_FILTER_UNKNOWN)
{
}
