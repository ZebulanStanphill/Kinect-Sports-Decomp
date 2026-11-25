// Havok's collision agents (Physics/Collide/Agent/hkpCollisionAgent.h). Hierarchy from the RTTI:
// the agents derive from hkpCollisionAgent (some through hkpIterativeLinearCastAgent), which
// derives from hkReferencedObject. The vtable is known from the hkpSymmetricAgent<..> slots that
// flip the bodies: +0xC getPenetrations, +0x10 getClosestPoints, +0x14 linearCast,
// +0x18 processCollision, +0x1C cleanup.
// The creation functions are statics of each agent, defined in its .cpp next to registerAgent
// (which registers them, for example fn_82D6EC40 registers fn_82D6EBD0 with
// hkpSymmetricAgent<hkpBvAgent>'s statics).
#ifndef HAVOK_HKPCOLLISIONAGENT_H
#define HAVOK_HKPCOLLISIONAGENT_H

#include "havok/hkBase.h"
#include "havok/hkpCdBody.h"
#include "havok/hkpCollisionInput.h"
#include "havok/hkpCdBodyPairCollector.h"
#include "havok/hkpCdPointCollector.h"

class hkpContactMgr;
class hkpConstraintOwner;
typedef hkpConstraintOwner hkCollisionConstraintOwner;
struct hkpProcessCollisionInput;
struct hkpProcessCollisionOutput;

class hkpCollisionAgent : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpCollisionAgent(hkpContactMgr *contactMgr) : m_contactMgr(contactMgr) {}
    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                 hkpCdBodyPairCollector &collector);   // +0xC
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                  hkpCdPointCollector &collector);   // +0x10
    virtual void linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                            hkpCdPointCollector &collector, hkpCdPointCollector *startCollector);   // +0x14
    virtual void processCollision(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpProcessCollisionInput &input,
                                  hkpProcessCollisionOutput &result);   // +0x18
    virtual void cleanup(hkCollisionConstraintOwner &constraintOwner);   // +0x1C

    hkpContactMgr *m_contactMgr;   // +0x8
};

#endif
