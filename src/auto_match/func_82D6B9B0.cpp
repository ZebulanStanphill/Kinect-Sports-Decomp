// hkpSymmetricAgent<hkpTransformAgent>::linearCast (virtual): flips the bodies, negates the cast path and wraps the collectors so that the results come back
// flipped, then forwards to hkpTransformAgent's function.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpTransformAgent.h"

template void hkpSymmetricAgent<hkpTransformAgent>::linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector, hkpCdPointCollector *startCollector);
