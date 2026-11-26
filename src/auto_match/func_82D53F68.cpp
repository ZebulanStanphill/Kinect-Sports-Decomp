#include "havok/hkpSymmetricAgent.h"
// hkpBvTreeStreamAgent and hkpBvTreeAgent (Physics/Collide/Agent/CompoundAgent/BvTree*) have no shared
// header; naming hkpSymmetricAgent<..> of them needs only their base.
class hkpBvTreeStreamAgent : public hkpCollisionAgent {
public:
    static hkpCollisionAgent *HK_CALL createAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                  const hkpCollisionInput &input, hkpContactMgr *mgr);
};
class hkpBvTreeAgent : public hkpCollisionAgent {};
class hkpMoppAgent {
public:
    static hkpCollisionAgent *HK_CALL createBvBvAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                      const hkpCollisionInput &input, hkpContactMgr *mgr);
};
// The flipped statics are instantiated in the agents' .cpp files (createAgent: fn_82D54A38).
extern template hkpCollisionAgent *HK_CALL hkpSymmetricAgent<hkpBvTreeStreamAgent>::createAgent(
    const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
extern template void HK_CALL hkpSymmetricAgent<hkpBvTreeAgent>::staticGetPenetrations(
    const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
    hkpCdBodyPairCollector &collector);
extern template void HK_CALL hkpSymmetricAgent<hkpBvTreeAgent>::staticGetClosestPoints(
    const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);
extern "C" void fn_82D53D68();
extern "C" void fn_82D57DB8();
extern "C" void fn_82D55500();
extern "C" void fn_82D58028();
struct AgentFuncs { void *create,*penetrations,*closest,*cast; unsigned char flipped,predictive; char pad[2]; };
extern "C" void fn_82D59158(void*,const AgentFuncs*,int,int);
extern "C" void fn_82D53F68(void *dispatcher) { AgentFuncs a,b,c;
a.create = (void*)hkpSymmetricAgent<hkpBvTreeStreamAgent>::createAgent;
a.penetrations = (void*)hkpSymmetricAgent<hkpBvTreeAgent>::staticGetPenetrations;
a.closest = (void*)hkpSymmetricAgent<hkpBvTreeAgent>::staticGetClosestPoints;
a.cast = (void*)fn_82D53D68;
a.flipped = 1;
a.predictive = 1;
fn_82D59158(dispatcher,&a,10,0x12);
b.create = (void*)hkpBvTreeStreamAgent::createAgent;
b.penetrations = (void*)fn_82D58028;
b.closest = (void*)fn_82D57DB8;
b.cast = (void*)fn_82D55500;
b.flipped = 0;
b.predictive = 1;
fn_82D59158(dispatcher,&b,0x12,10);
c.create = (void*)hkpMoppAgent::createBvBvAgent;
c.penetrations = (void*)fn_82D58028;
c.closest = (void*)fn_82D57DB8;
c.cast = (void*)fn_82D55500;
c.flipped = 0;
c.predictive = 1;
fn_82D59158(dispatcher,&c,10,10);
}
