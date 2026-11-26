// Havok's collision agents (Physics/Collide/Agent/hkpCollisionAgent.h). Hierarchy from the RTTI:
// the agents derive from hkpCollisionAgent (some through hkpIterativeLinearCastAgent), which
// derives from hkReferencedObject. The first five virtual functions are known from the
// hkpSymmetricAgent<..> slots that flip the bodies: +0xC getPenetrations, +0x10 getClosestPoints,
// +0x14 linearCast, +0x18 processCollision, +0x1C cleanup.
// Every agent's vtable has 14 slots. The six after cleanup are placed by what the overrides do:
//   +0x20 the shared empty function 82BA02A8 in the agents without child agents; hkpTransformAgent's
//         (82D6B2D8) takes two bodies and two more arguments, builds body A's child body with the
//         transform shape's transform and forwards to its child's +0x20: updateShapeCollectionFilter.
//         Inline, since the default is a folded copy.
//   +0x24 hkpGskBaseAgent's (82D74A38) resets its separating normal and its time to -1: invalidateTim.
//   +0x28 hkpGskBaseAgent's (82D74A58) takes two floats and replaces the stored time when it equals the
//         first: warpTime.
//   +0x2C hkpGskfAgent's (82D75710) takes a 16-bit id and removes the manifold point that has it:
//         removePoint. +0x30 and +0x34 take ids the same way: commitPotential and createZombie.
// The defaults of +0x24 to +0x34 are five empty functions of their own in a row (82D746F0, 82D746F8,
// 82D74700, 82D74708, 82D74710; hkpNullAgent has all five), so they are out of line. The order is
// the one of Havok's header, and the names and parameter names are Havok's.
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

// Havok's hkContactPointId and its invalid value, and hkTime (Havok's typedefs; the agents store the ids
// as 16-bit words and compare the times as floats).
typedef hkUint16 hkContactPointId;
#ifndef HK_INVALID_CONTACT_POINT
#define HK_INVALID_CONTACT_POINT 0xffff
#endif
typedef hkReal hkTime;

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
    virtual void updateShapeCollectionFilter(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                             const hkpCollisionInput &input,
                                             hkCollisionConstraintOwner &constraintOwner) {}   // +0x20
    virtual void invalidateTim(const hkpCollisionInput &input);                         // +0x24
    virtual void warpTime(hkTime oldTime, hkTime newTime, const hkpCollisionInput &input);   // +0x28
    virtual void removePoint(hkContactPointId idToRemove);                              // +0x2C
    virtual void commitPotential(hkContactPointId newId);                               // +0x30
    virtual void createZombie(hkContactPointId idTobeZombified);                        // +0x34

    hkpContactMgr *m_contactMgr;   // +0x8
};

#endif
