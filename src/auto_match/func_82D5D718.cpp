// A flipped linearCast (hkpSymmetricAgent's, havok/hkpSymmetricAgent.h) under its fn_ name: negates the cast
// path, wraps the collectors so that the results come back flipped, and forwards to fn_82D5C4B0 with the
// bodies swapped.
#include "havok/hkpSymmetricAgent.h"

extern "C" void fn_82D5C4B0(const hkpCdBody *, const hkpCdBody *, hkpLinearCastCollisionInput *, hkpCdPointCollector *,
                            hkpCdPointCollector *);
extern "C" void fn_82D5D718(void *self, const hkpCdBody *a, const hkpCdBody *b, const hkpLinearCastCollisionInput *input,
                            hkpCdPointCollector *collector, hkpCdPointCollector *start)
{
    hkpLinearCastCollisionInput copy = *input;
    copy.m_path.setNeg4(input->m_path);
    hkpSymmetricAgentFlipCastCollector flipped(input->m_path, *collector);

    if (start) {
        hkpSymmetricAgentFlipCastCollector flippedStart(input->m_path, *start);
        fn_82D5C4B0(b, a, &copy, &flipped, &flippedStart);
        return;
    }
    fn_82D5C4B0(b, a, &copy, &flipped, 0);
}
