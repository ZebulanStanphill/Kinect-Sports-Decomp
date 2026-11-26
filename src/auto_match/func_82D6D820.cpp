// static hkpSymmetricAgent<hkpMultiSphereAgent>::staticLinearCast: flips the bodies, negates the cast path and wraps
// the collectors so that the results come back flipped, then forwards to hkpMultiSphereAgent's function.
// It keeps its fn_ name (the Matching registerAgent unit takes its address), so the body of the template's
// static (havok/hkpSymmetricAgent.h) is written out in an extern "C" function with that name.
#include "havok/hkpSymmetricAgent.h"

// fn_82D6D088 is hkpMultiSphereAgent::staticLinearCast.
extern "C" {
void fn_82D6D088(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                 hkpCdPointCollector &collector, hkpCdPointCollector *startCollector);
}

extern "C" void fn_82D6D820(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                            hkpCdPointCollector &collector, hkpCdPointCollector *startCollector)
{
    hkpLinearCastCollisionInput flippedInput = input;
    flippedInput.m_path.setNeg4(input.m_path);
    hkpSymmetricAgentFlipCastCollector flipCollector(input.m_path, collector);
    if (startCollector) {
        hkpSymmetricAgentFlipCastCollector startFlipCollector(input.m_path, *startCollector);
        fn_82D6D088(bodyB, bodyA, flippedInput, flipCollector, &startFlipCollector);
    } else {
        fn_82D6D088(bodyB, bodyA, flippedInput, flipCollector, HK_NULL);
    }
}
