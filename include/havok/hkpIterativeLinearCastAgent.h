#ifndef HAVOK_HKPITERATIVELINEARCASTAGENT_H
#define HAVOK_HKPITERATIVELINEARCASTAGENT_H

#include "havok/hkpCollisionAgent.h"

extern "C" void fn_82D75FD0(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                            hkpCdPointCollector &collector, hkpCdPointCollector *startCollector);   // hkpIterativeLinearCastAgent::staticLinearCast

class hkpIterativeLinearCastAgent : public hkpCollisionAgent {
public:
    hkpIterativeLinearCastAgent(hkpContactMgr *mgr) : hkpCollisionAgent(mgr) {}
    static void HK_CALL staticLinearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                         const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector,
                                         hkpCdPointCollector *startCollector)
    {
        fn_82D75FD0(bodyA, bodyB, input, collector, startCollector);
    }
};

#endif
