#ifndef HAVOK_HKPSIMPLESHAPEPHANTOM_H
#define HAVOK_HKPSIMPLESHAPEPHANTOM_H

#include "havok/hkpShapePhantom.h"

// hkpSimpleShapePhantom (Physics/Dynamics/Phantom/hkpSimpleShapePhantom.h).
class hkpSimpleShapePhantom : public hkpShapePhantom {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpSimpleShapePhantom(const hkpShape *shape, const hkTransform &transform, hkUint32 collisionFilterInfo = 0);
    virtual ~hkpSimpleShapePhantom();

    struct CollisionDetail {
        hkpCollidable *m_collidable;
    };
    hkArray<CollisionDetail> m_collisionDetails;   // +0x160
    hkBool m_orderDirty;                           // +0x16C
};

#endif
