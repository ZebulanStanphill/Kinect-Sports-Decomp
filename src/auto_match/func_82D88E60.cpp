// Havok hkpWorld::setCollisionFilter-like (World_82D88E60): installs a collision filter.
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

class hkpNullCollisionFilter : public hkpCollisionFilter {
public:
    hkpNullCollisionFilter();
};


struct WorldPart_82D88E60 {
    char pad0[0xc];
    hkpCollisionFilter *filter;
};
struct World_82D88E60 {
    char pad0[0x78];
    WorldPart_82D88E60 *part;
    hkpCollisionFilter *m_filter;
};
extern "C" void fn_82D88440(World_82D88E60 *w, int a, int b);

extern "C" void fn_82D88E60(World_82D88E60 *w, hkpCollisionFilter *filter, char update, int mode, int mode2)
{
    if (filter == 0) {
        filter = new hkpNullCollisionFilter();
    } else {
        filter->addReference();
    }
    w->m_filter->removeReference();
    w->m_filter = filter;
    w->part->filter = filter;
    if (update != 0) fn_82D88440(w, mode, mode2);
}
