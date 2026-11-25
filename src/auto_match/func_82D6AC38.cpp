// hkpTransformAgent::createTransformAAgent: new hkpTransformAgent(bodyA, bodyB, input, mgr), constructor inlined.
// hkpTransformAgent (Physics/Collide/Agent/MiscAgent/Transform/hkpTransformAgent.cpp): its constructor (inlined into
// the creation functions) copies A's motion state (hkMotionState's copy constructor, out of line: fn_82D6B540),
// multiplies its transform by the transform shape's (hkTransform::setMul) and
// creates the child agent through the dispatcher (hkpCollisionDispatcher::getNewCollisionAgent, inlined).
#include "havok/hkBase.h"
#include "havok/hkMotionState.h"
#include "havok/hkpCollisionInput.h"

class hkpContactMgr;
class hkpCollisionAgent;
typedef int hkpShapeType;
typedef hkUint32 hkpShapeKey;

class hkpShape : public hkReferencedObject {
public:
    hkpShapeType getType() const { return m_type; }

    hkUlong m_userData;    // +0x8
    hkpShapeType m_type;   // +0xC
};

class hkpTransformShape : public hkpShape {
public:
    const hkpShape *getChildShape() const { return m_childShape; }
    const hkTransform &getTransform() const { return m_transform; }

    void *m_childShapeContainerVtable;   // +0x10: hkpSingleShapeContainer m_childShape
    const hkpShape *m_childShape;        // +0x14
    int m_childShapeSize;                // +0x18
    hkVector4 m_rotation;                // +0x20
    hkTransform m_transform;             // +0x30
};

class hkpCdBody {
public:
    HK_FORCE_INLINE hkpCdBody(const hkpCdBody *parent, const hkMotionState *ms)
    {
        m_parent = parent;
        m_motion = ms;
    }
    const hkpShape *getShape() const { return m_shape; }
    const hkMotionState *getMotionState() const { return static_cast<const hkMotionState *>(m_motion); }
    const hkTransform &getTransform() const { return getMotionState()->getTransform(); }
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

class hkpTransformAgent : public hkpCollisionAgent {
public:
    HK_FORCE_INLINE hkpTransformAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                      hkpContactMgr *mgr)
        : hkpCollisionAgent(mgr)
    {
        const hkpTransformShape *tShapeA = static_cast<const hkpTransformShape *>(bodyA.getShape());
        const hkpShape *childShape = tShapeA->getChildShape();
        const hkMotionState *msA = bodyA.getMotionState();
        hkMotionState ms = *msA;
        ms.getTransform().setMul(msA->getTransform(), tShapeA->getTransform());
        hkpCdBody newA(&bodyA, &ms);
        newA.setShape(childShape, 0);
        m_childAgent = input.m_dispatcher->getNewCollisionAgent(newA, bodyB, input, mgr);
    }
    static hkpCollisionAgent *HK_CALL createTransformAAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                            const hkpCollisionInput &input, hkpContactMgr *mgr);
    static hkpCollisionAgent *HK_CALL createTransformBAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                            const hkpCollisionInput &input, hkpContactMgr *mgr);

    hkpCollisionAgent *m_childAgent;   // +0xC
};

template <typename AGENT>
class hkpSymmetricAgent : public AGENT {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    HK_FORCE_INLINE hkpSymmetricAgent(const hkpCdBody &A, const hkpCdBody &B, const hkpCollisionInput &input,
                                      hkpContactMgr *mgr)
        : AGENT(B, A, input, mgr) {}
};

hkpCollisionAgent *HK_CALL hkpTransformAgent::createTransformAAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                                    const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpTransformAgent *agent = new hkpTransformAgent(bodyA, bodyB, input, mgr);
    return agent;
}
