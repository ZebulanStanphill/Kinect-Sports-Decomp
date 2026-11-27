// hkpConvexListAgent::invalidateTim (+0x24 of ??_7hkpConvexListAgent@@6B@): in GSK mode hkpGskBaseAgent's,
// otherwise the agent track's (fn_82D6FD90, Havok's hkAgent1nMachine_InvalidateTim; in stream mode the
// manifold bytes at +0x30 hold the track). It keeps its fn_ name (another family's rename).
#include "havok/hkpConvexListAgent.h"

extern "C" void fn_82D6FD90(void *track, const hkpCollisionInput &input);

extern "C" void fn_82D5BEA8(hkpConvexListAgent *self, const hkpCollisionInput &input)
{
    if (self->m_inGskMode) {
        self->hkpPredGskfAgent::invalidateTim(input);
        return;
    }
    fn_82D6FD90(&self->m_manifold, input);
}
