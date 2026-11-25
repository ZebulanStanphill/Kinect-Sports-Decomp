#include "havok/hkpCdBody.h"
#include "havok/hkpCdBodyPairCollector.h"
#include "havok/hkpCdPointCollector.h"

class hkpContactMgr;
class hkpCollisionAgent;
class hkpCollisionDispatcher;
class hkpCollisionFilter;
class hkpConstraintOwner;
typedef hkpConstraintOwner hkCollisionConstraintOwner;
struct hkpProcessCollisionInput;
struct hkpProcessCollisionOutput;

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

class __declspec(novtable) hkpCollisionAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpCollisionAgent(hkFinishLoadedObjectFlag) {}
    hkpCollisionAgent(hkpContactMgr *contactMgr) : m_contactMgr(contactMgr),refs(1) {}
    virtual ~hkpCollisionAgent(){}
    virtual void getClassType();virtual void stats();
    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                 hkpCdBodyPairCollector &collector);   // +0xC
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                  hkpCdPointCollector &collector);   // +0x10
    virtual void linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                            hkpCdPointCollector &collector, hkpCdPointCollector *startCollector);   // +0x14
    virtual void processCollision(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpProcessCollisionInput &input,
                                  hkpProcessCollisionOutput &result);   // +0x18
    virtual void cleanup(hkCollisionConstraintOwner &constraintOwner);   // +0x1C

    unsigned short mem,refs;hkpContactMgr *m_contactMgr;   // +0x8
};

class Factory { public: virtual void slot0(); virtual void slot1(); virtual void slot2(); virtual unsigned get(const hkpCdBody &,const hkpCdBody &, const hkpCollisionInput &); };
static HK_FORCE_INLINE unsigned response(const hkpCdBody &a,const hkpCdBody &b,const hkpCollisionInput &in) { return ((Factory*)in.m_filter)->get(a,b,in); }
class hkpBvTreeStreamAgent : public hkpCollisionAgent { public:
 hkpBvTreeStreamAgent(const hkpCdBody&,const hkpCdBody&,const hkpCollisionInput&,hkpContactMgr*); char rest[0x34];
};
class hkpShapeCollectionAgent : public hkpCollisionAgent { public:
 hkpShapeCollectionAgent(const hkpCdBody&,const hkpCdBody&,const hkpCollisionInput&,hkpContactMgr*); char rest[0x2c];
};
// hkpConvexListAgent's constructor keeps its fn_ name (a Matching unit calls it) and returns this.
extern "C" hkpCollisionAgent *fn_82D5C050(void*,const hkpCdBody&,const hkpCdBody&,const hkpCollisionInput&,hkpContactMgr*);
class __declspec(novtable) hkpConvexListAgent : public hkpCollisionAgent { public:
 HK_FORCE_INLINE hkpConvexListAgent(const hkpCdBody&a,const hkpCdBody&b,const hkpCollisionInput&i,hkpContactMgr*m):hkpCollisionAgent(hkFinishLoadedObjectFlag()){fn_82D5C050(this,a,b,i,m);} char rest[0x84];
};
class hkpGskfAgent : public hkpCollisionAgent { public:
 hkpGskfAgent(const hkpCdBody&a,const hkpCdBody&b,hkpContactMgr*m); char rest[0x74];
};
class hkpPredGskfAgent : public hkpGskfAgent { public: HK_FORCE_INLINE hkpPredGskfAgent(const hkpCdBody &a,const hkpCdBody &b,hkpContactMgr *m):hkpGskfAgent(a,b,m) {} };
template <typename T> class hkpSymmetricAgent : public T { public:
 HK_FORCE_INLINE hkpSymmetricAgent(const hkpCdBody &a,const hkpCdBody &b,const hkpCollisionInput &i,hkpContactMgr *m) : T(b,a,i,m) {}
};

extern "C" hkpCollisionAgent *fn_82D5CF10(const hkpCdBody &a,const hkpCdBody &b,const hkpCollisionInput &in,hkpContactMgr *m) {
 if(m) {
 switch(response(a,b,in)) {
 case 0: return new hkpSymmetricAgent<hkpConvexListAgent>(a,b,in,m);
 case 1: return new hkpShapeCollectionAgent(a,b,in,m);
 case 2:
  switch(response(b,a,in)) {
  case 0: return fn_82D5C050(hkpCollisionAgent::operator new(0x90),a,b,in,m);
  case 1: return new hkpSymmetricAgent<hkpShapeCollectionAgent>(a,b,in,m);
  case 2: return new hkpPredGskfAgent(a,b,m);
  }
 }
 return 0;
 } else { return new hkpShapeCollectionAgent(a,b,in,0);
 }
}
