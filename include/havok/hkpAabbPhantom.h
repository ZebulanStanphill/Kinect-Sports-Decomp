#ifndef HAVOK_HKPAABBPHANTOM_H
#define HAVOK_HKPAABBPHANTOM_H

#include "havok/hkpPhantom.h"
#include "havok/hkAabb.h"

class hkpAabbPhantom;
class hkpCdPointCollector;
struct hkpLinearCastInput;
extern "C" void fn_82D7E1E0(hkpAabbPhantom *self);   // reserves m_overlappingCollidables
// hkpAabbPhantom::linearCast, out of line (the wheel cast, 82E008F8, calls it on the wheel's phantom).
extern "C" void fn_82D8D1D8(const hkpAabbPhantom *self, const hkpCollidable *collA, const hkpLinearCastInput &input,
                            hkpCdPointCollector &castCollector, hkpCdPointCollector *startCollector);
// hkpAabbPhantom::setAabb, out of line (82D94138 calls it for an AABB phantom).
extern "C" void fn_82D8CD68(hkpAabbPhantom *self, const hkAabb &newAabb);

// hkpAabbPhantom (Physics/Dynamics/Phantom/hkpAabbPhantom.h).
class hkpAabbPhantom : public hkpPhantom {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    HK_FORCE_INLINE hkpAabbPhantom(const hkAabb &aabb, hkUint32 collisionFilterInfo = 0)
        : hkpPhantom(HK_NULL), m_orderDirty(false)
    {
        m_aabb = aabb;
        m_collidable.setCollisionFilterInfo(collisionFilterInfo);
        fn_82D7E1E0(this);
    }
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
    HK_FORCE_INLINE void setAabb(const hkAabb &newAabb) { fn_82D8CD68(this, newAabb); }
    HK_FORCE_INLINE void linearCast(const hkpCollidable *collA, const hkpLinearCastInput &input,
                                    hkpCdPointCollector &castCollector, hkpCdPointCollector *startCollector) const
    {
        fn_82D8D1D8(this, collA, input, castCollector, startCollector);
    }

    hkAabb m_aabb;                                       // +0xB0
    hkArray<hkpCollidable *> m_overlappingCollidables;   // +0xD0
    hkBool m_orderDirty;                                 // +0xDC
};

#endif
