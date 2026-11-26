#ifndef HAVOK_HKPPHANTOM_H
#define HAVOK_HKPPHANTOM_H

#include "havok/hkpWorldObject.h"

class hkpPhantomOverlapListener;
class hkpPhantomListener;
class hkpPhantom;
class hkAabb;

// Out of line in hkpPhantom.cpp: fires phantomDeletedCallback on the listeners, last to first.
extern "C" void fn_82D99FE0(hkpPhantom *self);
extern "C" void fn_82D9A730(hkpPhantom *self, const hkAabb &aabb);   // hkpPhantom::updateBroadPhase

// hkpPhantom (Physics/Dynamics/Phantom/hkpPhantom.h).
class hkpPhantom : public hkpWorldObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpPhantom(const hkpShape *shape) : hkpWorldObject(shape, BROAD_PHASE_PHANTOM) { m_collidable.setOwner(this); }
    virtual ~hkpPhantom();
    void firePhantomDeleted() { fn_82D99FE0(this); }
    void updateBroadPhase(const hkAabb &aabb) { fn_82D9A730(this, aabb); }

    hkArray<hkpPhantomOverlapListener *> m_overlapListeners;   // +0x8C
    hkArray<hkpPhantomListener *> m_phantomListeners;          // +0x98
};

#endif
