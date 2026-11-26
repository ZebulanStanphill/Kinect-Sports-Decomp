// It keeps its fn_ name because a Matching C unit calls it, so it is written as an
// extern "C" function (the static member function has no this).
// static hkpSymmetricAgent<hkpCapsuleTriangleAgent>::staticGetPenetrations: flips the bodies (and the collector's results) and forwards to hkpCapsuleTriangleAgent's function.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpCapsuleTriangleAgent.h"

extern "C" void fn_82D63830(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector)
{
    hkpSymmetricAgent<hkpCapsuleTriangleAgent>::staticGetPenetrations(bodyA, bodyB, input, collector);
}
