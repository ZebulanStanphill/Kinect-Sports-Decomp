// hkpWorld::addContactListener (Physics/Dynamics/World/hkpWorld.cpp): appends the listener to m_contactListeners.
#include "havok/hkBase.h"
#include "havok/hkpWorld.h"

void hkpWorld::addContactListener(hkpContactListener *worldListener)
{
    m_contactListeners.pushBack(worldListener);
}
