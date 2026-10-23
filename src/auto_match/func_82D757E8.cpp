// hkpGskfAgent::hkpGskfAgent(const hkpCdBody &, const hkpCdBody &, hkpContactMgr *)
// (Physics/Collide/Agent/ConvexAgent/Gjk/hkpGskfAgent.cpp): hkpGskBaseAgent's constructor (out of line,
// fn_82D74A90), then the manifold member is constructed (one word cleared at +0x30). Hierarchy from the RTTI:
// hkpGskfAgent -> hkpGskBaseAgent -> hkpIterativeLinearCastAgent -> hkpCollisionAgent -> hkReferencedObject.
#include "havok/hkBase.h"

class hkpCdBody;
class hkpContactMgr;
class hkpCdBodyPairCollector;
class hkpCdPointCollector;
class hkpConstraintOwner;
typedef hkpConstraintOwner hkCollisionConstraintOwner;
struct hkpCollisionInput;
struct hkpLinearCastCollisionInput;
struct hkpProcessCollisionInput;
struct hkpProcessCollisionOutput;

class __declspec(align(16)) hkVector4 {
public:
    hkReal x, y, z, w;
};

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

class hkpIterativeLinearCastAgent : public hkpCollisionAgent {
public:
    hkpIterativeLinearCastAgent(hkpContactMgr *mgr) : hkpCollisionAgent(mgr) {}
};

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
