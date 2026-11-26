// hkpMoppAgent::createBvBvAgent (Physics/Collide/Agent/CompoundAgent/BvTree/hkpMoppAgent.cpp): for two MOPP
// shapes, the agent walks the bigger MOPP; when the first body's code is not the smaller one it is wrapped in
// hkpSymmetricAgent. Both agents are allocated with the class allocator (no null check); the hkpMoppAgent
// constructor is inlined around hkpBvTreeAgent's (out of line, fn_82D56088).
#include "havok/hkBase.h"
#include "havok/hkpMoppAgent.h"
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpMoppBvTreeShape.h"

// The constructor is defined in this file (out of line, 82D556A0), so the compiler inlines it here.
hkpMoppAgent::hkpMoppAgent(hkpContactMgr *mgr) : hkpBvTreeAgent(mgr)
{
}

hkpCollisionAgent *HK_CALL hkpMoppAgent::createBvBvAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                        const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    const hkpMoppBvTreeShape *bvA = static_cast<const hkpMoppBvTreeShape *>(bodyA.getShape());
    const hkpMoppBvTreeShape *bvB = static_cast<const hkpMoppBvTreeShape *>(bodyB.getShape());

    int sizeA = bvA->getMoppCode()->m_data.getSize();
    int sizeB = bvB->getMoppCode()->m_data.getSize();

    if (sizeA < sizeB) {
        hkpCollisionAgent *agent = new hkpMoppAgent(mgr);
        return agent;
    } else {
        hkpCollisionAgent *agent = new hkpSymmetricAgent<hkpMoppAgent>(mgr);
        return agent;
    }
}
