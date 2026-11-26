// hkpReportContactMgr::Factory::createContactMgr (Physics/Dynamics/Collide/ContactListener/Util/hkpReportContactMgr.cpp): the owners of the two collidables, then new with the constructor inlined (defined inline here).
#include "havok/hkBase.h"
#include "havok/hkpRigidBody.h"
#include "havok/hkpDynamicsContactMgr.h"
#include "havok/hkpContactMgrFactory.h"

class hkMath {
public:
    template <typename T>
    static HK_FORCE_INLINE T HK_CALL min2(T a, T b) { return a < b ? a : b; }
};

// hkpReportContactMgr (Physics/Dynamics/Collide/ContactListener/Util/hkpReportContactMgr.h), 0x1C bytes.
class hkpReportContactMgr : public hkpDynamicsContactMgr {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpReportContactMgr(hkpWorld *world, hkpRigidBody *bodyA, hkpRigidBody *bodyB);

    class Factory : public hkpContactMgrFactory {
    public:
        HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
        Factory(hkpWorld *mgr);
        virtual hkpContactMgr *createContactMgr(const hkpCollidable &a, const hkpCollidable &b,
                                                const hkpCollisionInput &env);

        hkpWorld *m_world;   // +0x8
    };

    hkpWorld *m_world;                       // +0xC
    hkpRigidBody *m_bodyA;                   // +0x10
    hkpRigidBody *m_bodyB;                   // +0x14
    hkUint16 m_skipNextNprocessCallbacks;    // +0x18
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
