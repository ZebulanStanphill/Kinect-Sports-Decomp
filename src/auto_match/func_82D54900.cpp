#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpBvTreeStreamAgent.h"
#include "havok/hkpShapeCollectionAgent.h"
extern "C" hkReferencedObject *fn_82D54900(const hkpCdBody &a,const hkpCdBody &b,const hkpCollisionInput &in,hkpContactMgr *mgr) { if(mgr) { unsigned type=in.m_convexListFilter->getConvexListCollisionType(a,b,in); switch(type) {case 1:return new hkpShapeCollectionAgent(a,b,in,mgr); case 0:case 2:return new hkpBvTreeStreamAgent(a,b,in,mgr); default:return 0;} } return new hkpSymmetricAgent<hkpBvTreeStreamAgent>(a,b,in,0); }
