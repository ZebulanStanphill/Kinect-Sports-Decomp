// hkpCollisionCallbackUtil::worldDeletedCallback(hkpWorld *) (hkpCollisionCallbackUtil.cpp), reached through the
// hkpWorldDeletionListener vtable (this = the +0xC listener). Removes the callback map from the world
// (fn_82DC82C8, the call fn_82DB3FD0 makes too), unregisters both listeners and releases the utility.
#include "havok/hkBase.h"

extern "C" void fn_8265CA20(void *p);   // global operator delete

class hkpWorld;
class hkpConstraintInstance;
struct hkpConstraintBrokenEvent;
struct hkpConstraintRepairedEvent;

class hkpConstraintListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpConstraintListener() {}
    virtual void constraintAddedCallback(hkpConstraintInstance *constraint) {}
    virtual void constraintRemovedCallback(hkpConstraintInstance *constraint) {}
    virtual void constraintDeletedCallback(hkpConstraintInstance *constraint) {}
    virtual void constraintBreakingCallback(const hkpConstraintBrokenEvent &event) {}
    virtual void constraintRepairedCallback(const hkpConstraintRepairedEvent &event) {}
};

class hkpWorldDeletionListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpWorldDeletionListener() {}
    virtual void worldDeletedCallback(hkpWorld *world) = 0;
    virtual void worldRemovedCallback(hkpWorld *world) {}
};

extern "C" {
void fn_82D813C0(hkpWorld *world, hkpConstraintListener *l);      // hkpWorld::removeConstraintListener
void fn_82D81690(hkpWorld *world, hkpWorldDeletionListener *l);   // hkpWorld::removeWorldDeletionListener
}

class hkpWorld {
public:
    void removeConstraintListener(hkpConstraintListener *l) { fn_82D813C0(this, l); }
    void removeWorldDeletionListener(hkpWorldDeletionListener *l) { fn_82D81690(this, l); }
};

class CallbackMap;
extern "C" void fn_82DC82C8(CallbackMap *map, hkpWorld *world);

// The callback map at +0x14 (constructed by fn_82DC8A30); only its world removal is used here.
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
