// hkpSymmetricAgent<hkpBvTreeStreamAgent>::createAgent (Physics/Collide/Agent/CompoundAgent/BvTreeStream/
// hkpBvTreeStreamAgent.cpp): allocates the agent with the class allocator (no null check), runs
// hkpBvTreeStreamAgent's constructor (out of line, fn_82D54230) with the bodies swapped, then stores
// hkpSymmetricAgent's vtable.
#include "havok/hkpSymmetricAgent.h"

class hkpBvTreeStreamAgent : public hkpCollisionAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpBvTreeStreamAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                         hkpContactMgr *mgr);

    hkUint8 m_data[0x40 - 0xC];   // sizeof is 0x40
};

template hkpCollisionAgent *HK_CALL hkpSymmetricAgent<hkpBvTreeStreamAgent>::createAgent(const hkpCdBody &bodyA,
                                                                                        const hkpCdBody &bodyB,
                                                                                        const hkpCollisionInput &input,
                                                                                        hkpContactMgr *mgr);
