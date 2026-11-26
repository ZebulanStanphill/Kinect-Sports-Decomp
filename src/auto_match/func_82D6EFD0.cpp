// hkpSymmetricAgent<hkpBvAgent>::linearCast (virtual): flips the bodies, negates the cast path and wraps the collectors so that the results come back
// flipped, then forwards to hkpBvAgent's function.
#include "havok/hkpSymmetricAgent.h"

class hkpBvAgent;
extern "C" {
void fn_82D6E0D8(hkpBvAgent *self, const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector, hkpCdPointCollector *startCollector);   // hkpBvAgent::linearCast
}

class hkpBvAgent : public hkpCollisionAgent {
public:
    hkpBvAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    virtual void linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector, hkpCdPointCollector *startCollector)
    {
        fn_82D6E0D8(this, bodyA, bodyB, input, collector, startCollector);
    }
};

template void hkpSymmetricAgent<hkpBvAgent>::linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector, hkpCdPointCollector *startCollector);
