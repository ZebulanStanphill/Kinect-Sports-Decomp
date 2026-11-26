#ifndef HAVOK_HKPCACHINGSHAPEPHANTOM_H
#define HAVOK_HKPCACHINGSHAPEPHANTOM_H

#include "havok/hkpShapePhantom.h"

// hkpCachingShapePhantom (Physics/Dynamics/Phantom/hkpCachingShapePhantom.h).
class hkpCollisionAgent;

class hkpCachingShapePhantom : public hkpShapePhantom {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpCachingShapePhantom(const hkpShape *shape, const hkTransform &transform, hkUint32 collisionFilterInfo = 0);
    virtual ~hkpCachingShapePhantom();

    struct CollisionDetail {
        hkpCollisionAgent *m_agent;
        hkpCollidable *m_collidable;
    };
    hkArray<CollisionDetail> m_collisionDetails;   // +0x160
    hkBool m_orderDirty;                           // +0x16C
};

#endif
