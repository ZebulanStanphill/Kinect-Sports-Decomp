// hkpMoppAgent::createBvBvAgent (Physics/Collide/Agent/CompoundAgent/BvTree/hkpMoppAgent.cpp): for two MOPP
// shapes, the agent walks the bigger MOPP; when the first body's code is not the smaller one it is wrapped in
// hkpSymmetricAgent. Both agents are allocated with the class allocator (no null check); the hkpMoppAgent
// constructor is inlined around hkpBvTreeAgent's (out of line, fn_82D56088).
#include "havok/hkBase.h"
#include "havok/hkpSymmetricAgent.h"

// hkpMoppCode (Physics/Internal/Collide/Mopp/Code/hkpMoppCode.h): hkReferencedObject, CodeInfo
// (an hkVector4 at +0x10), then hkArray<hkUint8> m_data (+0x20).
class hkpMoppCode : public hkReferencedObject {
public:
    hkUint32 m_pad[2];
    hkUint32 m_info[4];          // +0x10 CodeInfo
    hkArrayBase<hkUint8> m_data;   // +0x20
};

// hkpMoppBvTreeShape: hkpBvTreeShape (hkpShape + m_bvTreeType), then const hkpMoppCode *m_code (+0x14).
class hkpBvTreeShape : public hkpShape {
public:
    hkUint8 m_bvTreeType;   // +0x10
};
class hkMoppBvTreeShapeBase : public hkpBvTreeShape {
public:
    const hkpMoppCode *getMoppCode() const { return m_code; }
    const hkpMoppCode *m_code;   // +0x14
};
class hkpMoppBvTreeShape : public hkMoppBvTreeShapeBase {
};

struct hkpBvAgentEntryInfo {
    hkpShapeKey m_key;
    hkInt32 m_userInfo;
    hkpCollisionAgent *m_collisionAgent;
};

class hkpBvTreeAgent : public hkpCollisionAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpBvTreeAgent(hkpContactMgr *mgr);   // out of line (fn_82D56088)

    hkArray<hkpBvAgentEntryInfo> m_collisionPartners;   // +0xC
    hkUint8 m_rest[0x40 - 0x18];                         // sizeof is 0x40
};

class hkpMoppAgent : public hkpBvTreeAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpMoppAgent(hkpContactMgr *mgr) : hkpBvTreeAgent(mgr) {}

    static hkpCollisionAgent *HK_CALL createBvBvAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                      const hkpCollisionInput &input, hkpContactMgr *mgr);
};

hkpCollisionAgent *HK_CALL hkpMoppAgent::createBvBvAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                        const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    const hkpMoppBvTreeShape *bvA = static_cast<const hkpMoppBvTreeShape *>(bodyA.getShape());
    const hkpMoppBvTreeShape *bvB = static_cast<const hkpMoppBvTreeShape *>(bodyB.getShape());

    int sizeA = bvA->getMoppCode()->m_data.getSize();
    int sizeB = bvB->getMoppCode()->m_data.getSize();

    if (sizeA < sizeB) {
        hkpCollisionAgent *agent = new hkpMoppAgent(mgr);
        return agent;
    } else {
        hkpCollisionAgent *agent = new hkpSymmetricAgent<hkpMoppAgent>(mgr);
        return agent;
    }
}
