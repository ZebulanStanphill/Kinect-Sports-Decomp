// hkpSymmetricAgent<hkpHeightFieldAgent>::getPenetrations (Physics/Collide/Agent/MiscAgent/HeightField/hkpHeightFieldAgent.cpp): flips the bodies (and the collector's
// results) and calls hkpHeightFieldAgent::getPenetrations, whose inline body calls the static function (fn_82D59D40).
#include "havok/hkpHeightFieldAgent.h"
#include "havok/hkpSymmetricAgent.h"

// Defined in this file (fn_82D5A7B0), so the compiler inlines it here.
void hkpHeightFieldAgent::getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                          hkpCdBodyPairCollector &collector)
{
    staticGetPenetrations(bodyA, bodyB, input, collector);
}

template void hkpSymmetricAgent<hkpHeightFieldAgent>::getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
