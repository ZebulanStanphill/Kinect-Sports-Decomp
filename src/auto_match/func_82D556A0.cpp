// hkpMoppAgent::hkpMoppAgent(hkpContactMgr *) (Physics/Collide/Agent/CompoundAgent/BvTree/hkpMoppAgent.h): the
// hkpBvTreeAgent constructor (out of line, fn_82D56088) and then the class vtable.
#include "havok/hkpCollisionAgent.h"

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
};

class hkpMoppAgent : public hkpBvTreeAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpMoppAgent(hkpContactMgr *mgr);
};

hkpMoppAgent::hkpMoppAgent(hkpContactMgr *mgr) : hkpBvTreeAgent(mgr)
{
}
