#include "havok/hkBase.h"
class hkpCdBody; struct hkpCollisionInput; class hkpContactMgr; class hkpCollisionAgent; class hkpCdBodyPairCollector; class hkpCdPointCollector;
template<class T> class hkpSymmetricAgent { public: static hkpCollisionAgent* createAgent(const hkpCdBody&,const hkpCdBody&,const hkpCollisionInput&,hkpContactMgr*); static void staticGetPenetrations(const hkpCdBody&,const hkpCdBody&,const hkpCollisionInput&,hkpCdBodyPairCollector&); static void staticGetClosestPoints(const hkpCdBody&,const hkpCdBody&,const hkpCollisionInput&,hkpCdPointCollector&); };
class hkpBvTreeStreamAgent { public: static hkpCollisionAgent* createAgent(const hkpCdBody&,const hkpCdBody&,const hkpCollisionInput&,hkpContactMgr*); };
class hkpBvTreeAgent;
extern "C" void fn_82D54F10();
extern "C" void fn_82D58028();
extern "C" void fn_82D57DB8();
extern "C" void fn_82D57B60();
struct AgentFuncs { void *create,*penetrations,*closest,*cast; unsigned char flipped,predictive; char pad[2]; };
extern "C" void fn_82D59158(void*,const AgentFuncs*,int,int);
extern "C" void fn_82D54B78(void *dispatcher) { AgentFuncs a,b;
a.create = (void*)hkpSymmetricAgent<hkpBvTreeStreamAgent>::createAgent;
a.penetrations = (void*)hkpSymmetricAgent<hkpBvTreeAgent>::staticGetPenetrations;
a.closest = (void*)hkpSymmetricAgent<hkpBvTreeAgent>::staticGetClosestPoints;
a.cast = (void*)fn_82D54F10;
a.flipped = 1;
a.predictive = 1;
fn_82D59158(dispatcher,&a,8,0x19);
b.predictive = 1;
b.create = (void*)hkpBvTreeStreamAgent::createAgent;
b.penetrations = (void*)fn_82D58028;
b.closest = (void*)fn_82D57DB8;
b.cast = (void*)fn_82D57B60;
b.flipped = 0;
fn_82D59158(dispatcher,&b,0x19,8);
}
