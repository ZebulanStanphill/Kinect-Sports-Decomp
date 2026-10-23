// hkpPhysicsData::hkpPhysicsData() (hkpPhysicsData.cpp).
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
    virtual ~hkpPhysicsData();

    hkpWorldCinfo *m_worldCinfo;              // +0x8
    hkArray<hkpPhysicsSystem *> m_systems;    // +0xC
};

hkpPhysicsData::hkpPhysicsData()
{
    m_worldCinfo = HK_NULL;
}
