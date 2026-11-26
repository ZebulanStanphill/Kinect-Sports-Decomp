// hkpSimpleConstraintContactMgr (Physics/Dynamics/Collide/hkpSimpleConstraintContactMgr.h), 0x80 bytes: the
// contact manager of a pair of rigid bodies whose contacts the solver handles, through a contact constraint
// (m_constraint) on its own hkpSimpleContactConstraintData.
// Layout from the constructor (??0hkpSimpleConstraintContactMgr@@QAA@PAVhkpWorld@@PAVhkpRigidBody@@1@Z, 82DAC350:
// the world at +0xC, the two 16-bit counters at +0x10 and +0x12, the data at +0x14 built for the instance at +0x44)
// and the destructor (??1, 82DAC420). Factory::createContactMgr (fn_82DAC4A0) allocates 0x80 bytes, so the class
// ends with four bytes no unit names (m_pad7C). The vtable (??_7hkpSimpleConstraintContactMgr@@6B@, 19 slots)
// overrides hkpContactMgr's slots, which hkpContactMgr.h does not declare. The names follow Havok's header.
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
