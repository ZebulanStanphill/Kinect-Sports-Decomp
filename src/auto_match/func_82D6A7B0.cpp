// hkpPhantomAgent::getPenetrations (+0xC of ??_7hkpPhantomAgent@@6B@): reports the pair as penetrating.
#include "havok/hkpPhantomAgent.h"

void hkpPhantomAgent::getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                      hkpCdBodyPairCollector &collector)
{
    collector.addCdBodyPair(bodyA, bodyB);
}
