// hkpPhantomAgent (Physics/Collide/Agent/MiscAgent/Phantom/hkpPhantomAgent.h), 0x24 bytes: the agent for a
// phantom callback shape on either side, which reports entering and leaving to the shape.
// The layout is the game's: the constructor (82D6A808) keeps both root collidables and both shape types, and
// createPhantomAgent (82D6A888, keeps its fn_ name) sets the shape pointers of the sides that are phantom
// callback shapes after calling phantomEnterEvent on them.
// Its vtable: +0xC 82D6A7B0, +0x10 82D6A7E8, +0x14 82D6A7F8, +0x18 82D6A7A8, +0x1C 82D6A718 (cleanup), then the
// empty function and hkpCollisionAgent's defaults; none is declared here.
// The member names follow Havok's header.
#ifndef HAVOK_HKPPHANTOMAGENT_H
#define HAVOK_HKPPHANTOMAGENT_H

#include "havok/hkpCollisionAgent.h"

class hkpCollidable;
class hkpPhantomCallbackShape;

class hkpPhantomAgent : public hkpCollisionAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    // Out of line (82D6A808); hkpPhantomAgent.cpp defines it next to createPhantomAgent, which calls it.
    hkpPhantomAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, hkpContactMgr *contactMgr);

    const hkpCollidable *m_collidableA;   // +0xC
    const hkpCollidable *m_collidableB;   // +0x10
    hkpPhantomCallbackShape *m_shapeA;    // +0x14
    hkpPhantomCallbackShape *m_shapeB;    // +0x18
    hkpShapeType m_bodyTypeA;             // +0x1C
    hkpShapeType m_bodyTypeB;             // +0x20
};

#endif
