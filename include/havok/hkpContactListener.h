// hkpContactListener (Physics/Dynamics/Collide/ContactListener/hkpContactListener.h): the contact and
// collision callbacks an entity or the world sends. It has no hkBaseObject base, so its deleting destructor
// frees through the global operator delete, fn_8265CA20. Its vtable (??_7hkpContactListener@@6B@, 7 slots)
// has the deleting destructor in the fourth slot; the six callbacks are empty and folded into fn_82BA02A8.
// The order is the game's (the units that override them); the names and parameters follow Havok's header.
#ifndef HAVOK_HKPCONTACTLISTENER_H
#define HAVOK_HKPCONTACTLISTENER_H

#include "havok/hkBase.h"

class hkpContactPointAddedEvent;
class hkpContactPointRemovedEvent;
class hkpContactProcessEvent;
struct hkpCollisionEvent;
struct hkpContactPointEvent;

extern "C" void fn_8265CA20(void *p);   // global operator delete

class hkpContactListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual void contactPointCallback(const hkpContactPointEvent &event) {}             // +0x0
    virtual void collisionAddedCallback(const hkpCollisionEvent &event) {}              // +0x4
    virtual void collisionRemovedCallback(const hkpCollisionEvent &event) {}            // +0x8
    virtual ~hkpContactListener() {}                                                    // +0xC
    virtual void contactPointAddedCallback(hkpContactPointAddedEvent &event) {}         // +0x10
    virtual void contactPointRemovedCallback(hkpContactPointRemovedEvent &event) {}     // +0x14
    virtual void contactProcessCallback(hkpContactProcessEvent &event) {}               // +0x18
};

#endif
