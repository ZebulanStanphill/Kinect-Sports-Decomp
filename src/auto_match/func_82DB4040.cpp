// hkpCollisionCallbackUtil::worldDeletedCallback(hkpWorld *) (hkpCollisionCallbackUtil.cpp), reached through the
// hkpWorldDeletionListener vtable (this = the +0xC listener). Removes the callback map from the world
// (fn_82DC82C8, the call fn_82DB3FD0 makes too), unregisters both listeners and releases the utility.
#include "havok/hkBase.h"
#include "havok/hkpConstraintListener.h"
#include "havok/hkpWorldDeletionListener.h"
#include "havok/hkpWorld.h"

class CallbackMap;
extern "C" void fn_82DC82C8(CallbackMap *map, hkpWorld *world);

// The callback map at +0x14 (constructed by 82DC8A30); only its world removal is used here.
class CallbackMap {
public:
    void removeFromWorld(hkpWorld *world) { fn_82DC82C8(this, world); }
    int data[4];
};

class hkpCollisionCallbackUtil : public hkReferencedObject, public hkpConstraintListener, public hkpWorldDeletionListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(0);
    virtual void worldDeletedCallback(hkpWorld *world);

    int m_count;          // +0x10
    CallbackMap m_map;    // +0x14
};

void hkpCollisionCallbackUtil::worldDeletedCallback(hkpWorld *world)
{
    m_map.removeFromWorld(world);
    world->removeConstraintListener(this);
    world->removeWorldDeletionListener(this);
    removeReference();
}
