#include "havok/hkBase.h"
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpConvexListAgent.h"
extern "C" void fn_82D5C608();
extern "C" void fn_82D5CD78();
extern "C" void fn_82D5CF10();
struct AgentFuncs { void *create,*penetrations,*closest,*cast; unsigned char flipped,predictive; char pad[2]; };
extern "C" void fn_82D59158(void*,const AgentFuncs*,int,int);
extern "C" void fn_82D5D148(void *dispatcher) { AgentFuncs a,b,c;
a.create = (void*)fn_82D5C608;
a.penetrations = (void*)hkpSymmetricAgent<hkpConvexListAgent>::staticGetPenetrations;
a.closest = (void*)hkpSymmetricAgent<hkpConvexListAgent>::staticGetClosestPoints;
a.cast = (void*)hkpSymmetricAgent<hkpConvexListAgent>::staticLinearCast;
a.flipped = 1;
a.predictive = 1;
fn_82D59158(dispatcher,&a,0x17,0x12);
b.create = (void*)fn_82D5CD78;
b.penetrations = (void*)hkpConvexListAgent::staticGetPenetrations;
b.closest = (void*)hkpConvexListAgent::staticGetClosestPoints;
b.cast = (void*)hkpConvexListAgent::staticLinearCast;
b.flipped = 0;
b.predictive = 1;
fn_82D59158(dispatcher,&b,0x12,0x17);
c.create = (void*)fn_82D5CF10;
c.penetrations = (void*)hkpConvexListAgent::staticGetPenetrations;
c.closest = (void*)hkpConvexListAgent::staticGetClosestPoints;
c.cast = (void*)hkpConvexListAgent::staticLinearCast;
c.flipped = 0;
c.predictive = 1;
fn_82D59158(dispatcher,&c,0x17,0x17);
}
