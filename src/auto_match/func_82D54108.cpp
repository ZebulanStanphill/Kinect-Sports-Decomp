// hkpBvTreeStreamAgent::invalidateTim (Physics/Collide/Agent/CompoundAgent/BvTreeStream/hkpBvTreeStreamAgent.cpp),
// its vtable's slot +0x24: hkAgent1nMachine_InvalidateTim on the agent track (fn_82D6FD90, Havok's name for it).
#include "havok/hkpBvTreeStreamAgent.h"

extern "C" void fn_82D6FD90(hkpAgent1nTrack &track, const hkpCollisionInput &input);   // hkAgent1nMachine_InvalidateTim

void hkpBvTreeStreamAgent::invalidateTim(const hkpCollisionInput &input)
{
    fn_82D6FD90(m_agentTrack, input);
}
