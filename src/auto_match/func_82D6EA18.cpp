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


extern "C" unsigned __int64 __mftb();
struct TimerEntry { const char *name; unsigned time, unused; };
struct TimerStream { void *pad; TimerEntry *next; void *pad2; TimerEntry *end; };
extern "C" TimerStream *KeTlsGetValue(unsigned);
extern "C" unsigned lbl_8323B4A0;
static HK_FORCE_INLINE void beginTimer(const char *name, const char *split=0) {
 TimerStream *s=KeTlsGetValue(lbl_8323B4A0);
 if(s->next<s->end) {
  TimerEntry *e=s->next;
  e->name=name;
  if(split) ((const char**)e)[3]=split;
  e->time=(unsigned)__mftb();
  s->next=(TimerEntry*)((char*)e+(split?16:12));
 }
}
class hkpFlagCdBodyPairCollector : public hkpCdBodyPairCollector {
public: hkpFlagCdBodyPairCollector() {m_earlyOut=false;} virtual void addCdBodyPair(const hkpCdBody&,const hkpCdBody&);
};
class hkpSimpleClosestContactCollector : public hkpCdPointCollector {
public:
 hkpSimpleClosestContactCollector() : m_hasHit(false) { m_distance=lbl_82134508; }
 virtual void addCdPoint(const hkpCdPoint&);
 hkBool m_hasHit; char pad[0x23]; float m_distance; char tail[0x10];
};

typedef void (*Dispatch)(const hkpCdBody*,const hkpCdBody*,const hkpCollisionInput*,hkpCdBodyPairCollector*);
static HK_FORCE_INLINE Dispatch getDispatch(hkpCollisionDispatcher *d,int a,int b,int off) {
 unsigned char *p=(unsigned char*)d;
 unsigned idx=p[(a+13)*32+b];
 return *(Dispatch*)(p+idx*20+off);
}
extern "C" void fn_82D6EA18(const hkpCdBody &a, const hkpCdBody &b, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector) {
 beginTimer("LthkpBvAgent","StcheckBvShape");
 {
 hkpCdBody body(&a);
 const hkpShape *shape=a.m_shape;
 body.setShape(*(const hkpShape**)((const char*)shape+0x10),-1);
 int type=b.m_shape->m_type;
 Dispatch dispatch=getDispatch(input.m_dispatcher,body.m_shape->m_type,type,4+0x9a0);
 hkpFlagCdBodyPairCollector c;
 dispatch(&body,&b,&input,&c);
 if (c.m_earlyOut) {
  beginTimer("Stchild");
  body.setShape(*(const hkpShape**)((const char*)shape+0x18),0);
  getDispatch(input.m_dispatcher,body.m_shape->m_type,type,4+0x9a0)(&body,&b,&input,&collector);
 }
 }
 beginTimer("lt");
}
