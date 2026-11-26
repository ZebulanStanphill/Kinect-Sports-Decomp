// hkpBvTreeAgent::hkpBvTreeAgent(hkpContactMgr *mgr) (Physics/Collide/Agent/CompoundAgent/BvTree/
// hkpBvTreeAgent.cpp), /O2 /QVMXReserve (flag file): the hkpCollisionAgent base, an empty
// m_collisionPartners array, then both corners of m_cachedAabb set to HK_REAL_MAX (hkVector4::setAll
// stores the float into the quad and splats it).
// HK_REAL_MAX is a literal: the game's copy is __real@7f7fffee, which Matching units reference, so it is a
// static constant with that name (an extern is reloaded after the array stores).
#include "havok/hkBase.h"
#include "havok/hkAabb.h"
#include "havok/hkpCollisionAgent.h"

// HK_REAL_MAX (3.40282e+38f); the game's copy keeps its lbl_ name (see above).

struct hkpBvAgentEntryInfo {
    hkpShapeKey m_key;
    hkInt32 m_userInfo;
    hkpCollisionAgent *m_collisionAgent;
};

class hkpBvTreeAgent : public hkpCollisionAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpBvTreeAgent(hkpContactMgr *mgr);

    hkArray<hkpBvAgentEntryInfo> m_collisionPartners;   // +0xC
    hkAabb m_cachedAabb;                                // +0x20
};

hkpBvTreeAgent::hkpBvTreeAgent(hkpContactMgr *mgr) : hkpCollisionAgent(mgr)
{
    m_cachedAabb.m_max.setAll(3.40282e+38f);
    m_cachedAabb.m_min.setAll(3.40282e+38f);
}
