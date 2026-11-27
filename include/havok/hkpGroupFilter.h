// hkpGroupFilter (Physics/Collide/Filter/Group/hkpGroupFilter.h, the folder of its class unit), 0x100 bytes:
// the filter that compares collision layers and system groups. The layout comes from the constructor
// (82D4B5B0: m_type = HK_FILTER_GROUP, every bit of the 32 lookup words set, then the next free system group
// cleared) and from the filter function 82D4B3C0, which reads m_collisionLookupTable[layerA] at +0x34. The
// member names follow Havok's header. The class ends with m_pad256 (the game's hkClass member strings name
// "pad256" after "collisionLookupTable"; getVtablehkpGroupFilter builds a 0x100-byte object on the stack).
#ifndef HAVOK_HKPGROUPFILTER_H
#define HAVOK_HKPGROUPFILTER_H

#include "havok/hkpCollisionFilter.h"
#include "havok/hkVector4.h"

class hkpGroupFilter;

extern "C" {
// Out of line, kept under its fn_ name (a C unit): two collision filter infos (layer in the low 5 bits,
// system group in the high 16, subsystem ids at bits 5 and 10) collide unless they share a system group and
// one subsystem does not collide with the other, else as the layer table says.
hkBool fn_82D4B3C0(const hkpGroupFilter *self, hkUint32 infoA, hkUint32 infoB);
}

// The vtables (??_7hkpGroupFilter@@6B...@) override the five isCollisionEnabled functions (82D4B688 for
// two collidables, 82D4B6C0 and 82D4B7C0 for shape collections, 82D4B788 for a ray and a collidable). The
// primary slot 0 is the deleting destructor 82D3A580, the others reach it through adjustor thunks.
class hkpGroupFilter : public hkpCollisionFilter {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpGroupFilter();
    // Out of line (82D3A4E0).
    hkpGroupFilter(hkFinishLoadedObjectFlag flag);
    virtual ~hkpGroupFilter();
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

    hkBool isCollisionEnabled(hkUint32 infoA, hkUint32 infoB) const { return fn_82D4B3C0(this, infoA, infoB); }

    int m_nextFreeSystemGroup;              // +0x30
    hkUint32 m_collisionLookupTable[32];    // +0x34
    hkVector4 m_pad256[4];                  // +0xC0
};

#endif
