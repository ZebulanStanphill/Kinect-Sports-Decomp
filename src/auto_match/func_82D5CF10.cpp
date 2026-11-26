#include "havok/hkpShapeCollectionAgent.h"
#include "havok/hkpSymmetricAgent.h"

static HK_FORCE_INLINE unsigned response(const hkpCdBody &a,const hkpCdBody &b,const hkpCollisionInput &in) { return in.m_convexListFilter->getConvexListCollisionType(a,b,in); }
class hkpGskfAgent : public hkpCollisionAgent { public:
 hkpGskfAgent(const hkpCdBody&a,const hkpCdBody&b,hkpContactMgr*m); char rest[0x74];
};
class hkpPredGskfAgent : public hkpGskfAgent { public: HK_FORCE_INLINE hkpPredGskfAgent(const hkpCdBody &a,const hkpCdBody &b,hkpContactMgr *m):hkpGskfAgent(a,b,m) {} };
// hkpConvexListAgent (Physics/Collide/Agent/Deprecated/ConvexList/hkpConvexListAgent.h), 0x90 bytes; its
// constructor is out of line (82D5C050).
class hkpConvexListAgent : public hkpPredGskfAgent { public:
 hkpConvexListAgent(const hkpCdBody&a,const hkpCdBody&b,const hkpCollisionInput&i,hkpContactMgr*m); char rest[0x10];
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
