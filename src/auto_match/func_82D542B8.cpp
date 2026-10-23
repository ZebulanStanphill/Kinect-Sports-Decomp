// hkpBvTreeStreamAgent::createAgent: the unflipped agent's creation function (registered by fn_82D53F68, fn_82D54AA8 and fn_82D54B78, next to
// hkpSymmetricAgent<hkpBvTreeStreamAgent>::createAgent), allocating an hkpBvTreeStreamAgent (0x40 bytes) through the class allocator and calling its
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

class hkpBvTreeStreamAgent : public hkpCollisionAgent {
public:
    hkpBvTreeStreamAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    static hkpCollisionAgent *HK_CALL createAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                          const hkpCollisionInput &input, hkpContactMgr *mgr);

    hkUint8 m_members[0x34];   // +0xC
};

hkpCollisionAgent *HK_CALL hkpBvTreeStreamAgent::createAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                     const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpBvTreeStreamAgent *agent = new hkpBvTreeStreamAgent(bodyA, bodyB, input, mgr);
    return agent;
}
