// static hkpSymmetricAgent<hkpBvAgent>::staticLinearCast (Physics/Collide/Agent/Util/Symmetric/
// hkpSymmetricAgent.h): flips the bodies, negates the cast path and wraps the collectors so that the results come
// back flipped, then forwards to hkpBvAgent::staticLinearCast (fn_82D6E2C8). The registerAgent function
// (82D6EC40) stores it in the flipped AgentFuncs with the template's other two statics.
#include "havok/hkpSymmetricAgent.h"

extern "C" void fn_82D6E2C8(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                            hkpCdPointCollector &collector, hkpCdPointCollector *startCollector);   // hkpBvAgent::staticLinearCast

class hkpBvAgent : public hkpCollisionAgent {
public:
    static HK_FORCE_INLINE void HK_CALL staticLinearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                         const hkpLinearCastCollisionInput &input,
                                                         hkpCdPointCollector &collector, hkpCdPointCollector *startCollector)
    {
        fn_82D6E2C8(bodyA, bodyB, input, collector, startCollector);
    }
};

template void HK_CALL hkpSymmetricAgent<hkpBvAgent>::staticLinearCast(const hkpCdBody &bodyA,
    const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector,
    hkpCdPointCollector *startCollector);
