// It keeps its fn_ name because a Matching C unit calls it, so it is written as an
// extern "C" function (the static member function has no this).
// static hkpSymmetricAgent<hkpSphereTriangleAgent>::staticGetClosestPoints: flips the bodies (and the collector's results) and forwards to hkpSphereTriangleAgent's function.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpSphereTriangleAgent.h"

extern "C" void fn_82D662B8(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector)
{
    hkpSymmetricAgent<hkpSphereTriangleAgent>::staticGetClosestPoints(bodyA, bodyB, input, collector);
}
