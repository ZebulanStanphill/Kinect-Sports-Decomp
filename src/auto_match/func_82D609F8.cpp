#include "havok/hkBase.h"
class hkpCdBody; struct hkpCollisionInput; class hkpContactMgr; class hkpCollisionAgent; class hkpCdBodyPairCollector; class hkpCdPointCollector;
template<class T> class hkpSymmetricAgent { public: static void staticGetPenetrations(const hkpCdBody&,const hkpCdBody&,const hkpCollisionInput&,hkpCdBodyPairCollector&); static void staticGetClosestPoints(const hkpCdBody&,const hkpCdBody&,const hkpCollisionInput&,hkpCdPointCollector&); };
extern "C" void fn_82D60418();
extern "C" void fn_82D60698();
class hkpMultiRayConvexAgent { public: static hkpCollisionAgent* createMultiRayConvexAgent(const hkpCdBody&,const hkpCdBody&,const hkpCollisionInput&,hkpContactMgr*); static hkpCollisionAgent* createConvexMultiRayAgent(const hkpCdBody&,const hkpCdBody&,const hkpCollisionInput&,hkpContactMgr*); };
class hkpMultiRayConvexAgent;
class hkpMultiRayConvexAgent;
extern "C" void fn_82D66F00();
extern "C" void fn_82D75FD0();
struct AgentFuncs { void *create,*penetrations,*closest,*cast; unsigned char flipped,predictive; char pad[2]; };
extern "C" void fn_82D59158(void*,const AgentFuncs*,int,int);
extern "C" void fn_82D609F8(void *dispatcher) { AgentFuncs a,b;
a.create = (void*)hkpMultiRayConvexAgent::createConvexMultiRayAgent;
a.penetrations = (void*)hkpSymmetricAgent<hkpMultiRayConvexAgent>::staticGetPenetrations;
a.closest = (void*)hkpSymmetricAgent<hkpMultiRayConvexAgent>::staticGetClosestPoints;
a.cast = (void*)fn_82D66F00;
a.flipped = 1;
a.predictive = 1;
fn_82D59158(dispatcher,&a,0x12,0x19);
b.predictive = 1;
b.create = (void*)hkpMultiRayConvexAgent::createMultiRayConvexAgent;
b.penetrations = (void*)fn_82D60698;
b.closest = (void*)fn_82D60418;
b.cast = (void*)fn_82D75FD0;
b.flipped = 0;
fn_82D59158(dispatcher,&b,0x19,0x12);
}
