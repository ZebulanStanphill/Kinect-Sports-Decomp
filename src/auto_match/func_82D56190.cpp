// hkpBvTreeAgent::createShapeBvAgent (Physics/Collide/Agent/CompoundAgent/BvTree/hkpBvTreeAgent.cpp), /O2 /QVMXReserve:
// the bv tree is the second body, so the agent is the flipped hkpSymmetricAgent<hkpBvTreeAgent>. hkpBvTreeAgent's
// constructor is defined in the same file, so the compiler inlines it here (elsewhere it is called out of line,
// fn_82D56088). It keeps its fn_ name (the registerAgent functions take its address).
// HK_REAL_MAX is a literal: the game's copy is __real@7f7fffee, which Matching units reference, so it is a static
// constant with that name.
#include "havok/hkBase.h"
#include "havok/hkAabb.h"
#include "havok/hkpSymmetricAgent.h"

// HK_REAL_MAX (3.40282e+38f); the game's copy keeps its lbl_ name (see above).

struct hkpBvAgentEntryInfo {
    hkpShapeKey m_key;
    hkInt32 m_userInfo;
    hkpCollisionAgent *m_collisionAgent;
};

class hkpBvTreeAgent : public hkpCollisionAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpBvTreeAgent(hkpContactMgr *mgr) : hkpCollisionAgent(mgr)
    {
        m_cachedAabb.m_max.setAll(3.40282e+38f);
        m_cachedAabb.m_min.setAll(3.40282e+38f);
    }
    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                 hkpCdBodyPairCollector &collector);
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                  hkpCdPointCollector &collector);
    virtual void linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                            hkpCdPointCollector &collector, hkpCdPointCollector *startCollector);

    hkArray<hkpBvAgentEntryInfo> m_collisionPartners;   // +0xC
    hkAabb m_cachedAabb;                                // +0x20
};

extern "C" hkpCollisionAgent *fn_82D56190(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                          const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpBvTreeAgent *agent = new hkpSymmetricAgent<hkpBvTreeAgent>(mgr);
    return agent;
}
