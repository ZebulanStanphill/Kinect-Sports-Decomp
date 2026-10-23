// hkpBvAgent::createShapeBvAgent: the flipped agent's creation function (registered by registerAgent), allocating
// hkpSymmetricAgent<hkpBvAgent> (0x14 bytes); its inline constructor calls hkpBvAgent's out-of-line
// constructor with the bodies swapped, then stores its own vtable.
// Havok collision agents (Physics/Collide/Agent/hkpCollisionAgent.h, hkpIterativeLinearCastAgent.h,
// Agent/Util/Symmetric/hkpSymmetricAgent.h, hkpSymmetricAgentLinearCast.h, hkpSymmetricAgentFlip*Collector.h).
// Hierarchy from the RTTI: hkpSymmetricAgent<AGENT> and hkpSymmetricAgentLinearCast<AGENT> derive from AGENT;
// the agents derive from hkpCollisionAgent (some through hkpIterativeLinearCastAgent) -> hkReferencedObject.
// hkpCollisionAgent vtable, from the hkpSymmetricAgent<..> slots that flip the bodies: +0xC getPenetrations
// (hkpSymmetricAgentFlipBodyCollector), +0x10 getClosestPoints (hkpSymmetricAgentFlipCollector), +0x14
// linearCast (hkpSymmetricAgentFlipCastCollector), +0x18 processCollision, +0x1C cleanup.
// The static flipped functions (registered with the collision dispatcher) are hkpSymmetricAgent<AGENT>'s, also for
// the agents whose instances are hkpSymmetricAgentLinearCast<AGENT> (that template only overrides virtuals).
// The creation functions are statics of each agent, defined in its .cpp next to registerAgent (which registers
// them, for example fn_82D6EC40 registers fn_82D6EBD0 with hkpSymmetricAgent<hkpBvAgent>'s statics).
// The collectors are interfaces without base class and with Havok's non-virtual class allocator; their
// constructors call reset(), which sets m_earlyOut = false / m_earlyOutDistance = HK_REAL_MAX. The game's
// HK_REAL_MAX constant is lbl_82134508 (3.40282e38f).
#include "havok/hkpShape.h"

class hkpCdPoint;
class hkpContactMgr;
class hkpCollisionAgent;
class hkpCollisionDispatcher;
class hkpCollisionFilter;
class hkpConstraintOwner;
typedef hkpConstraintOwner hkCollisionConstraintOwner;
struct hkpProcessCollisionInput;
struct hkpProcessCollisionOutput;
typedef int hkBool32;

extern "C" const float lbl_82134508;   // HK_REAL_MAX

// hkVector4 holds a VMX register (hkQuadReal is the XDK's __vector4); setNeg4 flips the sign bits with
// __vxor and the sign-mask constant lbl_8209AB20 (0x80000000 x 4). Copy construction is bitwise (the inputs
// are copied as blocks of doublewords); assignment goes through the vector register (lvx/stvx).
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;
extern "C" __vector4 __vxor(__vector4 a, __vector4 b);   // VMX intrinsic
extern "C" const hkQuadReal lbl_8209AB20;               // sign mask

class hkVector4 {
public:
    HK_FORCE_INLINE void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    HK_FORCE_INLINE void setNeg4(const hkVector4 &v) { m_quad = __vxor(v.m_quad, lbl_8209AB20); }

    hkQuadReal m_quad;
};

// hkTransform::setMul is out of line (fn_82CE6768, keeps its fn_ name: Matching units call it).
extern "C" void fn_82CE6768(hkTransform *self, const hkTransform *a, const hkTransform *b);   // hkTransform::setMul

class hkTransform {
public:
    HK_FORCE_INLINE void setMul(const hkTransform &a, const hkTransform &b) { fn_82CE6768(this, &a, &b); }

    hkVector4 m_rotation[3];   // +0x0 (hkRotation)
    hkVector4 m_translation;   // +0x30
};

// hkMotionState (0xB0): its (implicit) copy constructor is emitted out of line, fn_82D6B540.
class hkMotionState {
public:
    hkMotionState(const hkMotionState &other);
    hkTransform &getTransform() { return m_transform; }
    const hkTransform &getTransform() const { return m_transform; }

    hkTransform m_transform;          // +0x0
    hkUint8 m_sweptTransform[0x50];   // +0x40
    hkVector4 m_deltaAngle;           // +0x90
    hkReal m_objectRadius;            // +0xA0
    hkUint8 m_members[0xC];           // +0xA4: dampings, deactivation counters
};

