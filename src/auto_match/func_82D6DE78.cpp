// hkpBvAgent::createBvShapeAgent: the unflipped agent's creation function (registered by registerAgent, fn_82D6EC40,
// next to createShapeBvAgent), allocating an hkpBvAgent (0x14 bytes) through the class allocator and calling its
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

class hkpBvAgent : public hkpCollisionAgent {
public:
    hkpBvAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    static hkpCollisionAgent *HK_CALL createBvShapeAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                         const hkpCollisionInput &input, hkpContactMgr *mgr);

    hkpCollisionAgent *m_boundingVolumeAgent;   // +0xC
    hkpCollisionAgent *m_childAgent;            // +0x10
};

hkpCollisionAgent *HK_CALL hkpBvAgent::createBvShapeAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                          const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpBvAgent *agent = new hkpBvAgent(bodyA, bodyB, input, mgr);
    return agent;
}
