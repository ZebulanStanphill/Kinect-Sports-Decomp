// hkpConvexListAgent::hkpConvexListAgent(const hkpCdBody &, const hkpCdBody &, const hkpCollisionInput &,
// hkpContactMgr *) (Physics/Collide/Agent/Deprecated/ConvexList/hkpConvexListAgent.cpp), /O2: hkpPredGskfAgent's
// part (hkpGskfAgent's constructor, out of line), the vtable, the dispatcher, the mode flags, then the GSK cache
// (hkpGskCache::init, fn_82DD9828) for the bodies' relative transform, and -1 for the separating normal's
// distance and its time. The agent factories 82D5C608, 82D5CD78 and 82D5CF10 call it.
#include "havok/hkpCollisionAgent.h"
#include "havok/hkpGskCache.h"

// hkpGskfAgent (: hkpGskBaseAgent : hkpCollisionAgent), 0x80 bytes; its constructor is out of line.
class hkpGskfAgent : public hkpCollisionAgent {
public:
    hkpGskfAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, hkpContactMgr *mgr);

    hkpGskCache m_cache;                 // +0xC
    hkReal m_timeOfSeparatingNormal;     // +0x18
    hkUint32 m_pad1C;                    // +0x1C
    hkVector4 m_separatingNormal;        // +0x20
    hkUint8 m_data30[0x80 - 0x30];       // +0x30
};

class hkpPredGskfAgent : public hkpGskfAgent {
public:
    hkpPredGskfAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, hkpContactMgr *mgr) : hkpGskfAgent(bodyA, bodyB, mgr) {}
};

class hkpConvexListAgent : public hkpPredGskfAgent {
public:
    hkpConvexListAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);

    hkpCollisionDispatcher *m_dispatcher;   // +0x80
    hkBool m_inGskMode;                     // +0x84
    hkBool m_processFunctionCalled;         // +0x85
};

hkpConvexListAgent::hkpConvexListAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                       hkpContactMgr *mgr)
    : hkpPredGskfAgent(bodyA, bodyB, mgr)
{
    m_dispatcher = input.m_dispatcher;
    m_inGskMode = true;
    m_processFunctionCalled = false;
    {
        const hkpConvexShape *shapeA = static_cast<const hkpConvexShape *>(bodyA.getShape());
        const hkpConvexShape *shapeB = static_cast<const hkpConvexShape *>(bodyB.getShape());
        hkTransform t;
        t.setMulInverseMul(bodyA.getTransform(), bodyB.getTransform());
        m_cache.init(shapeA, shapeB, t);
        m_separatingNormal(3) = -1.0f;
        m_timeOfSeparatingNormal = -1.0f;
    }
}
