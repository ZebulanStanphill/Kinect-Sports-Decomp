// hkpPhantomOverlapListener (Physics/Dynamics/Phantom/hkpPhantomOverlapListener.h):
// told when a collidable starts or stops overlapping a phantom. It has no
// hkBaseObject base, so its deleting destructor frees through the global
// operator delete, fn_8265CA20.
#ifndef HAVOK_HKPPHANTOMOVERLAPLISTENER_H
#define HAVOK_HKPPHANTOMOVERLAPLISTENER_H

#include "havok/hkBase.h"

class hkpCollidableAddedEvent;
class hkpCollidableRemovedEvent;

extern "C" void fn_8265CA20(void *p);   // global operator delete

class hkpPhantomOverlapListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual void collidableAddedCallback(const hkpCollidableAddedEvent &event) = 0;
    virtual void collidableRemovedCallback(const hkpCollidableRemovedEvent &event) = 0;
    virtual ~hkpPhantomOverlapListener() {}
};

#endif
