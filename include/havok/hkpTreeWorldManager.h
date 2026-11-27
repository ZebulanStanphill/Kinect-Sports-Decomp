// hkpTreeWorldManager (Physics/Collide/BroadPhase/... hkpTreeWorldManager.h), 0x14 bytes: the base of the world
// managers that keep the world's collidables in a tree (hkpAabbTreeWorldManager, hkpKdTreeWorldManager).
// RTTI: hkpTreeWorldManager -> hkReferencedObject -> hkBaseObject (??_R2hkpTreeWorldManager@@8).
//
// Its vtable has eight slots of its own after hkReferencedObject's three (the castRay functions among them, see
// hkpAabbTreeWorldManager's 82DB0A00 / 82DB0C38 and hkpKdTreeWorldManager's 82DB3288); their names are not known,
// so only the destructor is declared here: a unit that constructs a tree world manager cannot use this header.
//
// Members: +0x8 the tree type (1 for hkpAabbTreeWorldManager's constructor, 82DB16D0), +0xC and +0x10 the two
// tree pointers: the inactive (AABB) tree and the active (kd) tree in the castRay units; hkpKdTreeWorldManager's
// destructor (82DB3418) deletes +0x10 as its hkKdTree. The names are the units', not Havok's.
#ifndef HAVOK_HKPTREEWORLDMANAGER_H
#define HAVOK_HKPTREEWORLDMANAGER_H

#include "havok/hkBase.h"

class hkpTreeWorldManager : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    virtual ~hkpTreeWorldManager() {}

    int m_type;       // +0x8
    void *m_tree;     // +0xC
    void *m_kdTree;   // +0x10
};

#endif
