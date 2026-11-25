// hkpSymmetricAgent<hkpMultiSphereAgent>::getClosestPoints (virtual): flips the bodies (and the collector's results) and forwards to hkpMultiSphereAgent's function.
#include "havok/hkpSymmetricAgent.h"

class hkpMultiSphereAgent;
extern "C" {
void fn_82D6CD50(hkpMultiSphereAgent *self, const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);   // hkpMultiSphereAgent::getClosestPoints
}

class hkpMultiSphereAgent : public hkpCollisionAgent {
public:
    hkpMultiSphereAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector)
    {
        fn_82D6CD50(this, bodyA, bodyB, input, collector);
    }
};

template void hkpSymmetricAgent<hkpMultiSphereAgent>::getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);
