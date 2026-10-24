#include "havok/hkBase.h"
class hkpCdBody;
class hkpContactMgr;
class hkpGskBaseAgent : public hkReferencedObject {
public:
 HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
 hkpGskBaseAgent(const hkpCdBody &,const hkpCdBody &,hkpContactMgr *);
 char data[0x28];
};
class hkpGskfAgent : public hkpGskBaseAgent {
public:
 hkpGskfAgent(const hkpCdBody &,const hkpCdBody &,hkpContactMgr *);
 char extra[0x50];
};
class hkpPredGskfAgent : public hkpGskfAgent {
public:
 HK_FORCE_INLINE hkpPredGskfAgent(const hkpCdBody &a,const hkpCdBody &b,hkpContactMgr *m) : hkpGskfAgent(a,b,m) {}
};
extern "C" hkpGskBaseAgent *fn_82D6A0E8(const hkpCdBody &a,const hkpCdBody &b,const void *input,hkpContactMgr *m) {
 if (m) return new hkpPredGskfAgent(a,b,m);
 return new hkpGskBaseAgent(a,b,0);
}
