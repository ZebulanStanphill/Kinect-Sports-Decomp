// hkpGskfAgent (Physics/Collide/Agent/ConvexAgent/Gjk/hkpGskfAgent.h), 0x80 bytes: the GSK agent with a contact
// manifold, an hkpGskBaseAgent (RTTI; hkpPredGskfAgent derives from it). The manifold is at +0x30, to the end of
// the agent: the constructor (82D757E8) clears its first word after hkpGskBaseAgent's constructor, and
// removePoint/commitPotential/createZombie (82D75710, 82D75758, 82D757A0) search its contact point ids. The
// creation function 82D75830 allocates 0x80 (and the convex list agent at +0x80 starts after it).
// The constructor is out of line (??0hkpGskfAgent, 82D757E8); 82D75830 (its creation function, in the same file)
// inlines it, so its unit defines it, as the original file does.
// Its vtable (??_7hkpGskfAgent@@6B@): hkpGskBaseAgent's slots up to +0x14, +0x18 processCollision 82D75A10, +0x1C
// cleanup 82D756C0 (removes the manifold's points, fn_82DD77B0, then deletes the agent), +0x20 the empty function,
// +0x24/+0x28 hkpGskBaseAgent's invalidateTim and warpTime, +0x2C removePoint 82D75710, +0x30 commitPotential
// 82D75758, +0x34 createZombie 82D757A0. They are out of line; their names are the slots' (Havok's).
// The member name follows Havok's header.
#ifndef HAVOK_HKPGSKFAGENT_H
#define HAVOK_HKPGSKFAGENT_H

#include "havok/hkpGskBaseAgent.h"
#include "havok/hkpGskManifold.h"

class hkpGskfAgent : public hkpGskBaseAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpGskfAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, hkpContactMgr *mgr);

    virtual void processCollision(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpProcessCollisionInput &input,
                                  hkpProcessCollisionOutput &result);   // +0x18 (82D75A10)
    virtual void cleanup(hkCollisionConstraintOwner &constraintOwner);   // +0x1C (82D756C0)
    virtual void removePoint(hkContactPointId idToRemove);                // +0x2C (82D75710)
    virtual void commitPotential(hkContactPointId newId);                 // +0x30 (82D75758)
    virtual void createZombie(hkContactPointId idTobeZombified);          // +0x34 (82D757A0)

    hkpGskManifold m_manifold;   // +0x30
};

#endif
