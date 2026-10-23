// hkpMultiRayConvexAgent::createMultiRayConvexAgent: the unflipped agent's creation function (registered by registerAgent, fn_82D609F8, next to
// createConvexMultiRayAgent), allocating an hkpMultiRayConvexAgent (0x20 bytes) through the class allocator and calling its
// out-of-line constructor.
#include "havok/hkBase.h"

class hkpCdBody;
class hkpContactMgr;
struct hkpCollisionInput;

class hkpCollisionAgent : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpCollisionAgent(hkpContactMgr *contactMgr) : m_contactMgr(contactMgr) {}

    hkpContactMgr *m_contactMgr;   // +0x8
};

class hkpIterativeLinearCastAgent : public hkpCollisionAgent {
public:
    hkpIterativeLinearCastAgent(hkpContactMgr *mgr) : hkpCollisionAgent(mgr) {}
};

class hkpMultiRayConvexAgent : public hkpIterativeLinearCastAgent {
public:
    hkpMultiRayConvexAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    static hkpCollisionAgent *HK_CALL createMultiRayConvexAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                          const hkpCollisionInput &input, hkpContactMgr *mgr);

    hkUint8 m_members[0x14];   // +0xC
};

hkpCollisionAgent *HK_CALL hkpMultiRayConvexAgent::createMultiRayConvexAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                     const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpMultiRayConvexAgent *agent = new hkpMultiRayConvexAgent(bodyA, bodyB, input, mgr);
    return agent;
}
