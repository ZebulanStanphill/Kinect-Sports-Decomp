#include "havok/hkBase.h"
class hkpCdBody; struct hkpCollisionInput; class hkpContactMgr; class hkpCollisionAgent; class hkpCdBodyPairCollector; class hkpCdPointCollector;
template<class T> class hkpSymmetricAgent { public: static hkpCollisionAgent* createAgent(const hkpCdBody&,const hkpCdBody&,const hkpCollisionInput&,hkpContactMgr*); static void staticGetPenetrations(const hkpCdBody&,const hkpCdBody&,const hkpCollisionInput&,hkpCdBodyPairCollector&); static void staticGetClosestPoints(const hkpCdBody&,const hkpCdBody&,const hkpCollisionInput&,hkpCdPointCollector&); };
class hkpListAgent;
extern "C" void fn_82D6C3E0();
extern "C" void fn_82D6BE30();
extern "C" void fn_82D6C100();
extern "C" void fn_82D5FB30();
extern "C" void fn_82D5D288();
extern "C" void fn_82D5D2D0();
extern "C" void fn_82D5D320();
struct AgentFuncs { void *create,*penetrations,*closest,*cast; unsigned char flipped,predictive; char pad[2]; };
extern "C" void fn_82D59158(void*,const AgentFuncs*,int,int);
extern "C" void fn_82D5FCD0(void *dispatcher) { AgentFuncs a,b;
a.create = (void*)hkpSymmetricAgent<hkpListAgent>::createAgent;
a.penetrations = (void*)fn_82D6C3E0;
a.closest = (void*)fn_82D6BE30;
a.cast = (void*)fn_82D6C100;
a.flipped = 1;
a.predictive = 1;
fn_82D59158(dispatcher,&a,9,-1);
b.predictive = 1;
b.create = (void*)fn_82D5FB30;
b.penetrations = (void*)fn_82D5D288;
b.closest = (void*)fn_82D5D2D0;
b.cast = (void*)fn_82D5D320;
b.flipped = 0;
fn_82D59158(dispatcher,&b,-1,9);
}
