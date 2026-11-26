// hkpNullBroadPhaseListener (Physics/Dynamics/World/BroadPhaseBorder/hkpNullBroadPhaseListener.h? the path is not
// known), 0xC bytes: the listener that ignores every broad-phase pair; hkpTypedBroadPhaseDispatcher embeds one at
// +0x100 and points its unused slots at it (83088410). The RTTI gives hkReferencedObject, then hkpBroadPhaseListener
// at +0x8. Its secondary vtable (??_7hkpNullBroadPhaseListener@@6BhkpBroadPhaseListener@@@) has the deleting
// destructor thunk (82D89770), addCollisionPair (83097840) and removeCollisionPair (83097848); the destructor is
// implicit (its deleting destructor is folded with hkpPhantomBroadPhaseListener's, 82D89858).
#ifndef HAVOK_HKPNULLBROADPHASELISTENER_H
#define HAVOK_HKPNULLBROADPHASELISTENER_H

#include "havok/hkBase.h"
#include "havok/hkpBroadPhaseListener.h"

class hkpNullBroadPhaseListener : public hkReferencedObject, public hkpBroadPhaseListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    virtual void addCollisionPair(hkpTypedBroadPhaseHandlePair &pair);
    virtual void removeCollisionPair(hkpTypedBroadPhaseHandlePair &pair);
};

#endif
