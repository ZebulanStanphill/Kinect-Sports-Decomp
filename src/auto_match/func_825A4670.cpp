// Scalar deleting destructor of a game class derived from hkReferencedObject
// and hkpCollisionListener (at +0x8; its vtable at 0x821C7FEC overrides
// listener slot 0 with fn_82D95350, hkpCollisionListener's contactPointCallback),
// whose own vtables are not named (it is reached through the adjustor thunk
// fn_825A4BD0). The implicit destructor runs hkpCollisionListener's
// user-written (empty) destructor, whose dead vtable store is removed but
// moves `mr r31, r3` below the first store; then hkpContactListener's
// (vtable at +0x8) and hkBaseObject's (vtable at +0), then the class
// allocator.
#include "havok/hkBase.h"

extern "C" void fn_8265CA20(void *p);   // global operator delete

class hkpContactPointAddedEvent;
class hkpContactPointConfirmedEvent;
class hkpContactPointRemovedEvent;
class hkpContactProcessEvent;
class hkpContactPointEvent;

class hkpContactListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual void contactPointAddedCallback(hkpContactPointAddedEvent &event) {}
    virtual void contactPointConfirmedCallback(hkpContactPointConfirmedEvent &event) {}
    virtual void contactPointRemovedCallback(hkpContactPointRemovedEvent &event) {}
    virtual ~hkpContactListener() {}
    virtual void contactProcessCallback(hkpContactProcessEvent &event) {}
};

class hkpCollisionListener : public hkpContactListener {
public:
    virtual void contactPointCallback(const hkpContactPointEvent &event);
    virtual ~hkpCollisionListener() {}
};

class GameContactHandler : public hkReferencedObject, public hkpCollisionListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
};

extern "C" GameContactHandler *fn_825A4670(GameContactHandler *self, unsigned flags)
{
    self->GameContactHandler::~GameContactHandler();
    if (flags & 1)
        GameContactHandler::operator delete(self);
    return self;
}
