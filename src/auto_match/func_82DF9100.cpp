// finishLoadedObjecthkpRejectChassisListener: the finish function in hkpRejectChassisListener's hkTypeInfo
// (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok).
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

void HK_CALL finishLoadedObjecthkpRejectChassisListener(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpRejectChassisListener(f);
}
