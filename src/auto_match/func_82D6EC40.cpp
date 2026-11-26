#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpBvAgent.h"
struct AgentFuncs { void *create,*penetrations,*closest,*cast; unsigned char flipped,predictive; char pad[2]; };
extern "C" void fn_82D59158(void*,const AgentFuncs*,int,int);
extern "C" void fn_82D6EC40(void *dispatcher) { AgentFuncs a,b;
a.create = (void*)hkpBvAgent::createShapeBvAgent;
a.penetrations = (void*)hkpSymmetricAgent<hkpBvAgent>::staticGetPenetrations;
a.closest = (void*)hkpSymmetricAgent<hkpBvAgent>::staticGetClosestPoints;
a.cast = (void*)hkpSymmetricAgent<hkpBvAgent>::staticLinearCast;
a.flipped = 1;
a.predictive = 1;
fn_82D59158(dispatcher,&a,-1,0x1c);
b.predictive = 1;
b.create = (void*)hkpBvAgent::createBvShapeAgent;
b.penetrations = (void*)fn_82D6EA18;
b.closest = (void*)fn_82D6E680;
b.cast = (void*)fn_82D6E2C8;
b.flipped = 0;
fn_82D59158(dispatcher,&b,0x1c,-1);
}
