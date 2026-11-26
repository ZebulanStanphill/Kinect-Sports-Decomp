// hkpMoppAgent (Physics/Collide/Agent/CompoundAgent/BvTree/hkpMoppAgent.h), 0x40 bytes: an hkpBvTreeAgent
// (RTTI) for MOPP shapes, with no members of its own. Its vtable is hkpBvTreeAgent's slot for slot (the
// deleting destructor is folded with hkpBvTreeAgent's). The constructor is out of line (82D556A0) and inlined
// in createBvBvAgent (82D556E0), which is defined next to it. The static linear cast keeps its fn_ name
// (82D55500; the registerAgent functions store it for the MOPP pairs).
#ifndef HAVOK_HKPMOPPAGENT_H
#define HAVOK_HKPMOPPAGENT_H

#include "havok/hkpBvTreeAgent.h"

// hkpMoppAgent::staticLinearCast
extern "C" void fn_82D55500(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                            hkpCdPointCollector &collector, hkpCdPointCollector *startCollector);

class hkpMoppAgent : public hkpBvTreeAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpMoppAgent(hkpContactMgr *mgr);   // out of line (82D556A0)

    static hkpCollisionAgent *HK_CALL createBvBvAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                      const hkpCollisionInput &input, hkpContactMgr *mgr);
    static void HK_CALL staticLinearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                         const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector,
                                         hkpCdPointCollector *startCollector)
    {
        fn_82D55500(bodyA, bodyB, input, collector, startCollector);
    }
};

#endif
