#include "havok/hkpShapeCollectionAgent.h"
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpConvexListAgent.h"

static HK_FORCE_INLINE unsigned response(const hkpCdBody &a,const hkpCdBody &b,const hkpCollisionInput &in) { return in.m_convexListFilter->getConvexListCollisionType(a,b,in); }
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
