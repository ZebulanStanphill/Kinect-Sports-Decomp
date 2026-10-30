#include "havok/hkBase.h"
class hkpCollisionAgent; class hkpCdBody; struct hkpCollisionInput; class hkpContactMgr;
class hkpBoxBoxAgent { public: static hkpCollisionAgent *createBoxBoxAgent(const hkpCdBody&, const hkpCdBody&, const hkpCollisionInput&, hkpContactMgr*); };
extern "C" { void fn_82D686D8(); void fn_82D684C0(); void fn_82D75FD0(); void fn_82D59158(void *,const void *,int,int); }
struct AgentFuncs { void *create; void (*penetrations)(); void (*closest)(); void (*cast)(); char flipped, predictive; };
extern "C" void fn_82D68928(void *d) {
 AgentFuncs f;
 f.create=(void*)hkpBoxBoxAgent::createBoxBoxAgent;
 f.flipped=0;
 f.penetrations=fn_82D686D8;
 f.closest=fn_82D684C0;
 f.cast=fn_82D75FD0;
 f.predictive=0;
 fn_82D59158(d,&f,4,4);
}
