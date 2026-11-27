// hkpConvexListAgent::removePoint (+0x2C of ??_7hkpConvexListAgent@@6B@): hkpGskfAgent's in GSK mode, nothing otherwise.
// It keeps its fn_ name (another family's rename).
#include "havok/hkpConvexListAgent.h"

extern "C" void fn_82D5BED8(hkpConvexListAgent *self, hkContactPointId idToRemove)
{
    if (self->m_inGskMode) {
        self->hkpPredGskfAgent::removePoint(idToRemove);
    }
}
