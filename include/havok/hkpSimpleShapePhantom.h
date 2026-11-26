#ifndef HAVOK_HKPSIMPLESHAPEPHANTOM_H
#define HAVOK_HKPSIMPLESHAPEPHANTOM_H

#include "havok/hkpShapePhantom.h"

// hkpSimpleShapePhantom (Physics/Dynamics/Phantom/hkpSimpleShapePhantom.h).
class hkpSimpleShapePhantom : public hkpShapePhantom {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpSimpleShapePhantom(const hkpShape *shape, const hkTransform &transform, hkUint32 collisionFilterInfo = 0);
    hkpSimpleShapePhantom(hkFinishLoadedObjectFlag flag);   // out of line (82D7FC10)
    virtual ~hkpSimpleShapePhantom();
    // ??_7hkpSimpleShapePhantom@@6B@ fills every slot hkpShapePhantom leaves pure.
    virtual hkpPhantomType getType() const;
    virtual void addOverlappingCollidable(hkpCollidable *collidable);
    virtual hkBool isOverlappingCollidableAdded(const hkpCollidable *collidable);
    virtual void removeOverlappingCollidable(hkpCollidable *collidable);
    virtual void ensureDeterministicOrder();
    virtual hkpPhantom *clone() const;
    virtual void deallocateInternalArrays();
    virtual void setPositionAndLinearCast(const hkVector4 &position, const hkpLinearCastInput &input,
                                          hkpCdPointCollector &castCollector, hkpCdPointCollector *startCollector);
    virtual void setTransformAndLinearCast(const hkTransform &transform, const hkpLinearCastInput &input,
                                           hkpCdPointCollector &castCollector, hkpCdPointCollector *startCollector);
    virtual void getClosestPoints(hkpCdPointCollector &collector, const hkpCollisionInput *input = HK_NULL);
    virtual void getPenetrations(hkpCdBodyPairCollector &collector, const hkpCollisionInput *input = HK_NULL);

    struct CollisionDetail {
        hkpCollidable *m_collidable;
    };
    hkArray<CollisionDetail> m_collisionDetails;   // +0x160
    hkBool m_orderDirty;                           // +0x16C
};

#endif
