// hkpAabbTreeWorldManager (Physics/Collide/BroadPhase/... hkpAabbTreeWorldManager.h): the tree world manager
// that keeps the world's collidables in AABB trees. RTTI and the adjustor thunks of the deleting destructor
// (82DB30B8 / 82DB30C0 / 82DB30C8 / 82DB30D0): hkpTreeWorldManager at +0x0, hkpEntityListener at +0x14,
// hkpPhantomListener at +0x18, hkpIslandActivationListener at +0x1C, hkpWorldPostSimulationListener at +0x20.
// The constructor (??0hkpAabbTreeWorldManager@@QAA@PAVhkpWorld@@HM@Z, 82DB16D0) and the destructor
// (??1hkpAabbTreeWorldManager@@UAA@XZ, 82DB1908) are out of line.
//
// Vtables (the callbacks' names are Havok's listener interfaces'):
//  - hkpEntityListener: the thunk, entityAddedCallback (82DB1AF0), two adjustor thunks to 82DB0B68 for
//    entityRemovedCallback and entityDeletedCallback, hkpEntityListener's entityShapeSetCallback (fn_82DB2F50),
//    entitySetMotionTypeCallback (82DB0970, empty);
//  - hkpPhantomListener: the thunk, phantomAddedCallback (82DB1B10), an adjustor thunk to 82DB0B68 for
//    phantomRemovedCallback, then the base's phantomShapeSetCallback / phantomDeletedCallback;
//  - hkpIslandActivationListener: the thunk, islandActivatedCallback (82DB1238), islandDeactivatedCallback
//    (82DB1180);
//  - hkpWorldPostSimulationListener: the thunk, postSimulationCallback (82DB0978, empty),
//    inactiveEntityMovedCallback (82DB12E8).
//
// Members (offsets in the whole object): +0x24 a byte that says whether the manager is in use (the constructor
// sets it from its mode; the island and post-simulation callbacks do nothing while it is clear), +0x50 a map of
// collidables (82DB1238 inserts the active island's entities with value 1), +0x68 / +0x69 two bytes the
// add/move callbacks clear and set before they hand the collidable to the tree (fn_82DB1630, fn_82DB1098).
// Everything else is padding here; the member names are guesses from that use.
#ifndef HAVOK_HKPAABBTREEWORLDMANAGER_H
#define HAVOK_HKPAABBTREEWORLDMANAGER_H

#include "havok/hkBase.h"
#include "havok/hkpTreeWorldManager.h"
#include "havok/hkpEntityListener.h"
#include "havok/hkpPhantomListener.h"
#include "havok/hkpIslandActivationListener.h"
#include "havok/hkpWorldPostSimulationListener.h"

class hkpAabbTreeWorldManager : public hkpTreeWorldManager,
                                public hkpEntityListener,
                                public hkpPhantomListener,
                                public hkpIslandActivationListener,
                                public hkpWorldPostSimulationListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    virtual ~hkpAabbTreeWorldManager();   // out of line (82DB1908)

    virtual void entityAddedCallback(hkpEntity *entity);
    virtual void entitySetMotionTypeCallback(hkpEntity *entity);
    virtual void phantomAddedCallback(hkpPhantom *phantom);
    virtual void islandActivatedCallback(hkpSimulationIsland *island);
    virtual void islandDeactivatedCallback(hkpSimulationIsland *island);
    virtual void postSimulationCallback(hkpWorld *world);
    virtual void inactiveEntityMovedCallback(hkpEntity *entity);

    hkBool m_inUse;                   // +0x24
    hkUint8 m_pad25[0x50 - 0x25];     // +0x25: unknown
    hkUint8 m_collidableMap[0x10];    // +0x50: a map (hkMap functions fn_82CEA2F0 / fn_82CEA160)
    hkUint8 m_pad60[0x68 - 0x60];     // +0x60: unknown
    hkBool m_flag68;                  // +0x68
    hkBool m_flag69;                  // +0x69
};

#endif
