// hkpConvexListAgent::createZombie (+0x34 of ??_7hkpConvexListAgent@@6B@): hkpGskfAgent's in GSK mode, nothing otherwise.
// It keeps its fn_ name (another family's rename).
#include "havok/hkpConvexListAgent.h"

extern "C" void fn_82D5BF08(hkpConvexListAgent *self, hkContactPointId idTobeZombified)
{
    if (self->m_inGskMode) {
        self->hkpPredGskfAgent::createZombie(idTobeZombified);
    }
}
