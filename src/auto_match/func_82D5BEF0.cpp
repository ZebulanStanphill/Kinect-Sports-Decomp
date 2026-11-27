// hkpConvexListAgent::commitPotential (+0x30 of ??_7hkpConvexListAgent@@6B@): hkpGskfAgent's in GSK mode, nothing otherwise.
// It keeps its fn_ name (another family's rename).
#include "havok/hkpConvexListAgent.h"

extern "C" void fn_82D5BEF0(hkpConvexListAgent *self, hkContactPointId newId)
{
    if (self->m_inGskMode) {
        self->hkpPredGskfAgent::commitPotential(newId);
    }
}
