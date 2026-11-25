// hkpSymmetricAgent<hkpShapeCollectionAgent>::getPenetrations (Physics/Collide/Agent/CompoundAgent/ShapeCollection/hkpShapeCollectionAgent.cpp): flips the bodies (and the collector's
// results) and calls hkpShapeCollectionAgent::getPenetrations, out of line (fn_82D6C2B0).
#include "havok/hkpSymmetricAgent.h"

extern "C" void fn_82D6C2B0(hkpCollisionAgent *self, const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);   // hkpShapeCollectionAgent::getPenetrations

class hkpShapeCollectionAgent : public hkpCollisionAgent {
public:
    hkpShapeCollectionAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector)
    {
        fn_82D6C2B0(this, bodyA, bodyB, input, collector);
    }
};

template void hkpSymmetricAgent<hkpShapeCollectionAgent>::getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
