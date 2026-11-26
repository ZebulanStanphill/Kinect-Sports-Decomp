// hkpBroadPhaseListener (Physics/Collide/Dispatch/BroadPhase/hkpBroadPhaseListener.h): told about
// the pairs of broad-phase handles that start or stop overlapping. It has no hkBaseObject base, so its
// deleting destructor frees through the global operator delete, fn_8265CA20. Its vtable
// (??_7hkpBroadPhaseListener@@6B@) is the deleting destructor and two pure functions; their names follow
// Havok's header.
#ifndef HAVOK_HKPBROADPHASELISTENER_H
#define HAVOK_HKPBROADPHASELISTENER_H

#include "havok/hkBase.h"

class hkpTypedBroadPhaseHandlePair;

extern "C" void fn_8265CA20(void *p);   // global operator delete

class hkpBroadPhaseListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpBroadPhaseListener() {}
    virtual void addCollisionPair(hkpTypedBroadPhaseHandlePair &pair) = 0;      // +0x4
    virtual void removeCollisionPair(hkpTypedBroadPhaseHandlePair &pair) = 0;   // +0x8
};

#endif
