// hkpSymmetricAgent<hkpBvAgent>::linearCast (virtual): flips the bodies, negates the cast path and wraps the collectors so that the results come back
// flipped, then forwards to hkpBvAgent's function.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpBvAgent.h"

template void hkpSymmetricAgent<hkpBvAgent>::linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector, hkpCdPointCollector *startCollector);
