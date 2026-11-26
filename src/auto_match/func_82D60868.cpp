// hkpMultiRayConvexAgent::hkpMultiRayConvexAgent
// (Physics/Collide/Agent/MiscAgent/MultirayConvex/hkpMultiRayConvexAgent.cpp): one contact point id per ray of
// the multi-ray shape A, all invalid.
#include "havok/hkpMultiRayConvexAgent.h"
#include "havok/hkpMultiRayShape.h"

hkpMultiRayConvexAgent::hkpMultiRayConvexAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                               const hkpCollisionInput &input, hkpContactMgr *mgr)
    : hkpIterativeLinearCastAgent(mgr)
{
    const hkpMultiRayShape *msA = static_cast<const hkpMultiRayShape *>(bodyA.getShape());
    int nRay = msA->getRays().getSize();
    m_contactInfo.setSize(nRay);
    for (int i = 0; i < nRay; i++)
        m_contactInfo[i].m_contactPointId = HK_INVALID_CONTACT_POINT;
}
