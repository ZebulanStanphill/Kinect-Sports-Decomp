// hkpBvTreeAgent::createBvBvAgent (Physics/Collide/Agent/CompoundAgent/BvTree/hkpBvTreeAgent.cpp):
// the body with the smaller object radius goes first; otherwise the symmetric agent flips them.
// Both arms inline hkpBvTreeAgent(hkpContactMgr *), whose cached AABB is set to HK_REAL_MAX.
// Havok code: /O2 /QVMXReserve (flag file).
#include "havok/hkpCollisionAgent.h"

struct hkAabb {
    hkVector4 m_min;
    hkVector4 m_max;
};

// HK_REAL_MAX. Havok writes the literal, so the compiler knows the value cannot
// change: it loads it once for both setAll calls and schedules the load above the
// hkArray stores. Declaring it as a plain extern makes the compiler reload it
// after the vector stores; defining it (selectany, like a __real@ constant) keeps
// the configured name and the original's code.

struct hkpBvAgentEntryInfo {
    hkpShapeKey m_key;
    hkInt32 m_userInfo;
    hkpCollisionAgent *m_collisionAgent;
};

class hkpBvTreeAgent : public hkpCollisionAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    HK_FORCE_INLINE hkpBvTreeAgent(hkpContactMgr *mgr) : hkpCollisionAgent(mgr)
    {
        m_cachedAabb.m_max.setAll(3.40282e+38f);
        m_cachedAabb.m_min.setAll(3.40282e+38f);
    }
    virtual ~hkpBvTreeAgent();

    static hkpCollisionAgent *HK_CALL createBvBvAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                      const hkpCollisionInput &input, hkpContactMgr *mgr);

    hkArray<hkpBvAgentEntryInfo> m_collisionPartners;   // +0xC
    hkAabb m_cachedAabb;                                 // +0x20
};

template <typename AGENT>
class hkpSymmetricAgent : public AGENT {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpSymmetricAgent(hkpContactMgr *mgr) : AGENT(mgr) {}
};

hkpCollisionAgent *HK_CALL hkpBvTreeAgent::createBvBvAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                          const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    if (bodyA.getMotionState()->m_objectRadius < bodyB.getMotionState()->m_objectRadius)
    {
        return new hkpBvTreeAgent(mgr);
    }
    return new hkpSymmetricAgent<hkpBvTreeAgent>(mgr);
}
