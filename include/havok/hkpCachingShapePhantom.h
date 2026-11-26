#ifndef HAVOK_HKPCACHINGSHAPEPHANTOM_H
#define HAVOK_HKPCACHINGSHAPEPHANTOM_H

#include "havok/hkpShapePhantom.h"

// hkpCachingShapePhantom (Physics/Dynamics/Phantom/hkpCachingShapePhantom.h).
class hkpCollisionAgent;

class hkpCachingShapePhantom : public hkpShapePhantom {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpCachingShapePhantom(const hkpShape *shape, const hkTransform &transform, hkUint32 collisionFilterInfo = 0);
    hkpCachingShapePhantom(hkFinishLoadedObjectFlag flag);   // out of line (82D7E738)
    virtual ~hkpCachingShapePhantom();
    // ??_7hkpCachingShapePhantom@@6B@ fills every slot hkpShapePhantom leaves pure, and
    // updateShapeCollectionFilter (82D9BC00).
    virtual hkpPhantomType getType() const;
    virtual void addOverlappingCollidable(hkpCollidable *collidable);
    virtual hkBool isOverlappingCollidableAdded(const hkpCollidable *collidable);
    virtual void removeOverlappingCollidable(hkpCollidable *collidable);
    virtual void ensureDeterministicOrder();
    virtual hkpPhantom *clone() const;
    virtual void updateShapeCollectionFilter();
    virtual void deallocateInternalArrays();
    virtual void setPositionAndLinearCast(const hkVector4 &position, const hkpLinearCastInput &input,
                                          hkpCdPointCollector &castCollector, hkpCdPointCollector *startCollector);
    virtual void setTransformAndLinearCast(const hkTransform &transform, const hkpLinearCastInput &input,
                                           hkpCdPointCollector &castCollector, hkpCdPointCollector *startCollector);
    virtual void getClosestPoints(hkpCdPointCollector &collector, const hkpCollisionInput *input = HK_NULL);
    virtual void getPenetrations(hkpCdBodyPairCollector &collector, const hkpCollisionInput *input = HK_NULL);

    struct CollisionDetail {
        hkpCollisionAgent *m_agent;
        hkpCollidable *m_collidable;
    };
    hkArray<CollisionDetail> m_collisionDetails;   // +0x160
    hkBool m_orderDirty;                           // +0x16C
};

#endif
