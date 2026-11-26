#ifndef HAVOK_HKPAABBPHANTOM_H
#define HAVOK_HKPAABBPHANTOM_H

#include "havok/hkpPhantom.h"
#include "havok/hkAabb.h"

// hkpAabbPhantom (Physics/Dynamics/Phantom/hkpAabbPhantom.h).
class hkpAabbPhantom : public hkpPhantom {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    virtual ~hkpAabbPhantom();

    hkAabb m_aabb;                                       // +0xB0
    hkArray<hkpCollidable *> m_overlappingCollidables;   // +0xD0
    hkBool m_orderDirty;                                 // +0xDC
};

#endif
