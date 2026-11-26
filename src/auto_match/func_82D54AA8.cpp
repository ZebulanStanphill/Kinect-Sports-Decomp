#include "havok/hkpSymmetricAgent.h"
// RTTI: hkpBvTreeStreamAgent -> hkpCollisionAgent, hkpBvTreeAgent -> hkpCollisionAgent.
class hkpBvTreeStreamAgent : public hkpCollisionAgent {
public:
    hkpBvTreeStreamAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                         hkpContactMgr *mgr);
    static hkpCollisionAgent *HK_CALL createAgent(const hkpCdBody &, const hkpCdBody &, const hkpCollisionInput &,
                                                  hkpContactMgr *);
};
class hkpBvTreeAgent : public hkpCollisionAgent {
public:
    static void HK_CALL staticGetPenetrations(const hkpCdBody &, const hkpCdBody &, const hkpCollisionInput &,
                                              hkpCdBodyPairCollector &);
    static void HK_CALL staticGetClosestPoints(const hkpCdBody &, const hkpCdBody &, const hkpCollisionInput &,
                                               hkpCdPointCollector &);
};
extern "C" void fn_82D54F10();
extern "C" void fn_82D58028();
extern "C" void fn_82D57DB8();
extern "C" void fn_82D57B60();
struct AgentFuncs { void *create,*penetrations,*closest,*cast; unsigned char flipped,predictive; char pad[2]; };
extern "C" void fn_82D59158(void*,const AgentFuncs*,int,int);
extern "C" void fn_82D54AA8(void *dispatcher) { AgentFuncs a,b;
a.create = (void*)hkpSymmetricAgent<hkpBvTreeStreamAgent>::createAgent;
a.penetrations = (void*)hkpSymmetricAgent<hkpBvTreeAgent>::staticGetPenetrations;
a.closest = (void*)hkpSymmetricAgent<hkpBvTreeAgent>::staticGetClosestPoints;
a.cast = (void*)fn_82D54F10;
a.flipped = 1;
a.predictive = 1;
fn_82D59158(dispatcher,&a,8,0x12);
b.predictive = 1;
b.create = (void*)hkpBvTreeStreamAgent::createAgent;
b.penetrations = (void*)fn_82D58028;
b.closest = (void*)fn_82D57DB8;
b.cast = (void*)fn_82D57B60;
b.flipped = 0;
fn_82D59158(dispatcher,&b,0x12,8);
}
