// hkpBvTreeAgent::~hkpBvTreeAgent (Physics/Collide/Agent/CompoundAgent/BvTree/hkpBvTreeAgent.cpp): user-written and empty (it stores the class vtable); the hkArray
// member at +0xC (12-byte items) is destroyed, then the bases.
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
    virtual ~hkpBvTreeAgent();

    hkArray<hkpBvAgentEntryInfo> m_collisionPartners;   // +0xC
};

hkpBvTreeAgent::~hkpBvTreeAgent()
{
}
