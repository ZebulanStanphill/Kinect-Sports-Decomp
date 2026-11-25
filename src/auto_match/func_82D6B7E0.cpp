// hkpSymmetricAgent<hkpTransformAgent>::getClosestPoints (virtual): flips the bodies and the collector, with hkpTransformAgent::getClosestPoints
// inlined (transform A's body by the shape's transform, then ask the child agent).
#include "havok/hkpSymmetricAgent.h"

class hkpTransformShape : public hkpShape {
public:
    const hkpShape *getChildShape() const { return m_childShape.m_childShape; }
    const hkTransform &getTransform() const { return m_transform; }

    hkpSingleShapeContainer m_childShape;   // +0x10
    int m_childShapeSize;                   // +0x18
    hkVector4 m_rotation;                   // +0x20
    hkTransform m_transform;                // +0x30
};

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
