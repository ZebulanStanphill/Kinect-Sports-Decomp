#include "havok/hkBase.h"
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpHeightFieldAgent.h"
extern "C" void fn_82D5B050(void *self, const hkpCdBody &a, const hkpCdBody &b, const hkpLinearCastCollisionInput &input,
                            hkpCdPointCollector &collector, hkpCdPointCollector *start)
{
    hkpLinearCastCollisionInput copy = input;
    copy.m_path.setNeg4(input.m_path);
    hkpSymmetricAgentFlipCastCollector flipped(input.m_path, collector);

    if (start) {
        hkpSymmetricAgentFlipCastCollector flippedStart(input.m_path, *start);
        hkpHeightFieldAgent::staticLinearCast(b, a, copy, flipped, &flippedStart);
        return;
    }
    hkpHeightFieldAgent::staticLinearCast(b, a, copy, flipped, 0);
}
