// hkpReportContactMgr (Physics/Dynamics/Collide/ContactListener/Util/hkpReportContactMgr.h), 0x1C bytes: a contact
// manager that only reports the contacts of a pair of rigid bodies to the listeners, and its nested Factory (0xC
// bytes). The layout is the constructor's (82DAB050: the type TYPE_REPORT_CONTACT_MGR, the world at +0xC, the
// bodies at +0x10 and +0x14 and the smaller contact point callback delay of the two bodies at +0x18) and the
// factory's (82DAB520: the world at +0x8). Both constructors are out of line (??0 symbols); the manager's is also
// inlined into Factory::createContactMgr (82DAB540), which defines it inline itself. The destructor is implicit
// (slot 0 of ??_7hkpReportContactMgr@@6B@ is a deleting destructor folded with hkpShape's). The vtable's other
// slots override hkpContactMgr's seven functions and, from +0x28, hkpDynamicsContactMgr's nine, which are not
// named (82DAB438 at +0x48, the others folded). The member names follow Havok's header.
#ifndef HAVOK_HKPREPORTCONTACTMGR_H
#define HAVOK_HKPREPORTCONTACTMGR_H

#include "havok/hkBase.h"
#include "havok/hkpContactMgrFactory.h"
#include "havok/hkpDynamicsContactMgr.h"

class hkpRigidBody;
class hkpWorld;

class hkpReportContactMgr : public hkpDynamicsContactMgr {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpReportContactMgr(hkpWorld *world, hkpRigidBody *bodyA, hkpRigidBody *bodyB);
    virtual hkUint16 addContactPoint(const hkpCdBody &a, const hkpCdBody &b, const hkpProcessCollisionInput &input,
                                     hkpProcessCollisionOutput &output, const hkpGskCache *contactCache,
                                     hkContactPoint &cp);   // 82DAB098
    virtual hkResult reserveContactPoints(int numPoints);   // returns 0 (folded)
    virtual void removeContactPoint(hkUint16 cpId, hkpConstraintOwner &constraintOwner);   // 82DAB3A8
    virtual void processContact(const hkpCollidable &a, const hkpCollidable &b, const hkpProcessCollisionInput &input,
                                hkpProcessCollisionData &collisionData);   // 82DAB5E0
    virtual ToiAccept addToi(const hkpCdBody &a, const hkpCdBody &b, const hkpProcessCollisionInput &input,
                             hkpProcessCollisionOutput &output, hkReal toi, hkContactPoint &cp,
                             const hkpGskCache *gskCache, hkReal &projectedVelocity,
                             hkpContactPointProperties &propertiesOut);   // 82DAB220
    virtual void removeToi(hkpConstraintOwner &constraintOwner, hkpContactPointProperties &properties);   // 82DAB310
    virtual void cleanup();   // 82DAB6E8

    class Factory : public hkpContactMgrFactory {
    public:
        HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
        Factory(hkpWorld *mgr);
        virtual hkpContactMgr *createContactMgr(const hkpCollidable &a, const hkpCollidable &b,
                                                const hkpCollisionInput &env);   // 82DAB540

        hkpWorld *m_world;   // +0x8
    };

    hkpWorld *m_world;                       // +0xC
    hkpRigidBody *m_bodyA;                   // +0x10
    hkpRigidBody *m_bodyB;                   // +0x14
    hkUint16 m_skipNextNprocessCallbacks;    // +0x18
};

#endif
