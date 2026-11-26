#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpBvTreeStreamAgent.h"
#include "havok/hkpShapeCollectionAgent.h"

static HK_FORCE_INLINE unsigned response(const hkpCdBody &a,const hkpCdBody &b,const hkpCollisionInput &in) { return in.m_convexListFilter->getConvexListCollisionType(a,b,in); }
class hkpConvexListAgent : public hkpCollisionAgent { public:
 hkpConvexListAgent(const hkpCdBody&,const hkpCdBody&,const hkpCollisionInput&,hkpContactMgr*); char rest[0x84];
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
