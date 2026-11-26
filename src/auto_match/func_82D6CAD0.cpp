#include "havok/hkpShapeCollectionAgent.h"

class hkpCdBody; struct hkpCollisionInput; class hkpContactMgr; class hkpCollisionAgent; class hkpCdBodyPairCollector; class hkpCdPointCollector;
extern "C" void fn_82D5D288();
extern "C" void fn_82D5D2D0();
extern "C" void fn_82D5D320();
struct AgentFuncs { void *create,*penetrations,*closest,*cast; unsigned char flipped,predictive; char pad[2]; };
extern "C" void fn_82D59158(void*,const AgentFuncs*,int,int);
extern "C" void fn_82D6CAD0(void *dispatcher) { AgentFuncs a,b;
a.create = (void*)hkpShapeCollectionAgent::createListBAgent;
a.penetrations = (void*)fn_82D5D288;
a.closest = (void*)fn_82D5D2D0;
a.cast = (void*)fn_82D5D320;
a.flipped = 1;
a.predictive = 1;
fn_82D59158(dispatcher,&a,-1,7);
b.predictive = 1;
b.create = (void*)hkpShapeCollectionAgent::createListAAgent;
b.penetrations = (void*)fn_82D6C3E0;
b.closest = (void*)fn_82D6BE30;
b.cast = (void*)fn_82D6C100;
b.flipped = 0;
fn_82D59158(dispatcher,&b,7,-1);
}
