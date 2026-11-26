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

// What getType returns: 0 for hkpAabbPhantom (82D8CD40), 1 for hkpSimpleShapePhantom (82DA2568), 2 for
// hkpCachingShapePhantom (82D9BAA0). 82D94138 switches on it.
enum hkpPhantomType {
    HK_PHANTOM_AABB = 0,
    HK_PHANTOM_SIMPLE_SHAPE = 1,
    HK_PHANTOM_CACHING_SHAPE = 2
};

// hkpPhantom (Physics/Dynamics/Phantom/hkpPhantom.h).
// Its vtable (??_7hkpPhantom@@6B@, 14 slots) has nine slots after hkpWorldObject's; seven are pure, the
// eighth is the empty function and the last is 82D9A670. The names are Havok's, in its order; checked
// against the game are getType, calcAabb (82D8CD48 copies an hkpAabbPhantom's m_aabb),
// removeOverlappingCollidable (82D9BEE0) and clone (82D9C408).
class hkpPhantom : public hkpWorldObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpPhantom(const hkpShape *shape) : hkpWorldObject(shape, BROAD_PHASE_PHANTOM) { m_collidable.setOwner(this); }
    // The listener arrays are not serialised; they start empty.
    hkpPhantom(hkFinishLoadedObjectFlag flag) : hkpWorldObject(flag) {}
    virtual ~hkpPhantom();
    virtual hkpPhantomType getType() const;                                         // +0x14
    virtual void calcAabb(hkAabb &aabb);                                            // +0x18
    virtual void addOverlappingCollidable(hkpCollidable *collidable);               // +0x1C
    virtual hkBool isOverlappingCollidableAdded(const hkpCollidable *collidable);   // +0x20
    virtual void removeOverlappingCollidable(hkpCollidable *collidable);            // +0x24
    virtual void ensureDeterministicOrder();                                        // +0x28
    virtual hkpPhantom *clone() const;                                              // +0x2C
    virtual void updateShapeCollectionFilter();                                     // +0x30
    virtual void deallocateInternalArrays();                                        // +0x34
    void firePhantomDeleted() { fn_82D99FE0(this); }
    void updateBroadPhase(const hkAabb &aabb) { fn_82D9A730(this, aabb); }
    // Out of line (82D9A5F8 appends to m_overlapListeners, 82D9A420 removes with removeAtAndCopy); the
    // wheel-collide classes call them with the phantom and their reject-chassis listener (82E01650's
    // destructor, 82E018B0's clone).
    void addPhantomOverlapListener(hkpPhantomOverlapListener *listener);
    void removePhantomOverlapListener(hkpPhantomOverlapListener *listener);

    hkArray<hkpPhantomOverlapListener *> m_overlapListeners;   // +0x8C
    hkArray<hkpPhantomListener *> m_phantomListeners;          // +0x98
};

#endif
