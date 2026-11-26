// hkpSphereBoxAgent (Physics/Collide/Agent/ConvexAgent/SphereBox/hkpSphereBoxAgent.h), 0x10 bytes: an
// hkpIterativeLinearCastAgent (RTTI) with one contact point id.
// The constructor has no symbol: both creation functions (82D64480, 82D64558) inline it (the id is set to
// HK_INVALID_CONTACT_POINT after the base). Its vtable: +0xC getPenetrations (82D64738), +0x10 getClosestPoints
// (82D64AF0), +0x14 hkpIterativeLinearCastAgent's linearCast (82D75CB0), +0x18 82D64750, +0x1C 82D644F0, then the
// empty function and hkpCollisionAgent's defaults. getClosestPoints is a wrapper (82D652C0 calls it out of line);
// getPenetrations only calls the static function and is inlined where it is defined (82D65230), so it is declared
// out of line. The static queries keep fn_ names.
// The member name follows Havok's header.
#ifndef HAVOK_HKPSPHEREBOXAGENT_H
#define HAVOK_HKPSPHEREBOXAGENT_H

#include "havok/hkpIterativeLinearCastAgent.h"

// Havok's hkContactPointId and its invalid value (also declared by the other agent headers that need them).
typedef hkUint16 hkContactPointId;
#ifndef HK_INVALID_CONTACT_POINT
#define HK_INVALID_CONTACT_POINT 0xffff
#endif

class hkpSphereBoxAgent;

extern "C" {
void fn_82D645C8(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                 hkpCdBodyPairCollector &collector);   // hkpSphereBoxAgent::staticGetPenetrations
void fn_82D64E28(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                 hkpCdPointCollector &collector);   // hkpSphereBoxAgent::staticGetClosestPoints
// hkpSphereBoxAgent::getClosestPoints
void fn_82D64AF0(hkpSphereBoxAgent *self, const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                 const hkpCollisionInput &input, hkpCdPointCollector &collector);
}

class hkpSphereBoxAgent : public hkpIterativeLinearCastAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpSphereBoxAgent(hkpContactMgr *mgr) : hkpIterativeLinearCastAgent(mgr) { m_contactPointId = HK_INVALID_CONTACT_POINT; }

    static hkpCollisionAgent *HK_CALL createSphereBoxAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                           const hkpCollisionInput &input, hkpContactMgr *mgr);
    static hkpCollisionAgent *HK_CALL createBoxSphereAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                           const hkpCollisionInput &input, hkpContactMgr *mgr);
    static void HK_CALL staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                             const hkpCollisionInput &input, hkpCdBodyPairCollector &collector)
    {
        fn_82D645C8(bodyA, bodyB, input, collector);
    }
    static void HK_CALL staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                              const hkpCollisionInput &input, hkpCdPointCollector &collector)
    {
        fn_82D64E28(bodyA, bodyB, input, collector);
    }

    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                  hkpCdPointCollector &collector)
    {
        fn_82D64AF0(this, bodyA, bodyB, input, collector);
    }
    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                 hkpCdBodyPairCollector &collector);   // fn_82D64738

    hkContactPointId m_contactPointId;   // +0xC
};

#endif
