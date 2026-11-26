#include "havok/hkBase.h"
#include "havok/hkpSymmetricAgent.h"
// RTTI: hkpConvexListAgent -> hkpPredGskfAgent -> hkpGskfAgent -> hkpGskBaseAgent -> hkpIterativeLinearCastAgent.
// Only the statics are needed here, so it is declared on the last base that has a header.
class hkpConvexListAgent : public hkpIterativeLinearCastAgent {
public:
    static void HK_CALL staticGetPenetrations(const hkpCdBody &, const hkpCdBody &, const hkpCollisionInput &,
                                              hkpCdBodyPairCollector &);
    static void HK_CALL staticGetClosestPoints(const hkpCdBody &, const hkpCdBody &, const hkpCollisionInput &,
                                               hkpCdPointCollector &);
};
extern "C" void fn_82D5C608();
extern "C" void fn_82D5D550();
extern "C" void fn_82D5CD78();
extern "C" void fn_82D5C358();
extern "C" void fn_82D5C0E0();
extern "C" void fn_82D5C4B0();
extern "C" void fn_82D5CF10();
struct AgentFuncs { void *create,*penetrations,*closest,*cast; unsigned char flipped,predictive; char pad[2]; };
extern "C" void fn_82D59158(void*,const AgentFuncs*,int,int);
extern "C" void fn_82D5D148(void *dispatcher) { AgentFuncs a,b,c;
a.create = (void*)fn_82D5C608;
a.penetrations = (void*)hkpSymmetricAgent<hkpConvexListAgent>::staticGetPenetrations;
a.closest = (void*)hkpSymmetricAgent<hkpConvexListAgent>::staticGetClosestPoints;
a.cast = (void*)fn_82D5D550;
a.flipped = 1;
a.predictive = 1;
fn_82D59158(dispatcher,&a,0x17,0x12);
b.create = (void*)fn_82D5CD78;
b.penetrations = (void*)fn_82D5C358;
b.closest = (void*)fn_82D5C0E0;
b.cast = (void*)fn_82D5C4B0;
b.flipped = 0;
b.predictive = 1;
fn_82D59158(dispatcher,&b,0x12,0x17);
c.create = (void*)fn_82D5CF10;
c.penetrations = (void*)fn_82D5C358;
c.closest = (void*)fn_82D5C0E0;
c.cast = (void*)fn_82D5C4B0;
c.flipped = 0;
c.predictive = 1;
fn_82D59158(dispatcher,&c,0x17,0x17);
}
