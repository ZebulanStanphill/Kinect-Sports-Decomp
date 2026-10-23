#include "havok/hkBase.h"
class hkpCollisionAgent; class hkpCdBody; struct hkpCollisionInput; class hkpContactMgr;
class hkpCapsuleCapsuleAgent { public: static hkpCollisionAgent *createCapsuleCapsuleAgent(const hkpCdBody&, const hkpCdBody&, const hkpCollisionInput&, hkpContactMgr*); };
extern "C" { void fn_82D63AC0(); void fn_82D64040(); void fn_82D75FD0(); void fn_82D59158(void *,const void *,int,int); }
struct AgentFuncs { void *create; void (*penetrations)(); void (*closest)(); void (*cast)(); char flipped, predictive; };
extern "C" void fn_82D641D0(void *d) {
 AgentFuncs f;
 f.create=(void*)hkpCapsuleCapsuleAgent::createCapsuleCapsuleAgent;
 f.flipped=0;
 f.penetrations=fn_82D63AC0;
 f.closest=fn_82D64040;
 f.cast=fn_82D75FD0;
 f.predictive=0;
 fn_82D59158(d,&f,5,5);
}
