// hkpSymmetricAgent<AGENT> and hkpSymmetricAgentLinearCast<AGENT> (Physics/Collide/Agent/Util/
// Symmetric): AGENT with the two bodies swapped, and the collectors that swap the results back.
// Both derive from AGENT (RTTI). The static flipped functions registered with the collision
// dispatcher are hkpSymmetricAgent<AGENT>'s, also for the agents whose instances are
// hkpSymmetricAgentLinearCast<AGENT>: that template only overrides virtuals.
#ifndef HAVOK_HKPSYMMETRICAGENT_H
#define HAVOK_HKPSYMMETRICAGENT_H

#include "havok/hkpIterativeLinearCastAgent.h"
#include "havok/hkpCollisionDispatcher.h"

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

class hkpSymmetricAgentFlipCastCollector : public hkpCdPointCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpSymmetricAgentFlipCastCollector);
    hkpSymmetricAgentFlipCastCollector(const hkVector4 &path, hkpCdPointCollector &c) : m_collector(c)
    {
        m_path = path;
    }
    virtual void addCdPoint(const hkpCdPoint &point);

    hkVector4 m_path;                   // +0x10
    hkpCdPointCollector &m_collector;   // +0x20
};

template <typename AGENT>
class hkpSymmetricAgent : public AGENT {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    HK_FORCE_INLINE hkpSymmetricAgent(const hkpCdBody &A, const hkpCdBody &B, const hkpCollisionInput &input, hkpContactMgr *mgr)
        : AGENT(B, A, input, mgr) {}
    HK_FORCE_INLINE hkpSymmetricAgent(hkpContactMgr *mgr) : AGENT(mgr) {}

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
    static void HK_CALL staticLinearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                         const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector,
                                         hkpCdPointCollector *startCollector)
    {
        hkpLinearCastCollisionInput flippedInput = input;
        flippedInput.m_path.setNeg4(input.m_path);
        hkpSymmetricAgentFlipCastCollector flipCollector(input.m_path, collector);
        if (startCollector) {
            hkpSymmetricAgentFlipCastCollector startFlipCollector(input.m_path, *startCollector);
            AGENT::staticLinearCast(bodyB, bodyA, flippedInput, flipCollector, &startFlipCollector);
        } else {
            AGENT::staticLinearCast(bodyB, bodyA, flippedInput, flipCollector, HK_NULL);
        }
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
    virtual void linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                            hkpCdPointCollector &collector, hkpCdPointCollector *startCollector)
    {
        hkpLinearCastCollisionInput flippedInput = input;
        flippedInput.m_path.setNeg4(input.m_path);
        hkpSymmetricAgentFlipCastCollector flipCollector(input.m_path, collector);
        if (startCollector) {
            hkpSymmetricAgentFlipCastCollector startFlipCollector(input.m_path, *startCollector);
            AGENT::linearCast(bodyB, bodyA, flippedInput, flipCollector, &startFlipCollector);
        } else {
            AGENT::linearCast(bodyB, bodyA, flippedInput, flipCollector, HK_NULL);
        }
    }
};

template <typename AGENT>
class hkpSymmetricAgentLinearCast : public AGENT {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    HK_FORCE_INLINE hkpSymmetricAgentLinearCast(const hkpCdBody &A, const hkpCdBody &B, const hkpCollisionInput &input,
                                hkpContactMgr *mgr)
        : AGENT(B, A, input, mgr) {}
    HK_FORCE_INLINE hkpSymmetricAgentLinearCast(hkpContactMgr *mgr) : AGENT(mgr) {}

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

#endif
