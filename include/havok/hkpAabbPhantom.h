#ifndef HAVOK_HKPAABBPHANTOM_H
#define HAVOK_HKPAABBPHANTOM_H

#include "havok/hkpPhantom.h"
#include "havok/hkAabb.h"

class hkpAabbPhantom;
class hkpCdPointCollector;
struct hkpLinearCastInput;
extern "C" void fn_82D7E1E0(hkpAabbPhantom *self);   // reserves m_overlappingCollidables (82D8D6C0, 82D7E3E8)

// hkpAabbPhantom (Physics/Dynamics/Phantom/hkpAabbPhantom.h).
class hkpAabbPhantom : public hkpPhantom {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpAabbPhantom(const hkAabb &aabb, hkUint32 collisionFilterInfo = 0);   // out of line (82D8D6C0)
    hkpAabbPhantom(hkFinishLoadedObjectFlag flag);   // out of line (82D7E3E8)
    virtual ~hkpAabbPhantom();
    // ??_7hkpAabbPhantom@@6B@: every slot but setShape and updateShapeCollectionFilter is its own.
    virtual hkMotionState *getMotionState();
    virtual hkpPhantomType getType() const;
    virtual void calcAabb(hkAabb &aabb);
    virtual void addOverlappingCollidable(hkpCollidable *collidable);
    virtual hkBool isOverlappingCollidableAdded(const hkpCollidable *collidable);
    virtual void removeOverlappingCollidable(hkpCollidable *collidable);
    virtual void ensureDeterministicOrder();
    virtual hkpPhantom *clone() const;
    virtual void deallocateInternalArrays();
    // Out of line (82D8CD68): copies the box and updates the broad phase with it (82D94138 calls it for an
    // AABB phantom).
    void setAabb(const hkAabb &newAabb);
    // Out of line (82D8D1D8, timer "hkpAabbPhantom::linearCast"; no unit yet): the wheel cast, 82E008F8, calls
    // it on the wheel's phantom. The const is Havok's.
    void linearCast(const hkpCollidable *collA, const hkpLinearCastInput &input, hkpCdPointCollector &castCollector,
                    hkpCdPointCollector *startCollector) const;

    hkAabb m_aabb;                                       // +0xB0
    hkArray<hkpCollidable *> m_overlappingCollidables;   // +0xD0
    hkBool m_orderDirty;                                 // +0xDC
};

#endif