// hkpCdBody (Physics/Collide/Agent/Collidable/hkpCdBody.h).
class hkpCdBody {
public:
    HK_FORCE_INLINE explicit hkpCdBody(const hkpCdBody *parent)
    {
        m_parent = parent;
        m_motion = parent->m_motion;
    }
    HK_FORCE_INLINE hkpCdBody(const hkpCdBody *parent, const hkMotionState *ms)
    {
        m_parent = parent;
        m_motion = ms;
    }
    HK_FORCE_INLINE hkpCdBody(const hkpCdBody *parent, const hkTransform *t)
    {
        m_parent = parent;
        m_motion = t;
    }
    const hkpShape *getShape() const { return m_shape; }
    const hkMotionState *getMotionState() const { return static_cast<const hkMotionState *>(m_motion); }
    const hkTransform &getTransform() const { return *static_cast<const hkTransform *>(m_motion); }
    const hkpCdBody *getRootCollidable() const
    {
        const hkpCdBody *body = this;
        while (body->m_parent)
            body = body->m_parent;
        return body;
    }
    HK_FORCE_INLINE void setShape(const hkpShape *shape, hkpShapeKey key)
    {
        m_shape = shape;
        m_shapeKey = key;
    }

    const hkpShape *m_shape;     // +0x0
    hkpShapeKey m_shapeKey;      // +0x4
    const void *m_motion;        // +0x8: an hkMotionState or an hkTransform
    const hkpCdBody *m_parent;   // +0xC
};

// Physics/Collide/Agent/hkpCollisionInput.h, hkpLinearCastCollisionInput.h: m_dispatcher (+0x0) and
// m_createPredictiveAgents (+0x14) from the agent constructors; the sizes (0x50, 0x70) and m_path (+0x50) from the
// flipped linear casts, which copy the input and negate the path.
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

struct hkpLinearCastCollisionInput : public hkpCollisionInput {
    hkVector4 m_path;                // +0x50
    hkReal m_maxExtraPenetration;    // +0x60
    hkReal m_cachedPathLength;       // +0x64
};

// hkpCollisionDispatcher (Physics/Collide/Dispatch/hkpCollisionDispatcher.h): the 32x32 agent type tables at +0x1A0
// and +0x5A0 (predictive) and the 0x14-byte AgentFuncs at +0x9A0, as getNewCollisionAgent reads them.
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
        int typeA = bodyA.getShape()->m_type;
        int typeB = bodyB.getShape()->m_type;
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

class hkpCdBodyPairCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpCdBodyPairCollector);
    hkpCdBodyPairCollector() { reset(); }
    virtual ~hkpCdBodyPairCollector() {}
    virtual void addCdBodyPair(const hkpCdBody &bodyA, const hkpCdBody &bodyB) = 0;
    virtual void reset() { m_earlyOut = false; }

    hkBool m_earlyOut;   // +0x4
};

class hkpCdPointCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpCdPointCollector);
    hkpCdPointCollector() { reset(); }
    virtual ~hkpCdPointCollector() {}
    virtual void addCdPoint(const hkpCdPoint &point) = 0;
    virtual void reset() { m_earlyOutDistance = lbl_82134508; }

    hkReal m_earlyOutDistance;   // +0x4
};

class hkpSymmetricAgentFlipBodyCollector : public hkpCdBodyPairCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpSymmetricAgentFlipBodyCollector);
    hkpSymmetricAgentFlipBodyCollector(hkpCdBodyPairCollector &c) : m_collector(c) {}
    virtual void addCdBodyPair(const hkpCdBody &bodyA, const hkpCdBody &bodyB);

    hkpCdBodyPairCollector &m_collector;   // +0x8
};

class hkpSymmetricAgentFlipCollector : public hkpCdPointCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpSymmetricAgentFlipCollector);
    hkpSymmetricAgentFlipCollector(hkpCdPointCollector &c) : m_collector(c) {}
    virtual void addCdPoint(const hkpCdPoint &point);

    hkpCdPointCollector &m_collector;   // +0x8
};

class hkpSymmetricAgentFlipCastCollector : public hkpCdPointCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpSymmetricAgentFlipCastCollector);
    hkpSymmetricAgentFlipCastCollector(const hkVector4 &path, hkpCdPointCollector &c) : m_collector(c)
    {
        m_path = path;
    }
    virtual void addCdPoint(const hkpCdPoint &point);

    hkVector4 m_path;                   // +0x10
    hkpCdPointCollector &m_collector;   // +0x20
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

extern "C" void fn_82D75FD0(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                            hkpCdPointCollector &collector, hkpCdPointCollector *startCollector);   // hkpIterativeLinearCastAgent::staticLinearCast

