// hkpPhysicsData::~hkpPhysicsData (hkpPhysicsData.cpp).
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

hkpPhysicsData::~hkpPhysicsData()
{
    if (m_worldCinfo)
        m_worldCinfo->removeReference();
    for (int i = 0; i < m_systems.getSize(); ++i)
        fn_82CE4118(m_systems[i]);   // removeReference(); the direct call keeps the original lwzx operand order
}
