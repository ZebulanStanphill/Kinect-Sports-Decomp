#include "havok/hkBase.h"
class hkpCdBody; struct hkpCollisionInput; class hkpContactMgr; class hkpCollisionAgent; class hkpCdBodyPairCollector; class hkpCdPointCollector;
template<class T> class hkpSymmetricAgent { public: static void staticGetPenetrations(const hkpCdBody&,const hkpCdBody&,const hkpCollisionInput&,hkpCdBodyPairCollector&); static void staticGetClosestPoints(const hkpCdBody&,const hkpCdBody&,const hkpCollisionInput&,hkpCdPointCollector&); };
extern "C" void fn_82D6CE58();
extern "C" void fn_82D6D088();
extern "C" void fn_82D6D2C8();
class hkpMultiSphereAgent { public: static hkpCollisionAgent* createMultiSphereAAgent(const hkpCdBody&,const hkpCdBody&,const hkpCollisionInput&,hkpContactMgr*); static hkpCollisionAgent* createMultiSphereBAgent(const hkpCdBody&,const hkpCdBody&,const hkpCollisionInput&,hkpContactMgr*); };
class hkpMultiSphereAgent;
class hkpMultiSphereAgent;
extern "C" void fn_82D6D820();
struct AgentFuncs { void *create,*penetrations,*closest,*cast; unsigned char flipped,predictive; char pad[2]; };
extern "C" void fn_82D59158(void*,const AgentFuncs*,int,int);
extern "C" void fn_82D6D6B8(void *dispatcher) { AgentFuncs a,b;
a.create = (void*)hkpMultiSphereAgent::createMultiSphereBAgent;
a.penetrations = (void*)hkpSymmetricAgent<hkpMultiSphereAgent>::staticGetPenetrations;
a.closest = (void*)hkpSymmetricAgent<hkpMultiSphereAgent>::staticGetClosestPoints;
a.cast = (void*)fn_82D6D820;
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
