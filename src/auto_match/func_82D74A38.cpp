// hkpGskBaseAgent::invalidateTim (+0x24 of the GSK agents' vtables): clears the separating normal and marks
// its time as invalid.
#include "havok/hkpGskBaseAgent.h"

void hkpGskBaseAgent::invalidateTim(const hkpCollisionInput &input)
{
    m_separatingNormal.setZero4();
    m_timeOfSeparatingNormal = -1.0f;
}
