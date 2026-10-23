// hkpMultiSphereAgent::createMultiSphereAAgent: the unflipped agent's creation function (registered by registerAgent, fn_82D6D6B8, next to
// createMultiSphereBAgent), allocating an hkpMultiSphereAgent (0x38 bytes) through the class allocator and calling its
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

class hkpMultiSphereAgent : public hkpCollisionAgent {
public:
    hkpMultiSphereAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    static hkpCollisionAgent *HK_CALL createMultiSphereAAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                          const hkpCollisionInput &input, hkpContactMgr *mgr);

    hkUint8 m_members[0x2C];   // +0xC
};

hkpCollisionAgent *HK_CALL hkpMultiSphereAgent::createMultiSphereAAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                     const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpMultiSphereAgent *agent = new hkpMultiSphereAgent(bodyA, bodyB, input, mgr);
    return agent;
}
