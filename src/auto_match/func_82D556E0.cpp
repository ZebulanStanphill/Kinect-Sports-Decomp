// hkpMoppAgent::createBvBvAgent (Physics/Collide/Agent/CompoundAgent/BvTree/hkpMoppAgent.cpp): for two MOPP
// shapes, the agent walks the bigger MOPP; when the first body's code is not the smaller one it is wrapped in
// hkpSymmetricAgent. Both agents are allocated with the class allocator (no null check); the hkpMoppAgent
// constructor is inlined around hkpBvTreeAgent's (out of line, fn_82D56088).
#include "havok/hkBase.h"

class hkpContactMgr;
class hkpConstraintOwner;
class hkpCdBodyPairCollector;
class hkpCdPointCollector;
class hkpShape;
typedef hkpConstraintOwner hkCollisionConstraintOwner;
struct hkpCollisionInput;
struct hkpLinearCastCollisionInput;
struct hkpProcessCollisionInput;
struct hkpProcessCollisionOutput;
typedef hkUint32 hkpShapeKey;

class hkpCdBody {
public:
    const hkpShape *getShape() const { return m_shape; }
    const hkpShape *m_shape;   // +0x0
};

class hkpShape : public hkReferencedObject {
public:
    hkUlong m_userData;   // +0x8
    hkUint32 m_type;      // +0xC
};

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

template <typename AGENT>
class hkpSymmetricAgent : public AGENT {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpSymmetricAgent(hkpContactMgr *mgr) : AGENT(mgr) {}
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
