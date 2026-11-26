// hkpPhysicsData (Physics/Utilities/Serialize/hkpPhysicsData.h), 0x18 bytes: what a physics snapshot loads, a
// world construction info and the physics systems to add to the world. The constructor and the destructor
// (fn_82DF3248) are out of line.
#ifndef HAVOK_HKPPHYSICSDATA_H
#define HAVOK_HKPPHYSICSDATA_H

#include "havok/hkBase.h"

class hkpPhysicsSystem;
class hkpWorldCinfo;

class hkpPhysicsData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpPhysicsData();
    hkpPhysicsData(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_systems(f) {}
    virtual ~hkpPhysicsData();

    hkpWorldCinfo *m_worldCinfo;              // +0x8
    hkArray<hkpPhysicsSystem *> m_systems;    // +0xC
};

#endif
