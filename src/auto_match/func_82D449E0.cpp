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
    hkpCollisionFilter();
    hkpCollisionFilter(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
    virtual void init(hkpWorld *world);   // primary vtable +0xC

    hkUint32 m_prepad[2];   // +0x18
    hkUint32 m_type;        // +0x20
    hkUint32 m_postpad[3];  // +0x24
};


class hkpCollisionFilterList:public hkpCollisionFilter {public:hkArrayBase<hkpCollisionFilter*> filters;hkpCollisionFilterList(const hkArrayBase<hkpCollisionFilter*>&);};
static void copyArray(hkArrayBase<hkpCollisionFilter*> &d,const hkArrayBase<hkpCollisionFilter*> &s) {
 hkMemoryAllocator &al=hkMemoryRouter::getInstance().heap();int cap=d.getCapacity();
 if(cap<s.m_size){if((d.m_capacityAndFlags & (int)0x80000000)==0)al.bufFree(d.m_data,cap,4);int n=s.m_size;d.m_data=(hkpCollisionFilter**)al.bufAlloc(n,4);d.m_capacityAndFlags=n;}
 int n=s.m_size;hkpCollisionFilter **dest=d.m_data;d.m_size=n;hkpCollisionFilter **src=s.m_data;for(int i=0;i<n;++i)dest[i]=src[i];
}
hkpCollisionFilterList::hkpCollisionFilterList(const hkArrayBase<hkpCollisionFilter*>& src) { m_type=3;copyArray(filters,src);for(int i=0;i<filters.m_size;++i)filters.m_data[i]->addReference(); }
