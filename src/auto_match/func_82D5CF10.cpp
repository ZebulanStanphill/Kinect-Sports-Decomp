#include "havok/hkpCdBodyPairCollector.h"
#include "havok/hkpCdPointCollector.h"
#include "havok/hkpCollisionInput.h"

class hkpContactMgr;
class hkpConstraintOwner;
typedef hkpConstraintOwner hkCollisionConstraintOwner;
struct hkpProcessCollisionInput;
struct hkpProcessCollisionOutput;

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

static HK_FORCE_INLINE unsigned response(const hkpCdBody &a,const hkpCdBody &b,const hkpCollisionInput &in) { return in.m_convexListFilter->getConvexListCollisionType(a,b,in); }
class hkpBvTreeStreamAgent : public hkpCollisionAgent { public:
 hkpBvTreeStreamAgent(const hkpCdBody&,const hkpCdBody&,const hkpCollisionInput&,hkpContactMgr*); char rest[0x34];
};
class hkpShapeCollectionAgent : public hkpCollisionAgent { public:
 hkpShapeCollectionAgent(const hkpCdBody&,const hkpCdBody&,const hkpCollisionInput&,hkpContactMgr*); char rest[0x2c];
};
class hkpGskfAgent : public hkpCollisionAgent { public:
 hkpGskfAgent(const hkpCdBody&a,const hkpCdBody&b,hkpContactMgr*m); char rest[0x74];
};
class hkpPredGskfAgent : public hkpGskfAgent { public: HK_FORCE_INLINE hkpPredGskfAgent(const hkpCdBody &a,const hkpCdBody &b,hkpContactMgr *m):hkpGskfAgent(a,b,m) {} };
// hkpConvexListAgent (Physics/Collide/Agent/Deprecated/ConvexList/hkpConvexListAgent.h), 0x90 bytes; its
// constructor is out of line (82D5C050).
class hkpConvexListAgent : public hkpPredGskfAgent { public:
 hkpConvexListAgent(const hkpCdBody&a,const hkpCdBody&b,const hkpCollisionInput&i,hkpContactMgr*m); char rest[0x10];
};
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
  case 0: return new hkpConvexListAgent(a,b,in,m);
  case 1: return new hkpSymmetricAgent<hkpShapeCollectionAgent>(a,b,in,m);
  case 2: return new hkpPredGskfAgent(a,b,m);
  }
 }
 return 0;
 } else { return new hkpShapeCollectionAgent(a,b,in,0);
 }
}
