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


class Factory { public: virtual void slot0(); virtual void slot1(); virtual void slot2(); virtual unsigned get(const hkpCdBody &,const hkpCdBody &, const hkpCollisionInput &); };
static HK_FORCE_INLINE unsigned response(const hkpCdBody &a,const hkpCdBody &b,const hkpCollisionInput &in) { return ((Factory*)in.m_filter)->get(a,b,in); }
class hkpBvTreeStreamAgent : public hkpCollisionAgent { public:
 hkpBvTreeStreamAgent(const hkpCdBody&,const hkpCdBody&,const hkpCollisionInput&,hkpContactMgr*); char rest[0x34];
};
class hkpShapeCollectionAgent : public hkpCollisionAgent { public:
 hkpShapeCollectionAgent(const hkpCdBody&,const hkpCdBody&,const hkpCollisionInput&,hkpContactMgr*); char rest[0x2c];
};
class hkpConvexListAgent : public hkpCollisionAgent { public:
 hkpConvexListAgent(const hkpCdBody&,const hkpCdBody&,const hkpCollisionInput&,hkpContactMgr*); char rest[0x84];
};
class hkpBvAgent : public hkpCollisionAgent { public:
 hkpBvAgent(const hkpCdBody&,const hkpCdBody&,hkpContactMgr*); char rest[0x74];
};
template <typename T> class hkpSymmetricAgent : public T { public:
 HK_FORCE_INLINE hkpSymmetricAgent(const hkpCdBody &a,const hkpCdBody &b,const hkpCollisionInput &i,hkpContactMgr *m) : T(b,a,i,m) {}
};

extern "C" hkpCollisionAgent *fn_82D54C48(const hkpCdBody &a,const hkpCdBody &b,const hkpCollisionInput &in,hkpContactMgr *m) {
 if(m) {
 switch(response(b,a,in)) {
 case 0: case 2: return new hkpSymmetricAgent<hkpBvTreeStreamAgent>(a,b,in,m);
 case 1: return new hkpSymmetricAgent<hkpShapeCollectionAgent>(a,b,in,m);
 default: return 0;
 }
 } else { return new hkpSymmetricAgent<hkpBvTreeStreamAgent>(a,b,in,0);
 }
}
