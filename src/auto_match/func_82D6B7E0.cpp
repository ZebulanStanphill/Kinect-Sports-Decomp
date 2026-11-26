// hkpSymmetricAgent<hkpTransformAgent>::getClosestPoints (virtual): flips the bodies and the collector, with hkpTransformAgent::getClosestPoints
// inlined (transform A's body by the shape's transform, then ask the child agent).
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpTransformShape.h"

class hkpTransformAgent : public hkpCollisionAgent {
public:
    hkpTransformAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                 hkpCdPointCollector &collector)
    {
        const hkpTransformShape *tShapeA = static_cast<const hkpTransformShape *>(bodyA.getShape());
        hkTransform t;
        t.setMul(bodyA.getTransform(), tShapeA->getTransform());
        hkpCdBody newA(&bodyA, &t);
        newA.setShape(tShapeA->getChildShape(), 0);
        m_childAgent->getClosestPoints(newA, bodyB, input, collector);
    }

    hkpCollisionAgent *m_childAgent;   // +0xC
};

template void hkpSymmetricAgent<hkpTransformAgent>::getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                                     const hkpCollisionInput &input,
                                                                     hkpCdPointCollector &collector);
