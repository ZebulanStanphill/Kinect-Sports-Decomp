// hkpSymmetricAgent<hkpListAgent>::linearCast (virtual, Physics/Collide/Agent/Util/Symmetric/hkpSymmetricAgent.inl):
// flips the bodies, negates the cast path and wraps the collectors so that the results come back flipped, then
// forwards to hkpListAgent's linear cast, which is hkpSymmetricAgent<hkpShapeCollectionAgent>::staticLinearCast
// (fn_82D5D320, keeps its fn_ name: it is Matching). The compiler inlines that function into the branch without a
// start collector only, so it is defined here (as an inline extern "C" function) as well as called.
#include "havok/hkpSymmetricAgent.h"

extern "C" {
// hkpShapeCollectionAgent::staticLinearCast
void fn_82D6C100(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                 hkpCdPointCollector &collector, hkpCdPointCollector *startCollector);

// hkpSymmetricAgent<hkpShapeCollectionAgent>::staticLinearCast
inline void fn_82D5D320(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                        hkpCdPointCollector &collector, hkpCdPointCollector *startCollector)
{
    hkpLinearCastCollisionInput flippedInput = input;
    flippedInput.m_path.setNeg4(input.m_path);
    hkpSymmetricAgentFlipCastCollector flipCollector(input.m_path, collector);
    if (startCollector) {
        hkpSymmetricAgentFlipCastCollector startFlipCollector(input.m_path, *startCollector);
        fn_82D6C100(bodyB, bodyA, flippedInput, flipCollector, &startFlipCollector);
    } else {
        fn_82D6C100(bodyB, bodyA, flippedInput, flipCollector, HK_NULL);
    }
}
}

class hkpListAgent : public hkpCollisionAgent {
public:
    static void HK_CALL staticLinearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                         const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector,
                                         hkpCdPointCollector *startCollector)
    {
        fn_82D5D320(bodyA, bodyB, input, collector, startCollector);
    }
    virtual void linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                            hkpCdPointCollector &collector, hkpCdPointCollector *startCollector)
    {
        staticLinearCast(bodyA, bodyB, input, collector, startCollector);
    }
};

template void hkpSymmetricAgent<hkpListAgent>::linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector, hkpCdPointCollector *startCollector);
