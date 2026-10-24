#include "havok/hkBase.h"
class hkpCdBody; struct hkpCollisionInput; class hkpContactMgr; class hkpCollisionAgent; class hkpCdBodyPairCollector; class hkpCdPointCollector;
template<class T> class hkpSymmetricAgent { public: static void staticGetPenetrations(const hkpCdBody&,const hkpCdBody&,const hkpCollisionInput&,hkpCdBodyPairCollector&); static void staticGetClosestPoints(const hkpCdBody&,const hkpCdBody&,const hkpCollisionInput&,hkpCdPointCollector&); };
class hkpTransformAgent { public: static hkpCollisionAgent* createTransformBAgent(const hkpCdBody&,const hkpCdBody&,const hkpCollisionInput&,hkpContactMgr*); static hkpCollisionAgent* createTransformAAgent(const hkpCdBody&,const hkpCdBody&,const hkpCollisionInput&,hkpContactMgr*); };
extern "C" void fn_82D6AFF0();
extern "C" void fn_82D6B118();
extern "C" void fn_82D6B238();
class hkpTransformAgent;
class hkpTransformAgent;
extern "C" void fn_82D6B688();
struct AgentFuncs { void *create,*penetrations,*closest,*cast; unsigned char flipped,predictive; char pad[2]; };
extern "C" void fn_82D59158(void*,const AgentFuncs*,int,int);
extern "C" void fn_82D6B470(void *dispatcher) { AgentFuncs a,b;
a.create = (void*)hkpTransformAgent::createTransformBAgent;
a.penetrations = (void*)hkpSymmetricAgent<hkpTransformAgent>::staticGetPenetrations;
a.closest = (void*)hkpSymmetricAgent<hkpTransformAgent>::staticGetClosestPoints;
a.cast = (void*)fn_82D6B688;
a.flipped = 1;
a.predictive = 1;
fn_82D59158(dispatcher,&a,-1,0xf);
b.predictive = 1;
b.create = (void*)hkpTransformAgent::createTransformAAgent;
b.penetrations = (void*)fn_82D6B238;
b.closest = (void*)fn_82D6B118;
b.cast = (void*)fn_82D6AFF0;
b.flipped = 0;
fn_82D59158(dispatcher,&b,0xf,-1);
}
