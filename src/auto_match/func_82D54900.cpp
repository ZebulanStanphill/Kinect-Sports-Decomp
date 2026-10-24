#include "havok/hkBase.h"
class hkpCdBody; struct hkpCollisionInput; class hkpContactMgr;
class hkpCollisionFilter { public: virtual void a(); virtual void b(); virtual void c(); virtual int get(const hkpCdBody &,const hkpCdBody &,const hkpCollisionInput &) const; };
struct hkpCollisionInput { char pad[16]; hkpCollisionFilter *filter; };
class hkpBvTreeStreamAgent : public hkReferencedObject { public:
 hkpBvTreeStreamAgent(const hkpCdBody &,const hkpCdBody &,const hkpCollisionInput &,hkpContactMgr *);
 char bytes[0x40-8];
};
class hkpShapeCollectionAgent : public hkReferencedObject { public:
 hkpShapeCollectionAgent(const hkpCdBody &,const hkpCdBody &,const hkpCollisionInput &,hkpContactMgr *);
 char bytes[0x38-8];
};
template<class A> class hkpSymmetricAgent : public A { public:
 hkpSymmetricAgent(const hkpCdBody &a,const hkpCdBody &b,const hkpCollisionInput &i,hkpContactMgr *m):A(b,a,i,m) {}
};
extern "C" hkReferencedObject *fn_82D54900(const hkpCdBody &a,const hkpCdBody &b,const hkpCollisionInput &in,hkpContactMgr *mgr) { if(mgr) { unsigned type=in.filter->get(a,b,in); switch(type) {case 1:return new hkpShapeCollectionAgent(a,b,in,mgr); case 0:case 2:return new hkpBvTreeStreamAgent(a,b,in,mgr); default:return 0;} } return new hkpSymmetricAgent<hkpBvTreeStreamAgent>(a,b,in,0); }
