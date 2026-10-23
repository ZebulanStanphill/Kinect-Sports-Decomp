// hkpNullAgent::hkpNullAgent() (Physics/Collide/Agent/MiscAgent/Null/hkpNullAgent.cpp): an agent without contact manager.
#include "havok/hkBase.h"

class hkpContactMgr;

class hkpCollisionAgent : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpCollisionAgent(hkpContactMgr *contactMgr) : m_contactMgr(contactMgr) {}

    hkpContactMgr *m_contactMgr;   // +0x8
};

class hkpNullAgent : public hkpCollisionAgent {
public:
    hkpNullAgent();
};

hkpNullAgent::hkpNullAgent() : hkpCollisionAgent(HK_NULL)
{
}
