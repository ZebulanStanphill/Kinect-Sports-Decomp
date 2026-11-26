// static hkpSymmetricAgent<hkpMultiSphereAgent>::staticLinearCast: flips the bodies, negates the cast path and wraps
// the collectors so that the results come back flipped, then forwards to hkpMultiSphereAgent's function.
#include "havok/hkpCollisionAgent.h"

// Local copies of hkpSymmetricAgentFlipCastCollector and hkpSymmetricAgent (havok/hkpSymmetricAgent.h), with only
// what this function needs: it stores the path before the target collector, which the header's constructor
// (reference member set in the initializer list) does not, and the static is forced inline here.
class hkpSymmetricAgentFlipCastCollector : public hkpCdPointCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpSymmetricAgentFlipCastCollector);
    hkpSymmetricAgentFlipCastCollector(const hkVector4 &path, hkpCdPointCollector &c)
    {
        m_path = path;
        m_collector = &c;
    }
    virtual void addCdPoint(const hkpCdPoint &point);

    hkVector4 m_path;                   // +0x10
    hkpCdPointCollector *m_collector;   // +0x20
};

template <typename AGENT>
class hkpSymmetricAgent : public AGENT {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);

    static HK_FORCE_INLINE void HK_CALL staticLinearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
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
};

// fn_82D6D088 is hkpMultiSphereAgent::staticLinearCast.
extern "C" {
void fn_82D6D088(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                 hkpCdPointCollector &collector, hkpCdPointCollector *startCollector);
}

class hkpMultiSphereAgent : public hkpCollisionAgent {
public:
    hkpMultiSphereAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                        hkpContactMgr *mgr);
    static void HK_CALL staticLinearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                         const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector,
                                         hkpCdPointCollector *startCollector)
    {
        fn_82D6D088(bodyA, bodyB, input, collector, startCollector);
    }
};

// hkpSymmetricAgent<hkpMultiSphereAgent>::staticLinearCast keeps its fn_ name (the Matching registerAgent unit
// takes its address), so the static is forced inline into an extern "C" function with that name.
extern "C" void fn_82D6D820(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                            hkpCdPointCollector &collector, hkpCdPointCollector *startCollector)
{
    hkpSymmetricAgent<hkpMultiSphereAgent>::staticLinearCast(bodyA, bodyB, input, collector, startCollector);
}
