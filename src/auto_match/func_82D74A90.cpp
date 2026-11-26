// hkpGskBaseAgent::hkpGskBaseAgent(const hkpCdBody &, const hkpCdBody &, hkpContactMgr *) (hkpGskBaseAgent.cpp).
// Havok collision agents (Physics/Collide/Agent/hkpCollisionAgent.h, hkpIterativeLinearCastAgent.h,
// Agent/Util/Symmetric/hkpSymmetricAgent.h, hkpSymmetricAgentLinearCast.h, hkpSymmetricAgentFlip*Collector.h).
// Hierarchy from the RTTI: hkpSymmetricAgent<AGENT> and hkpSymmetricAgentLinearCast<AGENT> derive from AGENT;
// the agents derive from hkpCollisionAgent (some through hkpIterativeLinearCastAgent) -> hkReferencedObject.
// hkpCollisionAgent vtable, from the hkpSymmetricAgent<..> slots that flip the bodies: +0xC getPenetrations
// (hkpSymmetricAgentFlipBodyCollector), +0x10 getClosestPoints (hkpSymmetricAgentFlipCollector), +0x14
// linearCast (hkpSymmetricAgentFlipCastCollector), +0x18 processCollision, +0x1C cleanup.
// The static flipped functions (registered with the collision dispatcher) are hkpSymmetricAgent<AGENT>'s, also for
// the agents whose instances are hkpSymmetricAgentLinearCast<AGENT> (that template only overrides virtuals).
// The creation functions are statics of each agent, defined in its .cpp next to registerAgent (which registers
// them, for example fn_82D6EC40 registers fn_82D6EBD0 with hkpSymmetricAgent<hkpBvAgent>'s statics).
// The collectors are interfaces without base class and with Havok's non-virtual class allocator; their
// constructors call reset(), which sets m_earlyOut = false / m_earlyOutDistance = HK_REAL_MAX. The game's
// HK_REAL_MAX constant is __real@7f7fffee (3.40282e38f).
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpCollidable.h"
#include "havok/hkpGskCache.h"

// hkpGskBaseAgent -> hkpGskfAgent -> hkpPredGskfAgent (RTTI; Physics/Collide/Agent/ConvexAgent/Gjk).
// hkpGskBaseAgent's constructor is out of line (fn_82D74A90): it sets up the GSK cache from the relative
// transform (hkTransform::setMulInverseMul; hkpGskCache::initTriangle / init, fn_82DD9A10 / fn_82DD9828, which
// keep their fn_ names), invalidates the separating normal (w and time = -1.0f) and keeps
// the smaller allowed penetration depth of the two root collidables.
extern "C" double __fsel(double a, double b, double c);   // PPC intrinsic

struct hkMath {
    static HK_FORCE_INLINE hkReal HK_CALL min2(hkReal a, hkReal b) { return hkReal(__fsel(a - b, b, a)); }
};

class hkpGskBaseAgent : public hkpIterativeLinearCastAgent {
public:
    hkpGskBaseAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, hkpContactMgr *mgr);

    hkpGskCache m_cache;                 // +0xC
    hkReal m_timeOfSeparatingNormal;     // +0x18
    hkReal m_allowedPenetration;         // +0x1C
    hkVector4 m_separatingNormal;        // +0x20
};

hkpGskBaseAgent::hkpGskBaseAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, hkpContactMgr *mgr)
    : hkpIterativeLinearCastAgent(mgr)
{
    const hkpConvexShape *shapeA = static_cast<const hkpConvexShape *>(bodyA.getShape());
    const hkpConvexShape *shapeB = static_cast<const hkpConvexShape *>(bodyB.getShape());
    hkTransform aTb;
    aTb.setMulInverseMul(bodyA.getTransform(), bodyB.getTransform());
    if ((int)shapeB->m_type == HK_SHAPE_TRIANGLE)
        m_cache.initTriangle(shapeA, shapeB, aTb);
    else
        m_cache.init(shapeA, shapeB, aTb);
    hkReal invalid = -1.0f;
    m_separatingNormal.setZero4();
    m_separatingNormal(3) = invalid;
    m_timeOfSeparatingNormal = invalid;
    const hkpCollidable *rootA = static_cast<const hkpCollidable *>(bodyA.getRootCollidable());
    hkReal depthA = rootA->getAllowedPenetrationDepth();
    const hkpCollidable *rootB = static_cast<const hkpCollidable *>(bodyB.getRootCollidable());
    m_allowedPenetration = hkMath::min2(depthA, rootB->getAllowedPenetrationDepth());
}
