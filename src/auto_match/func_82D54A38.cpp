// hkpSymmetricAgent<hkpBvTreeStreamAgent>::createAgent (Physics/Collide/Agent/CompoundAgent/BvTreeStream/
// hkpBvTreeStreamAgent.cpp): allocates the agent with the class allocator (no null check), runs
// hkpBvTreeStreamAgent's constructor (out of line, fn_82D54230) with the bodies swapped, then stores
// hkpSymmetricAgent's vtable.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpBvTreeStreamAgent.h"

template hkpCollisionAgent *HK_CALL hkpSymmetricAgent<hkpBvTreeStreamAgent>::createAgent(const hkpCdBody &bodyA,
                                                                                        const hkpCdBody &bodyB,
                                                                                        const hkpCollisionInput &input,
                                                                                        hkpContactMgr *mgr);
