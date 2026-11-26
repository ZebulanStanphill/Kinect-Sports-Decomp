// hkpReportContactMgr::Factory::createContactMgr (Physics/Dynamics/Collide/ContactListener/Util/hkpReportContactMgr.cpp): the owners of the two collidables, then new with the constructor inlined (defined inline here).
#include "havok/hkBase.h"
#include "havok/hkpRigidBody.h"
#include "havok/hkpReportContactMgr.h"

class hkMath {
public:
    template <typename T>
    static HK_FORCE_INLINE T HK_CALL min2(T a, T b) { return a < b ? a : b; }
};

inline hkpReportContactMgr::hkpReportContactMgr(hkpWorld *world, hkpRigidBody *bodyA, hkpRigidBody *bodyB)
    : hkpDynamicsContactMgr(hkpContactMgr::TYPE_REPORT_CONTACT_MGR)
{
    m_skipNextNprocessCallbacks = hkMath::min2(bodyA->getContactPointCallbackDelay(), bodyB->getContactPointCallbackDelay());
    m_world = world;
    m_bodyA = bodyA;
    m_bodyB = bodyB;
}

hkpContactMgr *hkpReportContactMgr::Factory::createContactMgr(const hkpCollidable &a, const hkpCollidable &b,
                                                               const hkpCollisionInput &env)
{
    hkpRigidBody *bodyA = static_cast<hkpRigidBody *>(a.getOwner());
    hkpRigidBody *bodyB = static_cast<hkpRigidBody *>(b.getOwner());
    hkpReportContactMgr *mgr = new hkpReportContactMgr(m_world, bodyA, bodyB);
    return mgr;
}
