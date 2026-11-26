// hkpBvAgent::hkpBvAgent (Physics/Collide/Agent/CompoundAgent/BvTree... /Bv/hkpBvAgent.cpp): creates the agent for
// the bounding volume shape of A against B through the dispatcher (hkpCollisionDispatcher::getNewCollisionAgent,
// inlined: the 32x32 agent type tables at +0x1A0 / +0x5A0 (predictive), the 0x14-byte AgentFuncs at +0x9A0).
#include "havok/hkBase.h"
#include "havok/hkpCollisionAgent.h"
#include "havok/hkpCollisionDispatcher.h"

#define HK_INVALID_SHAPE_KEY 0xffffffff

class hkpBvShape : public hkpShape {
public:
    const hkpShape *getBoundingVolumeShape() const { return m_boundingVolumeShape; }

    const hkpShape *m_boundingVolumeShape;   // +0x10
};

class hkpBvAgent : public hkpCollisionAgent {
public:
    hkpBvAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);

    hkpCollisionAgent *m_boundingVolumeAgent;   // +0xC
    hkpCollisionAgent *m_childAgent;            // +0x10
};

hkpBvAgent::hkpBvAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                       hkpContactMgr *mgr)
    : hkpCollisionAgent(mgr)
{
    const hkpBvShape *bvShape = static_cast<const hkpBvShape *>(bodyA.getShape());
    hkpCdBody newA(&bodyA);
    newA.setShape(bvShape->getBoundingVolumeShape(), HK_INVALID_SHAPE_KEY);
    m_boundingVolumeAgent = input.m_dispatcher->getNewCollisionAgent(newA, bodyB, input, mgr);
    m_childAgent = HK_NULL;
}
