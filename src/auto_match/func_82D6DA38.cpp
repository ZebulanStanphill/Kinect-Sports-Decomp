// hkpSymmetricAgent<hkpMultiSphereAgent>::linearCast (virtual): flips the bodies, negates the cast path and wraps the collectors so that the results come back
// flipped, then forwards to hkpMultiSphereAgent's function.
// Havok collision agents (Physics/Collide/Agent/hkpCollisionAgent.h, hkpIterativeLinearCastAgent.h,
// Agent/Util/Symmetric/hkpSymmetricAgent.h, hkpSymmetricAgentLinearCast.h, hkpSymmetricAgentFlip*Collector.h).
// Hierarchy from the RTTI: hkpSymmetricAgent<AGENT> and hkpSymmetricAgentLinearCast<AGENT> derive from AGENT;
// the agents derive from hkpCollisionAgent (some through hkpIterativeLinearCastAgent) -> hkReferencedObject.
// The static flipped functions (registered with the collision dispatcher) are hkpSymmetricAgent<AGENT>'s, also for
// the agents whose instances are hkpSymmetricAgentLinearCast<AGENT> (that template only overrides virtuals).
// The collectors are interfaces without base class and with Havok's non-virtual class allocator; their
// constructors call reset(), which sets m_earlyOut = false / m_earlyOutDistance = HK_REAL_MAX. The game's
// HK_REAL_MAX constant is __real@7f7fffee (3.40282e38f).
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpMultiSphereAgent.h"

template void hkpSymmetricAgent<hkpMultiSphereAgent>::linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector, hkpCdPointCollector *startCollector);
