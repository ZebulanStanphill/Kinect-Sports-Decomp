
#include "havok/hkpListAgent.h"
#include "havok/hkpShapeCollectionAgent.h"
#include "havok/hkpSymmetricAgent.h"

// Defined in this file (82D5F800, 82D5F858), so the compiler inlines them here.
void HK_CALL hkpListAgent::staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                          hkpCdPointCollector &collector)
{
    hkpSymmetricAgent<hkpShapeCollectionAgent>::staticGetClosestPoints(bodyA, bodyB, input, collector);
}

void hkpListAgent::getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                    hkpCdPointCollector &collector)
{
    staticGetClosestPoints(bodyA, bodyB, input, collector);
}

template void hkpSymmetricAgent<hkpListAgent>::getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                               const hkpCollisionInput &input,
                                                               hkpCdPointCollector &collector);
