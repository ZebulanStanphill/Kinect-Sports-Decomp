#include "havok/hkBase.h"
#include "havok/hkpCapsuleCapsuleAgent.h"
class hkpCollisionAgent; class hkpCdBody; struct hkpCollisionInput; class hkpContactMgr;
extern "C" {    void fn_82D59158(void *,const void *,int,int); }
struct AgentFuncs { void *create, *penetrations, *closest, *cast; char flipped, predictive; };
extern "C" void fn_82D641D0(void *d) {
 AgentFuncs f;
 f.create=(void*)hkpCapsuleCapsuleAgent::createCapsuleCapsuleAgent;
 f.flipped=0;
 f.penetrations=(void*)hkpCapsuleCapsuleAgent::staticGetPenetrations;
 f.closest=(void*)hkpCapsuleCapsuleAgent::staticGetClosestPoints;
 f.cast=(void*)fn_82D75FD0;
 f.predictive=0;
 fn_82D59158(d,&f,5,5);
}
