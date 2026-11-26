// hkpCollisionCallbackUtil::requireCollisionCallbackUtil(hkpWorld *) (hkpCollisionCallbackUtil.cpp):
// bumps the use count of the world's utility or creates it and registers its two listeners
// and its callback map with the world.
#include "havok/hkBase.h"
#include "havok/hkpConstraintListener.h"
#include "havok/hkpWorldDeletionListener.h"
#include "havok/hkpWorld.h"

class CallbackMap;

extern "C" {
void fn_82DC82A8(CallbackMap *map, hkpWorld *world);
}

// The callback map at +0x14 (constructed by fn_82DC8A30; 0x38 bytes).
class CallbackMap {
public:
    void addToWorld(hkpWorld *world) { fn_82DC82A8(this, world); }
    int data[14];
};

class hkpCollisionCallbackUtil : public hkReferencedObject, public hkpConstraintListener, public hkpWorldDeletionListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(0);
    hkpCollisionCallbackUtil();
    virtual void worldDeletedCallback(hkpWorld *world);

    int m_count;          // +0x10
    CallbackMap m_map;    // +0x14
};

extern "C" void fn_82DB4298(hkpWorld *world)
{
    hkpCollisionCallbackUtil *util = world->m_collisionCallbackUtil;
    if (util != 0) {
        util->m_count++;
        return;
    }
    util = new hkpCollisionCallbackUtil();
    world->m_collisionCallbackUtil = util;
    world->addWorldDeletionListener(util);
    world->addConstraintListener(util);
    util->m_map.addToWorld(world);
}
