// hkpBvAgent::hkpBvAgent (Physics/Collide/Agent/CompoundAgent/BvTree... /Bv/hkpBvAgent.cpp): creates the agent for
// the bounding volume shape of A against B through the dispatcher (hkpCollisionDispatcher::getNewCollisionAgent,
// inlined: the 32x32 agent type tables at +0x1A0 / +0x5A0 (predictive), the 0x14-byte AgentFuncs at +0x9A0).
#include "havok/hkBase.h"

class hkpContactMgr;
class hkpCollisionAgent;
class hkpCollisionDispatcher;
class hkpCollisionFilter;
typedef int hkpShapeType;
typedef hkUint32 hkpShapeKey;
typedef int hkBool32;
#define HK_INVALID_SHAPE_KEY 0xffffffff

class __declspec(align(16)) hkVector4 {
public:
    hkReal m_quad[4];
};

class hkpShape : public hkReferencedObject {
public:
    hkpShapeType getType() const { return m_type; }

    hkUlong m_userData;    // +0x8
    hkpShapeType m_type;   // +0xC
};

class hkpBvShape : public hkpShape {
public:
    const hkpShape *getBoundingVolumeShape() const { return m_boundingVolumeShape; }

    const hkpShape *m_boundingVolumeShape;   // +0x10
};

class hkpCdBody {
public:
    HK_FORCE_INLINE explicit hkpCdBody(const hkpCdBody *parent)
    {
        m_parent = parent;
        m_motion = parent->m_motion;
    }
    const hkpShape *getShape() const { return m_shape; }
    HK_FORCE_INLINE void setShape(const hkpShape *shape, hkpShapeKey key)
    {
        m_shape = shape;
        m_shapeKey = key;
    }

    const hkpShape *m_shape;     // +0x0
    hkpShapeKey m_shapeKey;      // +0x4
    const void *m_motion;        // +0x8
    const hkpCdBody *m_parent;   // +0xC
};

struct hkpCollisionInput {
    hkpCollisionDispatcher *m_dispatcher;     // +0x0
    hkUint32 m_weldClosestPoints;             // +0x4
    hkUint32 m_forceAcceptContactPoints;      // +0x8
    hkReal m_tolerance;                       // +0xC
    const hkpCollisionFilter *m_filter;       // +0x10
    hkBool32 m_createPredictiveAgents;        // +0x14
    hkUint8 m_members[0x28];                  // +0x18
    hkVector4 m_aabb32Info;                   // +0x40
};

class hkpCollisionDispatcher : public hkReferencedObject {
public:
    enum { HK_MAX_SHAPE_TYPE = 32 };
    typedef hkpCollisionAgent *(HK_CALL *CreateFunc)(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                     const hkpCollisionInput &input, hkpContactMgr *mgr);
    struct AgentFuncs {
        CreateFunc m_createFunc;
        void *m_getPenetrationsFunc;
        void *m_getClosestPointFunc;
        void *m_linearCastFunc;
        hkBool m_isFlipped;
        hkBool m_isPredictive;
    };

    HK_FORCE_INLINE hkpCollisionAgent *getNewCollisionAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                            const hkpCollisionInput &input, hkpContactMgr *mgr) const
    {
        int typeA = bodyA.getShape()->getType();
        int typeB = bodyB.getShape()->getType();
        const hkUint8 (*table)[HK_MAX_SHAPE_TYPE] = input.m_createPredictiveAgents ? m_agent2TypesPred : m_agent2Types;
        int agentType = table[typeA][typeB];
        CreateFunc f = m_agent2Func[agentType].m_createFunc;
        return f(bodyA, bodyB, input, mgr);
    }

    hkUint8 m_members[0x198];                                          // +0x8
    hkUint8 m_agent2Types[HK_MAX_SHAPE_TYPE][HK_MAX_SHAPE_TYPE];       // +0x1A0
    hkUint8 m_agent2TypesPred[HK_MAX_SHAPE_TYPE][HK_MAX_SHAPE_TYPE];   // +0x5A0
    AgentFuncs m_agent2Func[32];                                       // +0x9A0
};

class hkpCollisionAgent : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpCollisionAgent(hkpContactMgr *contactMgr) : m_contactMgr(contactMgr) {}

    hkpContactMgr *m_contactMgr;   // +0x8
};

class hkpBvAgent : public hkpCollisionAgent {
public:
    hkpBvAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);

    hkpCollisionAgent *m_boundingVolumeAgent;   // +0xC
    hkpCollisionAgent *m_childAgent;            // +0x10
};

hkpBvAgent::hkpBvAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                       hkpContactMgr *mgr)
    : hkpCollisionAgent(mgr)
{
    const hkpBvShape *bvShape = static_cast<const hkpBvShape *>(bodyA.getShape());
    hkpCdBody newA(&bodyA);
    newA.setShape(bvShape->getBoundingVolumeShape(), HK_INVALID_SHAPE_KEY);
    m_boundingVolumeAgent = input.m_dispatcher->getNewCollisionAgent(newA, bodyB, input, mgr);
    m_childAgent = HK_NULL;
}
