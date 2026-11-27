// hkpHeightFieldAgent::linearCast (+0x14 of ??_7hkpHeightFieldAgent@@6B@): the static query.
#include "havok/hkpHeightFieldAgent.h"

void hkpHeightFieldAgent::linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                     const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector,
                                     hkpCdPointCollector *startCollector)
{
    staticLinearCast(bodyA, bodyB, input, collector, startCollector);
}
