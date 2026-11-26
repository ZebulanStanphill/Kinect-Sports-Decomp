// hkpSymmetricAgent<hkpHeightFieldAgent>::createAgent (Physics/Collide/Agent/MiscAgent/HeightField/
// hkpHeightFieldAgent.cpp): allocates the agent with the class allocator (no null check), runs
// hkpHeightFieldAgent's constructor (out of line, fn_82D5A670) with the bodies swapped, then stores
// hkpSymmetricAgent's vtable.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpHeightFieldAgent.h"

template hkpCollisionAgent *HK_CALL hkpSymmetricAgent<hkpHeightFieldAgent>::createAgent(const hkpCdBody &bodyA,
                                                                                       const hkpCdBody &bodyB,
                                                                                       const hkpCollisionInput &input,
                                                                                       hkpContactMgr *mgr);
