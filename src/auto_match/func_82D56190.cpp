// hkpBvTreeAgent::createShapeBvAgent (Physics/Collide/Agent/CompoundAgent/BvTree/hkpBvTreeAgent.cpp), /O2 /QVMXReserve:
// the bv tree is the second body, so the agent is the flipped hkpSymmetricAgent<hkpBvTreeAgent>. hkpBvTreeAgent's
// constructor is defined in the same file, so the compiler inlines it here (elsewhere it is called out of line,
// fn_82D56088). It keeps its fn_ name (the registerAgent functions take its address).
// HK_REAL_MAX is a literal: the game's copy is lbl_82134508, which Matching units reference, so it is a static
// constant with that name.
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
extern "C" __vector4 __vspltw(__vector4 a, unsigned int b);

// HK_REAL_MAX (3.40282e+38f); the game's copy keeps its lbl_ name (see above).
static const float lbl_82134508 = 3.40282e+38f;

class hkVector4 {
public:
    HK_FORCE_INLINE void setAll(hkReal a)
    {
        m_quad.vector4_f32[0] = a;
        m_quad = __vspltw(m_quad, 0);
    }
    __vector4 m_quad;
};

struct hkAabb {
    hkVector4 m_min;
    hkVector4 m_max;
};

class hkpContactMgr;
class hkpCdBody;
class hkpCdBodyPairCollector;
class hkpCdPointCollector;
struct hkpCollisionInput;
struct hkpLinearCastCollisionInput;
typedef hkUint32 hkpShapeKey;

// hkpCollisionAgent (Physics/Collide/Agent/hkpCollisionAgent.h): hkReferencedObject, then
// hkpContactMgr *m_contactMgr (+0x8).
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

    hkpContactMgr *m_contactMgr;   // +0x8
};

struct hkpBvAgentEntryInfo {
    hkpShapeKey m_key;
    hkInt32 m_userInfo;
    hkpCollisionAgent *m_collisionAgent;
};

class hkpBvTreeAgent : public hkpCollisionAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpBvTreeAgent(hkpContactMgr *mgr) : hkpCollisionAgent(mgr)
    {
        m_cachedAabb.m_max.setAll(lbl_82134508);
        m_cachedAabb.m_min.setAll(lbl_82134508);
    }
    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                 hkpCdBodyPairCollector &collector);
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                  hkpCdPointCollector &collector);
    virtual void linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                            hkpCdPointCollector &collector, hkpCdPointCollector *startCollector);

    hkArray<hkpBvAgentEntryInfo> m_collisionPartners;   // +0xC
    hkAabb m_cachedAabb;                                // +0x20
};

// hkpSymmetricAgent<AGENT> (Physics/Collide/Agent/Util/Symmetric/hkpSymmetricAgent.h): flips the bodies.
template <typename AGENT>
class hkpSymmetricAgent : public AGENT {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    HK_FORCE_INLINE hkpSymmetricAgent(hkpContactMgr *mgr) : AGENT(mgr) {}
    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                 hkpCdBodyPairCollector &collector);
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                  hkpCdPointCollector &collector);
    virtual void linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                            hkpCdPointCollector &collector, hkpCdPointCollector *startCollector);
};

extern "C" hkpCollisionAgent *fn_82D56190(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                          const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpBvTreeAgent *agent = new hkpSymmetricAgent<hkpBvTreeAgent>(mgr);
    return agent;
}
