// hkpKdTreeWorldManager (Physics/Collide/BroadPhase/... hkpKdTreeWorldManager.h): the tree world manager that
// keeps the world's collidables in a kd-tree. RTTI: hkpTreeWorldManager at +0x0, hkpEntityListener at +0x14,
// hkpPhantomListener at +0x18 (??_R2hkpKdTreeWorldManager@@8, and the adjustor thunks 82DB3F10 / 82DB3F18 of
// the deleting destructor 82DB3F20).
//
// Vtables: ??_7hkpKdTreeWorldManager@@6BhkpEntityListener@@@ is the thunk, entityAddedCallback (82DB3150),
// entityRemovedCallback (82DB3230), hkpEntityListener's entityShapeSetCallback (fn_82DB2F50),
// entitySetMotionTypeCallback (82DB3160, empty) and the base's empty entityDeletedCallback (fn_82BA02A8);
// ??_7hkpKdTreeWorldManager@@6BhkpPhantomListener@@@ is the thunk, phantomAddedCallback (82DB3168),
// phantomRemovedCallback (82DB3258) and the base's phantomShapeSetCallback / phantomDeletedCallback. The callbacks'
// names are Havok's listener interfaces'.
//
// Members: +0x1C the world (the destructor, 82DB3418, removes the manager from its listeners), +0x20 a byte set
// when a collidable is added, or removed while +0x21 is clear: the tree needs a rebuild; +0x21 a byte that lets
// the removal callbacks remove a collidable from the kd-tree (fn_83083900) at once. The member names are guesses
// from that use.
#ifndef HAVOK_HKPKDTREEWORLDMANAGER_H
#define HAVOK_HKPKDTREEWORLDMANAGER_H

#include "havok/hkBase.h"
#include "havok/hkpTreeWorldManager.h"
#include "havok/hkpEntityListener.h"
#include "havok/hkpPhantomListener.h"

class hkpWorld;

class hkpKdTreeWorldManager : public hkpTreeWorldManager, public hkpEntityListener, public hkpPhantomListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    virtual ~hkpKdTreeWorldManager();   // out of line (82DB3418)

    virtual void entityAddedCallback(hkpEntity *entity);
    virtual void entityRemovedCallback(hkpEntity *entity);
    virtual void entitySetMotionTypeCallback(hkpEntity *entity);
    virtual void phantomAddedCallback(hkpPhantom *phantom);
    virtual void phantomRemovedCallback(hkpPhantom *phantom);

    hkpWorld *m_world;                 // +0x1C
    hkBool m_treeDirty;                // +0x20
    hkBool m_removeImmediately;        // +0x21
};

#endif
