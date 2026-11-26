#include "havok/hkpSymmetricAgent.h"

class hkpHeightFieldAgent : public hkpCollisionAgent {
public:
    static hkpCollisionAgent *HK_CALL createAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                  const hkpCollisionInput &input, hkpContactMgr *mgr);
};

// The flipped functions are defined in hkpHeightFieldAgent.cpp (createAgent: func_82D5A7E0).
extern template hkpCollisionAgent *HK_CALL hkpSymmetricAgent<hkpHeightFieldAgent>::createAgent(
    const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
extern template void HK_CALL hkpSymmetricAgent<hkpHeightFieldAgent>::staticGetPenetrations(
    const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
extern template void HK_CALL hkpSymmetricAgent<hkpHeightFieldAgent>::staticGetClosestPoints(
    const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpCdPointCollector &collector);

extern "C" void fn_82D5AAB0();
extern "C" void fn_82D59D40();
extern "C" void fn_82D59FB0();
extern "C" void fn_82D5A348();
struct AgentFuncs { void *create,*penetrations,*closest,*cast; unsigned char flipped,predictive; char pad[2]; };
extern "C" void fn_82D59158(void*,const AgentFuncs*,int,int);
extern "C" void fn_82D5A850(void *dispatcher) { AgentFuncs a,b;
a.create = (void*)hkpSymmetricAgent<hkpHeightFieldAgent>::createAgent;
a.penetrations = (void*)hkpSymmetricAgent<hkpHeightFieldAgent>::staticGetPenetrations;
a.closest = (void*)hkpSymmetricAgent<hkpHeightFieldAgent>::staticGetClosestPoints;
a.cast = (void*)fn_82D5AAB0;
a.flipped = 1;
a.predictive = 1;
fn_82D59158(dispatcher,&a,0x1a,0x1b);
b.predictive = 1;
b.create = (void*)hkpHeightFieldAgent::createAgent;
b.penetrations = (void*)fn_82D59D40;
b.closest = (void*)fn_82D59FB0;
b.cast = (void*)fn_82D5A348;
b.flipped = 0;
fn_82D59158(dispatcher,&b,0x1b,0x1a);
}
