#include "havok/hkBase.h"
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpTransformAgent.h"
struct AgentFuncs { void *create,*penetrations,*closest,*cast; unsigned char flipped,predictive; char pad[2]; };
extern "C" void fn_82D59158(void*,const AgentFuncs*,int,int);
extern "C" void fn_82D6B470(void *dispatcher) { AgentFuncs a,b;
a.create = (void*)hkpTransformAgent::createTransformBAgent;
a.penetrations = (void*)hkpSymmetricAgent<hkpTransformAgent>::staticGetPenetrations;
a.closest = (void*)hkpSymmetricAgent<hkpTransformAgent>::staticGetClosestPoints;
a.cast = (void*)hkpSymmetricAgent<hkpTransformAgent>::staticLinearCast;
a.flipped = 1;
a.predictive = 1;
fn_82D59158(dispatcher,&a,-1,0xf);
b.predictive = 1;
b.create = (void*)hkpTransformAgent::createTransformAAgent;
b.penetrations = (void*)hkpTransformAgent::staticGetPenetrations;
b.closest = (void*)hkpTransformAgent::staticGetClosestPoints;
b.cast = (void*)hkpTransformAgent::staticLinearCast;
b.flipped = 0;
fn_82D59158(dispatcher,&b,0xf,-1);
}
