// hkpSymmetricAgent<hkpTransformAgent>::linearCast (virtual): flips the bodies, negates the cast path and wraps the collectors so that the results come back
// flipped, then forwards to hkpTransformAgent's function.
#include "havok/hkpSymmetricAgent.h"

class hkpTransformAgent;
extern "C" {
void fn_82D6AF68(hkpTransformAgent *self, const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector, hkpCdPointCollector *startCollector);   // hkpTransformAgent::linearCast
}

class hkpTransformAgent : public hkpCollisionAgent {
public:
    hkpTransformAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    virtual void linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector, hkpCdPointCollector *startCollector)
    {
        fn_82D6AF68(this, bodyA, bodyB, input, collector, startCollector);
    }
};

template void hkpSymmetricAgent<hkpTransformAgent>::linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector, hkpCdPointCollector *startCollector);
