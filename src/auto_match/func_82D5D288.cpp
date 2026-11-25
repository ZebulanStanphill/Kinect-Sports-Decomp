// A static getPenetrations function listed in the agent function table that fn_82D5FBB8 builds for the list
// agent (with fn_82D5FB30 as the create function): flips the bodies (and the collector's
// results) and forwards to fn_82D6C3E0. A Matching unit refers to it, so it keeps its fn_ name.
#include "havok/hkpSymmetricAgent.h"

extern "C" void fn_82D6C3E0(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);

extern "C" void fn_82D5D288(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector)
{
    hkpSymmetricAgentFlipBodyCollector flipCollector(collector);
    fn_82D6C3E0(bodyB, bodyA, input, flipCollector);
}
