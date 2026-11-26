#include "havok/hkpSymmetricAgent.h"
// Kept local: the call through input.m_filter (+0x10) uses vtable slot +0xC with (bodyA, bodyB, input) and
// switches on 0/1/2, like Havok's hkpConvexListFilter::getConvexListCollisionType; the header's
// hkpCollisionFilter has init(hkpWorld *) in that slot.
class hkpCollisionFilter { public: virtual void a(); virtual void b(); virtual void c(); virtual int get(const hkpCdBody &,const hkpCdBody &,const hkpCollisionInput &) const; };
class hkpBvTreeStreamAgent : public hkpCollisionAgent { public:
 hkpBvTreeStreamAgent(const hkpCdBody &,const hkpCdBody &,const hkpCollisionInput &,hkpContactMgr *);
 char bytes[0x40-0xC];
};
class hkpShapeCollectionAgent : public hkpCollisionAgent { public:
 hkpShapeCollectionAgent(const hkpCdBody &,const hkpCdBody &,const hkpCollisionInput &,hkpContactMgr *);
 char bytes[0x38-0xC];
};
extern "C" hkReferencedObject *fn_82D54900(const hkpCdBody &a,const hkpCdBody &b,const hkpCollisionInput &in,hkpContactMgr *mgr) { if(mgr) { unsigned type=in.m_filter->get(a,b,in); switch(type) {case 1:return new hkpShapeCollectionAgent(a,b,in,mgr); case 0:case 2:return new hkpBvTreeStreamAgent(a,b,in,mgr); default:return 0;} } return new hkpSymmetricAgent<hkpBvTreeStreamAgent>(a,b,in,0); }