class hkpIterativeLinearCastAgent : public hkpCollisionAgent {
public:
    hkpIterativeLinearCastAgent(hkpContactMgr *mgr) : hkpCollisionAgent(mgr) {}
    static void HK_CALL staticLinearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                         const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector,
                                         hkpCdPointCollector *startCollector)
    {
        fn_82D75FD0(bodyA, bodyB, input, collector, startCollector);
    }
};

template <typename AGENT>
class hkpSymmetricAgent : public AGENT {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    HK_FORCE_INLINE hkpSymmetricAgent(const hkpCdBody &A, const hkpCdBody &B, const hkpCollisionInput &input, hkpContactMgr *mgr)
        : AGENT(B, A, input, mgr) {}
    HK_FORCE_INLINE hkpSymmetricAgent(hkpContactMgr *mgr) : AGENT(mgr) {}

    static void HK_CALL staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                              const hkpCollisionInput &input, hkpCdBodyPairCollector &collector)
    {
        hkpSymmetricAgentFlipBodyCollector flipCollector(collector);
        AGENT::staticGetPenetrations(bodyB, bodyA, input, flipCollector);
    }
    static void HK_CALL staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                               const hkpCollisionInput &input, hkpCdPointCollector &collector)
    {
        hkpSymmetricAgentFlipCollector flipCollector(collector);
        AGENT::staticGetClosestPoints(bodyB, bodyA, input, flipCollector);
    }
    static void HK_CALL staticLinearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                         const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector,
                                         hkpCdPointCollector *startCollector)
    {
        hkpLinearCastCollisionInput flippedInput = input;
        flippedInput.m_path.setNeg4(input.m_path);
        hkpSymmetricAgentFlipCastCollector flipCollector(input.m_path, collector);
        if (startCollector) {
            hkpSymmetricAgentFlipCastCollector startFlipCollector(input.m_path, *startCollector);
            AGENT::staticLinearCast(bodyB, bodyA, flippedInput, flipCollector, &startFlipCollector);
        } else {
            AGENT::staticLinearCast(bodyB, bodyA, flippedInput, flipCollector, HK_NULL);
        }
    }

    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                 hkpCdBodyPairCollector &collector)
    {
        hkpSymmetricAgentFlipBodyCollector flipCollector(collector);
        AGENT::getPenetrations(bodyB, bodyA, input, flipCollector);
    }
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                  hkpCdPointCollector &collector)
    {
        hkpSymmetricAgentFlipCollector flipCollector(collector);
        AGENT::getClosestPoints(bodyB, bodyA, input, flipCollector);
    }
    virtual void linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                            hkpCdPointCollector &collector, hkpCdPointCollector *startCollector)
    {
        hkpLinearCastCollisionInput flippedInput = input;
        flippedInput.m_path.setNeg4(input.m_path);
        hkpSymmetricAgentFlipCastCollector flipCollector(input.m_path, collector);
        if (startCollector) {
            hkpSymmetricAgentFlipCastCollector startFlipCollector(input.m_path, *startCollector);
            AGENT::linearCast(bodyB, bodyA, flippedInput, flipCollector, &startFlipCollector);
        } else {
            AGENT::linearCast(bodyB, bodyA, flippedInput, flipCollector, HK_NULL);
        }
    }
};

template <typename AGENT>
class hkpSymmetricAgentLinearCast : public AGENT {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    HK_FORCE_INLINE hkpSymmetricAgentLinearCast(const hkpCdBody &A, const hkpCdBody &B, const hkpCollisionInput &input,
                                hkpContactMgr *mgr)
        : AGENT(B, A, input, mgr) {}
    HK_FORCE_INLINE hkpSymmetricAgentLinearCast(hkpContactMgr *mgr) : AGENT(mgr) {}

    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                 hkpCdBodyPairCollector &collector)
    {
        hkpSymmetricAgentFlipBodyCollector flipCollector(collector);
        AGENT::getPenetrations(bodyB, bodyA, input, flipCollector);
    }
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                  hkpCdPointCollector &collector)
    {
        hkpSymmetricAgentFlipCollector flipCollector(collector);
        AGENT::getClosestPoints(bodyB, bodyA, input, flipCollector);
    }
};

class hkpBvAgent : public hkpCollisionAgent {
public:
    hkpBvAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    static hkpCollisionAgent *HK_CALL createShapeBvAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);

    hkUint8 m_members[0x8];   // +0xC
};

hkpCollisionAgent *HK_CALL hkpBvAgent::createShapeBvAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpBvAgent *agent = new hkpSymmetricAgent<hkpBvAgent>(bodyA, bodyB, input, mgr);
    return agent;
}
