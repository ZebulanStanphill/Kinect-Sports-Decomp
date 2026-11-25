// hkpHeightFieldAgent::createAgent: the unflipped agent's creation function (registered by registerAgent, fn_82D5A850, next to
// hkpSymmetricAgent<hkpHeightFieldAgent>::createAgent), allocating an hkpHeightFieldAgent (0x18 bytes) through the class allocator and calling its
// out-of-line constructor.
#include "havok/hkpCollisionAgent.h"

class hkpHeightFieldAgent : public hkpCollisionAgent {
public:
    hkpHeightFieldAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    static hkpCollisionAgent *HK_CALL createAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                          const hkpCollisionInput &input, hkpContactMgr *mgr);

    hkUint8 m_members[0xC];   // +0xC
};

hkpCollisionAgent *HK_CALL hkpHeightFieldAgent::createAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                     const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpHeightFieldAgent *agent = new hkpHeightFieldAgent(bodyA, bodyB, input, mgr);
    return agent;
}
