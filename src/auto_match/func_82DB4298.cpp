// hkpCollisionCallbackUtil::requireCollisionCallbackUtil(hkpWorld *) (hkpCollisionCallbackUtil.cpp):
// bumps the use count of the world's utility or creates it and registers its two listeners
// and its callback map with the world.
#include "havok/hkBase.h"

extern "C" void fn_8265CA20(void *p);   // global operator delete

class hkpWorld;

class hkpConstraintListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpConstraintListener() {}
};

class hkpWorldDeletionListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpWorldDeletionListener() {}
};

class CallbackMap;

extern "C" {
void fn_82D841E0(hkpWorld *world, hkpWorldDeletionListener *l);   // hkpWorld::addWorldDeletionListener
void fn_82D83D30(hkpWorld *world, hkpConstraintListener *l);      // hkpWorld::addConstraintListener
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

    int m_count;          // +0x10
    CallbackMap m_map;    // +0x14
};

class hkpWorld {
public:
    void addWorldDeletionListener(hkpWorldDeletionListener *l) { fn_82D841E0(this, l); }
    void addConstraintListener(hkpConstraintListener *l) { fn_82D83D30(this, l); }

    char pad[0x1c0];
    hkpCollisionCallbackUtil *m_collisionCallbackUtil;   // +0x1c0
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
