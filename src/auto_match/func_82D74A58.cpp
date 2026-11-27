// hkpGskBaseAgent::warpTime (+0x28 of the GSK agents' vtables): moves the separating normal's time from
// oldTime to newTime, or invalidates it when it was computed at another time.
#include "havok/hkpGskBaseAgent.h"

void hkpGskBaseAgent::warpTime(hkTime oldTime, hkTime newTime, const hkpCollisionInput &input)
{
    if (m_timeOfSeparatingNormal == oldTime) {
        m_timeOfSeparatingNormal = newTime;
        return;
    }
    m_timeOfSeparatingNormal = -1.0f;
    m_separatingNormal.setZero4();
}
