#include "havok/hkBase.h"
class hkpCdBody; struct hkpCollisionInput; class hkpContactMgr;
class hkpCollisionAgent { public: virtual ~hkpCollisionAgent(); HK_DECLARE_CLASS_ALLOCATOR(X); };
class Filter { public: virtual void a(); virtual void b(); virtual void c(); virtual unsigned select(const hkpCdBody&,const hkpCdBody&,const hkpCollisionInput&); };
struct hkpCollisionInput { char pad[16]; Filter *filter; };
class hkpShapeCollectionAgent : public hkpCollisionAgent { public: hkpShapeCollectionAgent(const hkpCdBody&,const hkpCdBody&,const hkpCollisionInput&,hkpContactMgr*); char pad[0x34]; };
template<class T> class hkpSymmetricAgent : public T { public: hkpSymmetricAgent(const hkpCdBody&a,const hkpCdBody&b,const hkpCollisionInput&i,hkpContactMgr*m):T(b,a,i,m) {} };
class hkpGskfAgent;
extern "C" void fn_82D757E8(hkpGskfAgent*,const hkpCdBody&,const hkpCdBody&,hkpContactMgr*);
class hkpGskfAgent : public hkpCollisionAgent { public: hkpGskfAgent(const hkpCdBody&a,const hkpCdBody&b,hkpContactMgr*m); char pad[0x7c]; };
class hkpPredGskfAgent : public hkpGskfAgent { public: hkpPredGskfAgent(const hkpCdBody&a,const hkpCdBody&b,hkpContactMgr*m):hkpGskfAgent(a,b,m) {} };
extern "C" hkpCollisionAgent *fn_82D5C050(void*,const hkpCdBody&,const hkpCdBody&,const hkpCollisionInput&,hkpContactMgr*);
extern "C" hkpCollisionAgent *fn_82D5CD78(const hkpCdBody&a,const hkpCdBody&b,const hkpCollisionInput&i,hkpContactMgr*m) {
 if(m) {
  switch(i.filter->select(b,a,i)) {
   case 0: return fn_82D5C050(hkpCollisionAgent::operator new(0x90),a,b,i,m);
   case 1: return new hkpSymmetricAgent<hkpShapeCollectionAgent>(a,b,i,m);
   case 2: return new hkpPredGskfAgent(a,b,m);
   default: return 0;
  }
 }
 return new hkpSymmetricAgent<hkpShapeCollectionAgent>(a,b,i,0);
}
