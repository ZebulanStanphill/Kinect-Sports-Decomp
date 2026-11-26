// hkpReportContactMgr::hkpReportContactMgr(hkpWorld *, hkpRigidBody *, hkpRigidBody *) (Physics/Dynamics/Collide/ContactListener/Util/hkpReportContactMgr.cpp).
#include "havok/hkBase.h"
#include "havok/hkpRigidBody.h"
#include "havok/hkpReportContactMgr.h"

class hkMath {
public:
    template <typename T>
    static HK_FORCE_INLINE T HK_CALL min2(T a, T b) { return a < b ? a : b; }
};

hkpReportContactMgr::hkpReportContactMgr(hkpWorld *world, hkpRigidBody *bodyA, hkpRigidBody *bodyB)
    : hkpDynamicsContactMgr(hkpContactMgr::TYPE_REPORT_CONTACT_MGR)
{
    m_skipNextNprocessCallbacks = hkMath::min2(bodyA->getContactPointCallbackDelay(), bodyB->getContactPointCallbackDelay());
    m_world = world;
    m_bodyA = bodyA;
    m_bodyB = bodyB;
}
