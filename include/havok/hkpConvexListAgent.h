// hkpConvexListAgent (Physics/Collide/Agent/Deprecated/ConvexList/hkpConvexListAgent.h), 0x90 bytes: the agent
// for a convex list shape against a convex shape, an hkpPredGskfAgent (RTTI). The layout is the constructor's
// (82D5C050): hkpPredGskfAgent's part, the dispatcher at +0x80 and the two mode flags at +0x84 and +0x85, then
// the GSK cache is set up for the bodies' relative transform and the separating normal invalidated. The agent
// size (0x90, allocated by the factories 82D5C608, 82D5CD78 and 82D5CF10) is the 16-byte aligned end of the
// flags. In stream mode (m_inGskMode false) the bytes of hkpGskfAgent's manifold at +0x30 hold the agent track
// of the children instead: cleanup (82D5BF70) and 82D5BE88 pass +0x30 to the track functions (fn_82D70D40,
// fn_82D71668) then, and to the manifold's (fn_82DD77B0) in GSK mode. The member names follow Havok's header.
// The constructor is out of line (??0hkpConvexListAgent, 82D5C050).
// Its vtable (??_7hkpConvexListAgent@@6B@): +0x8 82D5BE88, +0xC getPenetrations 82D5C498, +0x10 getClosestPoints
// 82D5C340, +0x14 linearCast 82D5C5F0 (each only calls the static function), +0x18 processCollision 82D5C7F8,
// +0x1C cleanup 82D5BF70, then 82D5BFE0, 82D5BEA8, 82D5BEC0, 82D5BED8, 82D5BEF0, 82D5BF08.
// The virtual queries are inlined by hkpSymmetricAgent<hkpConvexListAgent>'s (82D5D688, 82D5D6D0) in the same
// file, so they are declared out of line and those units define them. The static queries (82D5C358, 82D5C0E0,
// 82D5C4B0) are the ones registerAgent (82D5D148) stores for the unflipped pairs.
#ifndef HAVOK_HKPCONVEXLISTAGENT_H
#define HAVOK_HKPCONVEXLISTAGENT_H

#include "havok/hkpPredGskfAgent.h"

class hkpCollisionDispatcher;


class hkpConvexListAgent : public hkpPredGskfAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpConvexListAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                       hkpContactMgr *mgr);

    static void HK_CALL staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                              const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);   // 82D5C358
    static void HK_CALL staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                               const hkpCollisionInput &input, hkpCdPointCollector &collector);   // 82D5C0E0
    static void HK_CALL staticLinearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                         const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector,
                                         hkpCdPointCollector *startCollector);   // 82D5C4B0

    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                 hkpCdBodyPairCollector &collector);   // 82D5C498
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                  hkpCdPointCollector &collector);   // 82D5C340
    virtual void linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                            hkpCdPointCollector &collector, hkpCdPointCollector *startCollector);   // 82D5C5F0

    hkpCollisionDispatcher *m_dispatcher;   // +0x80
    hkBool m_inGskMode;                     // +0x84
    hkBool m_processFunctionCalled;         // +0x85
};

#endif
