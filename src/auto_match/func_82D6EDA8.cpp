// static hkpSymmetricAgent<hkpBvAgent>::staticLinearCast (Physics/Collide/Agent/Util/Symmetric/
// hkpSymmetricAgent.h): flips the bodies, negates the cast path and wraps the collectors so that the results come
// back flipped, then forwards to hkpBvAgent::staticLinearCast (fn_82D6E2C8). The registerAgent function
// (82D6EC40) stores it in the flipped AgentFuncs with the template's other two statics.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpBvAgent.h"

template void HK_CALL hkpSymmetricAgent<hkpBvAgent>::staticLinearCast(const hkpCdBody &bodyA,
    const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector,
    hkpCdPointCollector *startCollector);
