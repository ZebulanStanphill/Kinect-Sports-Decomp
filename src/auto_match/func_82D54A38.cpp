// hkpSymmetricAgent<hkpBvTreeStreamAgent>::createAgent (Physics/Collide/Agent/CompoundAgent/BvTreeStream/
// hkpBvTreeStreamAgent.cpp): allocates the agent with the class allocator (no null check), runs
// hkpBvTreeStreamAgent's constructor (out of line, fn_82D54230) with the bodies swapped, then stores
// hkpSymmetricAgent's vtable.
#include "havok/hkpIterativeLinearCastAgent.h"

class hkpSymmetricAgentFlipBodyCollector : public hkpCdBodyPairCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpSymmetricAgentFlipBodyCollector);
    hkpSymmetricAgentFlipBodyCollector(hkpCdBodyPairCollector &c) : m_collector(c) {}
    virtual void addCdBodyPair(const hkpCdBody &bodyA, const hkpCdBody &bodyB);

    hkpCdBodyPairCollector &m_collector;   // +0x8
};

class hkpSymmetricAgentFlipCollector : public hkpCdPointCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpSymmetricAgentFlipCollector);
    hkpSymmetricAgentFlipCollector(hkpCdPointCollector &c) : m_collector(c) {}
    virtual void addCdPoint(const hkpCdPoint &point);

    hkpCdPointCollector &m_collector;   // +0x8
};

template <typename AGENT>
class hkpSymmetricAgent : public AGENT {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpSymmetricAgent(const hkpCdBody &A, const hkpCdBody &B, const hkpCollisionInput &input, hkpContactMgr *mgr)
        : AGENT(B, A, input, mgr) {}
    hkpSymmetricAgent(hkpContactMgr *mgr) : AGENT(mgr) {}

    static hkpCollisionAgent *HK_CALL createAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                  const hkpCollisionInput &input, hkpContactMgr *mgr)
    {
        hkpSymmetricAgent<AGENT> *newAgent = new hkpSymmetricAgent<AGENT>(bodyA, bodyB, input, mgr);
        return newAgent;
    }
    static void HK_CALL staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                              const hkpCollisionInput &input, hkpCdBodyPairCollector &collector)
    {
        hkpSymmetricAgentFlipBodyCollector flipCollector(collector);
        AGENT::staticGetPenetrations(bodyB, bodyA, input, flipCollector);
    }
    static void HK_CALL staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                               const hkpCollisionInput &input, hkpCdPointCollector &collector)
    {
        hkpSymmetricAgentFlipCollector flipCollector(collector);
        AGENT::staticGetClosestPoints(bodyB, bodyA, input, flipCollector);
    }

    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                 hkpCdBodyPairCollector &collector)
    {
        hkpSymmetricAgentFlipBodyCollector flipCollector(collector);
        AGENT::getPenetrations(bodyB, bodyA, input, flipCollector);
    }
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                  hkpCdPointCollector &collector)
    {
        hkpSymmetricAgentFlipCollector flipCollector(collector);
        AGENT::getClosestPoints(bodyB, bodyA, input, flipCollector);
    }
};

class hkpBvTreeStreamAgent : public hkpCollisionAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpBvTreeStreamAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                         hkpContactMgr *mgr);

    hkUint8 m_data[0x40 - 0xC];   // sizeof is 0x40
};

template hkpCollisionAgent *HK_CALL hkpSymmetricAgent<hkpBvTreeStreamAgent>::createAgent(const hkpCdBody &bodyA,
                                                                                        const hkpCdBody &bodyB,
                                                                                        const hkpCollisionInput &input,
                                                                                        hkpContactMgr *mgr);
