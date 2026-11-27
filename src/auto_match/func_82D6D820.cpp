// static hkpSymmetricAgent<hkpMultiSphereAgent>::staticLinearCast (Physics/Collide/Agent/Util/Symmetric/
// hkpSymmetricAgent.h): flips the bodies, negates the cast path and wraps the collectors so that the results come
// back flipped, then forwards to hkpMultiSphereAgent::staticLinearCast (82D6D088). The registerAgent function
// (82D6D6B8) stores it in the flipped AgentFuncs with the template's other two statics.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpMultiSphereAgent.h"

template void HK_CALL hkpSymmetricAgent<hkpMultiSphereAgent>::staticLinearCast(const hkpCdBody &bodyA,
    const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector,
    hkpCdPointCollector *startCollector);
