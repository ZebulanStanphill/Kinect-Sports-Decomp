// hkpRejectChassisListener::~hkpRejectChassisListener (hkpRejectChassisListener.cpp): an empty destructor; its own
// vtable stores are dead, so only the bases' remain (hkpPhantomOverlapListener at +0x8, hkBaseObject at +0x0).
// Called by the deleting destructor (fn_82DF9148) and by the wheel-collide destructors that hold one as a member.
#include "havok/hkBase.h"

class hkpCollidable;
class hkpCollidableAddedEvent;
class hkpCollidableRemovedEvent;

extern "C" void fn_8265CA20(void *p);   // global operator delete

// Interface with no base (RTTI); vtable: the two callbacks (pure), then the deleting destructor (fn_82D8D9F0).
class hkpPhantomOverlapListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual void collidableAddedCallback(const hkpCollidableAddedEvent &event) = 0;
    virtual void collidableRemovedCallback(const hkpCollidableRemovedEvent &event) = 0;
    virtual ~hkpPhantomOverlapListener() {}
};

// Physics/Vehicle/WheelCollide/RejectRayChassisListener/hkpRejectChassisListener.h.
// RTTI: hkReferencedObject at +0x0, hkpPhantomOverlapListener at +0x8.
class hkpRejectChassisListener : public hkReferencedObject, public hkpPhantomOverlapListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    hkpRejectChassisListener();
    hkpRejectChassisListener(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
    virtual ~hkpRejectChassisListener();
    virtual void collidableAddedCallback(const hkpCollidableAddedEvent &event);
    virtual void collidableRemovedCallback(const hkpCollidableRemovedEvent &event);

    const hkpCollidable *m_chassis;   // +0xC
};

hkpRejectChassisListener::~hkpRejectChassisListener()
{
}
