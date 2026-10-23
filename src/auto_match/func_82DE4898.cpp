// hkpPhysicsData scalar deleting destructor (compiler-generated); it calls the destructor out of line (??1,
// fn_82DF3248). The finish constructor at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"

class hkpWorldCinfo : public hkReferencedObject {
};
class hkpPhysicsSystem : public hkReferencedObject {
};

// Physics/Utilities/Serialize/hkpPhysicsData.h.
class hkpPhysicsData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpPhysicsData();
    hkpPhysicsData(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_systems(f) {}
    virtual ~hkpPhysicsData();

    hkpWorldCinfo *m_worldCinfo;              // +0x8
    hkArray<hkpPhysicsSystem *> m_systems;    // +0xC
};

void emitVtable_82DE4898(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpPhysicsData(f); }
