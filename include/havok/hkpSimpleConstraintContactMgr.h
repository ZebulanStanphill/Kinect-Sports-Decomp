// hkpSimpleConstraintContactMgr (Physics/Dynamics/Collide/hkpSimpleConstraintContactMgr.h), 0x80 bytes: the
// contact manager of a pair of rigid bodies whose contacts the solver handles, through a contact constraint
// (m_constraint) on its own hkpSimpleContactConstraintData.
// Layout from the constructor (??0hkpSimpleConstraintContactMgr@@QAA@PAVhkpWorld@@PAVhkpRigidBody@@1@Z, 82DAC350:
// the world at +0xC, the two 16-bit counters at +0x10 and +0x12, the data at +0x14 built for the instance at +0x44)
// and the destructor (??1, 82DAC420). Factory::createContactMgr (fn_82DAC4A0) allocates 0x80 bytes, so the class
// ends with four bytes no unit names (m_pad7C). The vtable (??_7hkpSimpleConstraintContactMgr@@6B@, 19 slots)
// overrides hkpContactMgr's seven slots and, from +0x28, hkpDynamicsContactMgr's nine, which are not named. The names follow Havok's header.
//
// Factory (??_7Factory@hkpSimpleConstraintContactMgr@@6B@): the hkpContactMgrFactory the world registers for
// pairs of rigid bodies (82D80DF0); the constructor (82DAC0B0) is out of line, createContactMgr is fn_82DAC4A0.
#ifndef HAVOK_HKPSIMPLECONSTRAINTCONTACTMGR_H
#define HAVOK_HKPSIMPLECONSTRAINTCONTACTMGR_H

#include "havok/hkBase.h"
#include "havok/hkpDynamicsContactMgr.h"
#include "havok/hkpContactMgrFactory.h"
#include "havok/hkpConstraintInstance.h"
#include "havok/hkpSimpleContactConstraintData.h"

class hkpWorld;
class hkpRigidBody;

class hkpSimpleConstraintContactMgr : public hkpDynamicsContactMgr {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpSimpleConstraintContactMgr(hkpWorld *world, hkpRigidBody *bodyA, hkpRigidBody *bodyB);
    virtual ~hkpSimpleConstraintContactMgr();
    virtual hkUint16 addContactPoint(const hkpCdBody &a, const hkpCdBody &b, const hkpProcessCollisionInput &input,
                                     hkpProcessCollisionOutput &output, const hkpGskCache *contactCache,
                                     hkContactPoint &cp);   // 82DABA88
    virtual hkResult reserveContactPoints(int numPoints);   // 82DAB710
    virtual void removeContactPoint(hkUint16 cpId, hkpConstraintOwner &constraintOwner);   // 82DABF58
    virtual void processContact(const hkpCollidable &a, const hkpCollidable &b, const hkpProcessCollisionInput &input,
                                hkpProcessCollisionData &collisionData);   // 82DAC0D0
    virtual ToiAccept addToi(const hkpCdBody &a, const hkpCdBody &b, const hkpProcessCollisionInput &input,
                             hkpProcessCollisionOutput &output, hkReal toi, hkContactPoint &cp,
                             const hkpGskCache *gskCache, hkReal &projectedVelocity,
                             hkpContactPointProperties &propertiesOut);   // 82DAB970
    virtual void removeToi(hkpConstraintOwner &constraintOwner, hkpContactPointProperties &properties);   // 82DAB758
    virtual void cleanup();   // 82DAB6E8

    class Factory : public hkpContactMgrFactory {
    public:
        HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
        Factory(hkpWorld *mgr);
        virtual hkpContactMgr *createContactMgr(const hkpCollidable &a, const hkpCollidable &b,
                                                const hkpCollisionInput &env);   // fn_82DAC4A0

        hkpWorld *m_world;   // +0x8
    };

    hkpWorld *m_world;                                         // +0xC
    hkUint16 m_skipNextNprocessCallbacks;                      // +0x10
    hkUint16 m_reservedContactPoints;                          // +0x12
    hkpSimpleContactConstraintData m_contactConstraintData;    // +0x14
    hkpConstraintInstance m_constraint;                        // +0x44
    hkUint32 m_pad7C;                                          // +0x7C
};

#endif
