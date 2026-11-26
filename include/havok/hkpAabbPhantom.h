#ifndef HAVOK_HKPAABBPHANTOM_H
#define HAVOK_HKPAABBPHANTOM_H

#include "havok/hkpPhantom.h"
#include "havok/hkAabb.h"

class hkpAabbPhantom;
extern "C" void fn_82D7E1E0(hkpAabbPhantom *self);   // reserves m_overlappingCollidables

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

    hkAabb m_aabb;                                       // +0xB0
    hkArray<hkpCollidable *> m_overlappingCollidables;   // +0xD0
    hkBool m_orderDirty;                                 // +0xDC
};

#endif
