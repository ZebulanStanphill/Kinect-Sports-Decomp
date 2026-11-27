// hkpBvTreeStreamAgent::warpTime (Physics/Collide/Agent/CompoundAgent/BvTreeStream/hkpBvTreeStreamAgent.cpp), its
// vtable's slot +0x28: hkAgent1nMachine_WarpTime on the agent track (fn_82D6FF00, Havok's name for it).
#include "havok/hkpBvTreeStreamAgent.h"

extern "C" void fn_82D6FF00(hkpAgent1nTrack &track, hkTime oldTime, hkTime newTime,
                            const hkpCollisionInput &input);   // hkAgent1nMachine_WarpTime

void hkpBvTreeStreamAgent::warpTime(hkTime oldTime, hkTime newTime, const hkpCollisionInput &input)
{
    fn_82D6FF00(m_agentTrack, oldTime, newTime, input);
}
