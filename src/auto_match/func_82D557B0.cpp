#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpMoppAgent.h"
extern "C" void fn_82D56190();
extern "C" void fn_82D53D68();
extern "C" void fn_82D560E8();
struct AgentFuncs { void *create,*penetrations,*closest,*cast; unsigned char flipped,predictive; char pad[2]; };
extern "C" void fn_82D59158(void*,const AgentFuncs*,int,int);
extern "C" void fn_82D557B0(void *dispatcher) { AgentFuncs a,b,c;
a.create = (void*)fn_82D56190;
a.penetrations = (void*)hkpSymmetricAgent<hkpBvTreeAgent>::staticGetPenetrations;
a.closest = (void*)hkpSymmetricAgent<hkpBvTreeAgent>::staticGetClosestPoints;
a.cast = (void*)fn_82D53D68;
a.flipped = 1;
a.predictive = 0;
fn_82D59158(dispatcher,&a,10,-1);
b.create = (void*)fn_82D560E8;
b.penetrations = (void*)hkpBvTreeAgent::staticGetPenetrations;
b.closest = (void*)hkpBvTreeAgent::staticGetClosestPoints;
b.cast = (void*)fn_82D55500;
b.flipped = 0;
b.predictive = 0;
fn_82D59158(dispatcher,&b,-1,10);
c.create = (void*)hkpMoppAgent::createBvBvAgent;
c.penetrations = (void*)hkpBvTreeAgent::staticGetPenetrations;
c.closest = (void*)hkpBvTreeAgent::staticGetClosestPoints;
c.cast = (void*)fn_82D55500;
c.flipped = 0;
c.predictive = 1;
fn_82D59158(dispatcher,&c,10,10);
}
