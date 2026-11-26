// hkpCollisionListener (Physics/Dynamics/Collide/Deprecated/hkpCollisionListener.h): the older listener
// interface, an hkpContactListener whose contactPointCallback (fn_82D95350, out of line) passes the new
// events on to the old callbacks, with one more empty callback, contactPointConfirmedCallback (slot 8). Its
// vtable (??_7hkpCollisionListener@@6B@) shares the deleting destructor of hkpContactListener (folded).
// The names follow Havok's header.
#ifndef HAVOK_HKPCOLLISIONLISTENER_H
#define HAVOK_HKPCOLLISIONLISTENER_H

#include "havok/hkpContactListener.h"

class hkpContactPointConfirmedEvent;

class hkpCollisionListener : public hkpContactListener {
public:
    virtual void contactPointCallback(const hkpContactPointEvent &event);
    virtual ~hkpCollisionListener() {}
    virtual void contactPointConfirmedCallback(hkpContactPointConfirmedEvent &event) {}   // +0x1C
};

#endif
