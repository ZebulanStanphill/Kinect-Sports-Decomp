// hkpBoxBoxAgent::createBoxBoxAgent (Physics/Collide/Agent/ConvexAgent/BoxBox/hkpBoxBoxAgent.cpp): the box-box
// agent when the tolerance is small against both boxes, otherwise the generic convex agent
// (fn_82D75830, hkpGskfAgent's create function, which keeps its fn_ name). The agent is allocated with the
// class allocator (no null check) and its constructor is inlined; the manifold's constructor is out of line
// (hkpBoxBoxManifold::hkpBoxBoxManifold, 82D781D0).
#include "havok/hkBase.h"
#include "havok/hkpBoxShape.h"
#include "havok/hkpBoxBoxAgent.h"

extern "C" const float lbl_8213962C;

extern "C" hkpCollisionAgent *fn_82D75830(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                          const hkpCollisionInput &input, hkpContactMgr *mgr);

hkpCollisionAgent *HK_CALL hkpBoxBoxAgent::createBoxBoxAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                            const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    const hkpBoxShape *boxA = static_cast<const hkpBoxShape *>(bodyA.getShape());
    const hkpBoxShape *boxB = static_cast<const hkpBoxShape *>(bodyB.getShape());

    if (input.m_tolerance < boxA->m_halfExtents(3) * lbl_8213962C &&
        input.m_tolerance < boxB->m_halfExtents(3) * lbl_8213962C) {
        hkpBoxBoxAgent *agent = new hkpBoxBoxAgent(mgr);
        return agent;
    }
    return fn_82D75830(bodyA, bodyB, input, mgr);
}
