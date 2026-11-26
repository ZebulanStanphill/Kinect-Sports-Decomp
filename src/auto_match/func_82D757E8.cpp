// hkpGskfAgent::hkpGskfAgent(const hkpCdBody &, const hkpCdBody &, hkpContactMgr *)
// (Physics/Collide/Agent/ConvexAgent/Gjk/hkpGskfAgent.cpp): hkpGskBaseAgent's constructor (out of line,
// fn_82D74A90), then the manifold member is constructed (one word cleared at +0x30). Hierarchy from the RTTI:
// hkpGskfAgent -> hkpGskBaseAgent -> hkpIterativeLinearCastAgent -> hkpCollisionAgent -> hkReferencedObject.
#include "havok/hkBase.h"
#include "havok/hkpIterativeLinearCastAgent.h"

class hkpGskCache {
public:
    hkUint8 m_data[0xC];   // +0x0
};

class hkpGskBaseAgent : public hkpIterativeLinearCastAgent {
public:
    hkpGskBaseAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, hkpContactMgr *mgr);

    hkpGskCache m_cache;                 // +0xC
    hkReal m_timeOfSeparatingNormal;     // +0x18
    hkReal m_allowedPenetration;         // +0x1C
    hkVector4 m_separatingNormal;        // +0x20
};

// hkpGskManifold: the counts packed in the first word, cleared by its constructor (a scalar
// initialiser or body store schedules the store before the vtable store instead).
struct hkpGskManifold {
    HK_FORCE_INLINE hkpGskManifold() : m_header(0) {}
    hkUint32 m_header;   // +0x0
};

class hkpGskfAgent : public hkpGskBaseAgent {
public:
    hkpGskfAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, hkpContactMgr *mgr);

    hkpGskManifold m_manifold;   // +0x30
};

hkpGskfAgent::hkpGskfAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, hkpContactMgr *mgr)
    : hkpGskBaseAgent(bodyA, bodyB, mgr)
{

}
