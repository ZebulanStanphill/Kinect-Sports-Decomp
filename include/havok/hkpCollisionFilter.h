// hkpCollisionFilter and its four filter interfaces
// (Physics/Collide/Filter/hkpCollisionFilter.h, hkpCollidableCollidableFilter.h,
// hkpShapeCollectionFilter.h, hkpRayShapeCollectionFilter.h,
// hkpRayCollidableFilter.h).
//
// hkpCollisionFilter (0x30 bytes), from the RTTI base list:
//   +0x0  hkReferencedObject
//   +0x8  hkpCollidableCollidableFilter   vtable: ~ , isCollisionEnabled
//   +0xC  hkpShapeCollectionFilter        vtable: 3 functions, then ~ (slot 3)
//   +0x10 hkpRayShapeCollectionFilter     vtable: isCollisionEnabled, ~
//   +0x14 hkpRayCollidableFilter          vtable: ~ , isCollisionEnabled
//   +0x18 hkUint32 m_prepad[2], +0x20 hkUint32 m_type, +0x24 hkUint32 m_postpad[3]
// A destructor of a subclass ends with the interfaces' inline destructors,
// storing their vtables at +0x14, +0x10, +0xC, +0x8, then hkBaseObject's at +0.
// hkpCollisionFilter adds no virtual function of its own: the primary vtables of hkpCollisionFilter,
// hkpNullCollisionFilter, hkpCollisionFilterList, hkpPairCollisionFilter and the others
// (??_7<Class>@@6BhkReferencedObject@@@) have hkReferencedObject's three slots and are followed directly
// by the next vtable's RTTI locator. (Havok's header has a virtual init(hkpWorld *) there; the game has
// not.) Only hkpGroupFilter has a fourth slot, 82D7E470 (a folded function that returns 0), which is
// that class's own and is not identified.
// Subclass vtables are named VFTABLE_for_<Class>@@_<locator> in symbols.txt;
// the compiler's names are ??_7<Class>@@6BhkReferencedObject@@@ (+0),
// ??_7<Class>@@6BhkpCollidableCollidableFilter@@@ (+0x8) and so on (check with
// syms.py; rtti.py gives each VFTABLE_for_ name's offset).
//
// The interfaces have no hkBaseObject base: their own deleting destructors
// (fn_8258F598 and neighbours) free through the global operator delete,
// fn_8265CA20, which they reach through a class operator delete here.
// Their pure virtual functions are declared as plain virtuals so that units
// can construct subclasses; the generated code is the same.
#ifndef HAVOK_HKPCOLLISIONFILTER_H
#define HAVOK_HKPCOLLISIONFILTER_H
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
    hkpCollisionFilter(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
    // The interfaces' overloads, declared again here as in Havok's header (pure there). A call through
    // an hkpCollisionFilter pointer then adjusts this to the interface without a null check, as
    // hkpShapeCollectionAgent's constructor does (82D6C808).
    virtual hkBool isCollisionEnabled(const hkpCollidable &a, const hkpCollidable &b) const;
    virtual hkBool isCollisionEnabled(const hkpCollisionInput &input, const hkpCdBody &a, const hkpCdBody &b,
                                      const hkpShapeContainer &bContainer, hkpShapeKey bKey) const;
    virtual hkBool isCollisionEnabled(const hkpCollisionInput &input, const hkpCdBody &collectionBodyA,
                                      const hkpCdBody &collectionBodyB, const hkpShapeContainer &containerShapeA,
                                      const hkpShapeContainer &containerShapeB, hkpShapeKey keyA,
                                      hkpShapeKey keyB) const;
    virtual hkBool isCollisionEnabled(const hkpShapeRayCastInput &aInput, const hkpShapeContainer &bContainer,
                                      hkpShapeKey bKey) const;
    virtual hkBool isCollisionEnabled(const hkpWorldRayCastInput &a, const hkpCollidable &collidableB) const;

    hkUint32 m_prepad[2];   // +0x18
    hkUint32 m_type;        // +0x20 hkEnum<hkpFilterType, hkUint32>
    hkUint32 m_postpad[3];  // +0x24
};

#endif
