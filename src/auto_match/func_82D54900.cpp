#include "havok/hkpSymmetricAgent.h"
class hkpBvTreeStreamAgent : public hkpCollisionAgent { public:
 hkpBvTreeStreamAgent(const hkpCdBody &,const hkpCdBody &,const hkpCollisionInput &,hkpContactMgr *);
 char bytes[0x40-0xC];
};
class hkpShapeCollectionAgent : public hkpCollisionAgent { public:
 hkpShapeCollectionAgent(const hkpCdBody &,const hkpCdBody &,const hkpCollisionInput &,hkpContactMgr *);
 char bytes[0x38-0xC];
};
extern "C" hkReferencedObject *fn_82D54900(const hkpCdBody &a,const hkpCdBody &b,const hkpCollisionInput &in,hkpContactMgr *mgr) { if(mgr) { unsigned type=in.m_convexListFilter->getConvexListCollisionType(a,b,in); switch(type) {case 1:return new hkpShapeCollectionAgent(a,b,in,mgr); case 0:case 2:return new hkpBvTreeStreamAgent(a,b,in,mgr); default:return 0;} } return new hkpSymmetricAgent<hkpBvTreeStreamAgent>(a,b,in,0); }
