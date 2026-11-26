// hkpPhantomBroadPhaseListener (Physics/Dynamics/World/Util/BroadPhase/hkpPhantomBroadPhaseListener.h? the path is
// not known), 0xC bytes: the world's listener for the broad-phase pairs that involve a phantom (hkpWorld holds one
// at +0x68). The RTTI gives hkReferencedObject, then hkpBroadPhaseListener at +0x8. Its secondary vtable has the
// deleting destructor thunk (82D89770), addCollisionPair (82DA5F98) and removeCollisionPair (82DA6050). The
// constructor takes the world and stores nothing (82D89858's vtable emitter); the destructor is implicit, its
// deleting form (82D89858) is shared with hkpNullBroadPhaseListener and the other listeners of the same shape.
#ifndef HAVOK_HKPPHANTOMBROADPHASELISTENER_H
#define HAVOK_HKPPHANTOMBROADPHASELISTENER_H

#include "havok/hkBase.h"
#include "havok/hkpBroadPhaseListener.h"

class hkpWorld;

class hkpPhantomBroadPhaseListener : public hkReferencedObject, public hkpBroadPhaseListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpPhantomBroadPhaseListener(hkpWorld *world) {}
    virtual void addCollisionPair(hkpTypedBroadPhaseHandlePair &pair);
    virtual void removeCollisionPair(hkpTypedBroadPhaseHandlePair &pair);
};

#endif
