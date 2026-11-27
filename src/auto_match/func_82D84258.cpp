// hkpWorld::addContactImpulseLimitBreachedListener (Physics/Dynamics/World/hkpWorld.cpp): appends the listener to m_contactImpulseLimitBreachedListeners.
#include "havok/hkBase.h"
#include "havok/hkpWorld.h"

void hkpWorld::addContactImpulseLimitBreachedListener(hkpContactImpulseLimitBreachedListener *worldListener)
{
    m_contactImpulseLimitBreachedListeners.pushBack(worldListener);
}
