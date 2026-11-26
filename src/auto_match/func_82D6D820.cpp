// static hkpSymmetricAgent<hkpMultiSphereAgent>::staticLinearCast (Physics/Collide/Agent/Util/Symmetric/
// hkpSymmetricAgent.h): flips the bodies, negates the cast path and wraps the collectors so that the results come
// back flipped, then forwards to hkpMultiSphereAgent::staticLinearCast (fn_82D6D088). The registerAgent function
// (82D6D6B8) stores it in the flipped AgentFuncs with the template's other two statics.
#include "havok/hkpSymmetricAgent.h"

extern "C" void fn_82D6D088(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                            hkpCdPointCollector &collector, hkpCdPointCollector *startCollector);   // hkpMultiSphereAgent::staticLinearCast

class hkpMultiSphereAgent : public hkpCollisionAgent {
public:
    static HK_FORCE_INLINE void HK_CALL staticLinearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                         const hkpLinearCastCollisionInput &input,
                                                         hkpCdPointCollector &collector, hkpCdPointCollector *startCollector)
    {
        fn_82D6D088(bodyA, bodyB, input, collector, startCollector);
    }
};

template void HK_CALL hkpSymmetricAgent<hkpMultiSphereAgent>::staticLinearCast(const hkpCdBody &bodyA,
    const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector,
    hkpCdPointCollector *startCollector);
