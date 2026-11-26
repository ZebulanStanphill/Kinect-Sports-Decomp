#include "havok/hkBase.h"
#include "havok/hkpSymmetricAgent.h"
extern "C" void fn_82D5A348(const hkpCdBody &, const hkpCdBody &, const hkpLinearCastCollisionInput &,
                            hkpCdPointCollector &, hkpCdPointCollector *);
extern "C" void fn_82D5B050(void *self, const hkpCdBody &a, const hkpCdBody &b, const hkpLinearCastCollisionInput &input,
                            hkpCdPointCollector &collector, hkpCdPointCollector *start)
{
    hkpLinearCastCollisionInput copy = input;
    copy.m_path.setNeg4(input.m_path);
    hkpSymmetricAgentFlipCastCollector flipped(input.m_path, collector);

    if (start) {
        hkpSymmetricAgentFlipCastCollector flippedStart(input.m_path, *start);
        fn_82D5A348(b, a, copy, flipped, &flippedStart);
        return;
    }
    fn_82D5A348(b, a, copy, flipped, 0);
}
