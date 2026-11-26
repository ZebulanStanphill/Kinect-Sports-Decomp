// hkpReportContactMgr (Physics/Dynamics/Collide/ContactListener/Util/hkpReportContactMgr.h), 0x1C bytes: a contact
// manager that only reports the contacts of a pair of rigid bodies to the listeners, and its nested Factory (0xC
// bytes). The layout is the constructor's (82DAB050: the type TYPE_REPORT_CONTACT_MGR, the world at +0xC, the
// bodies at +0x10 and +0x14 and the smaller contact point callback delay of the two bodies at +0x18) and the
// factory's (82DAB520: the world at +0x8). Both constructors are out of line (??0 symbols); the manager's is also
// inlined into Factory::createContactMgr (82DAB540), which defines it inline itself. The destructor is implicit
// (slot 0 of ??_7hkpReportContactMgr@@6B@ is a deleting destructor folded with hkpShape's). The vtable's other
// slots override hkpContactMgr's functions, which hkpContactMgr.h does not declare (82DAB098, 82DAB3A8, 82DAB5E0,
// 82DAB220, 82DAB310, 82DAB6E8, 82DAB438, among folded ones). The member names follow Havok's header.
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
