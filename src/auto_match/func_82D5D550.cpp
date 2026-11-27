// static hkpSymmetricAgent<hkpConvexListAgent>::staticLinearCast (Physics/Collide/Agent/Util/Symmetric/
// hkpSymmetricAgent.h): flips the bodies, negates the cast path and wraps the collectors so that the results come
// back flipped, then forwards to hkpConvexListAgent::staticLinearCast (82D5C4B0). registerAgent (82D5D148) stores
// it in the flipped AgentFuncs with the template's other two statics.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpConvexListAgent.h"

template void HK_CALL hkpSymmetricAgent<hkpConvexListAgent>::staticLinearCast(const hkpCdBody &bodyA,
    const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector,
    hkpCdPointCollector *startCollector);
