// hkpShapeCollectionAgent::createListAAgent: the unflipped agent's creation function (registered by registerAgent, fn_82D6CAD0, next to
// createListBAgent), allocating an hkpShapeCollectionAgent (0x38 bytes) through the class allocator and calling its
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

class hkpShapeCollectionAgent : public hkpCollisionAgent {
public:
    hkpShapeCollectionAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    static hkpCollisionAgent *HK_CALL createListAAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                          const hkpCollisionInput &input, hkpContactMgr *mgr);

    hkUint8 m_members[0x2C];   // +0xC
};

hkpCollisionAgent *HK_CALL hkpShapeCollectionAgent::createListAAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                     const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpShapeCollectionAgent *agent = new hkpShapeCollectionAgent(bodyA, bodyB, input, mgr);
    return agent;
}
