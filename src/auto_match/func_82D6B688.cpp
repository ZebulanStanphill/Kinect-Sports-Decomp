// static hkpSymmetricAgent<hkpTransformAgent>::staticLinearCast (Physics/Collide/Agent/Util/Symmetric/
// hkpSymmetricAgent.h): flips the bodies, negates the cast path and wraps the collectors so that the results come
// back flipped, then forwards to hkpTransformAgent::staticLinearCast (82D6AFF0). registerAgent (82D6B470) stores
// it in the flipped AgentFuncs with the template's other two statics.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpTransformAgent.h"

template void HK_CALL hkpSymmetricAgent<hkpTransformAgent>::staticLinearCast(const hkpCdBody &bodyA,
    const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector,
    hkpCdPointCollector *startCollector);
