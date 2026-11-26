#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpMultiSphereAgent.h"
struct AgentFuncs { void *create,*penetrations,*closest,*cast; unsigned char flipped,predictive; char pad[2]; };
extern "C" void fn_82D59158(void*,const AgentFuncs*,int,int);
extern "C" void fn_82D6D6B8(void *dispatcher) { AgentFuncs a,b;
a.create = (void*)hkpMultiSphereAgent::createMultiSphereBAgent;
a.penetrations = (void*)hkpSymmetricAgent<hkpMultiSphereAgent>::staticGetPenetrations;
a.closest = (void*)hkpSymmetricAgent<hkpMultiSphereAgent>::staticGetClosestPoints;
a.cast = (void*)hkpSymmetricAgent<hkpMultiSphereAgent>::staticLinearCast;
a.flipped = 1;
a.predictive = 1;
fn_82D59158(dispatcher,&a,-1,0x16);
b.predictive = 1;
b.create = (void*)hkpMultiSphereAgent::createMultiSphereAAgent;
b.penetrations = (void*)fn_82D6D2C8;
b.closest = (void*)fn_82D6CE58;
b.cast = (void*)fn_82D6D088;
b.flipped = 0;
fn_82D59158(dispatcher,&b,0x16,-1);
}
