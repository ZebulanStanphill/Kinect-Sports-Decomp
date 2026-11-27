// hkpConvexListAgent::warpTime (+0x28 of ??_7hkpConvexListAgent@@6B@): in GSK mode hkpGskBaseAgent's,
// otherwise the agent track's (fn_82D6FF00, Havok's hkAgent1nMachine_WarpTime). It keeps its fn_ name
// (another family's rename).
#include "havok/hkpConvexListAgent.h"

extern "C" void fn_82D6FF00(void *track, hkTime oldTime, hkTime newTime, const hkpCollisionInput &input);

extern "C" void fn_82D5BEC0(hkpConvexListAgent *self, hkTime oldTime, hkTime newTime, const hkpCollisionInput &input)
{
    if (self->m_inGskMode) {
        self->hkpPredGskfAgent::warpTime(oldTime, newTime, input);
        return;
    }
    fn_82D6FF00(&self->m_manifold, oldTime, newTime, input);
}
