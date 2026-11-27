// hkpWorld::addIslandActivationListener (Physics/Dynamics/World/hkpWorld.cpp): appends the listener to m_islandActivationListeners.
#include "havok/hkBase.h"
#include "havok/hkpWorld.h"

void hkpWorld::addIslandActivationListener(hkpIslandActivationListener *worldListener)
{
    m_islandActivationListeners.pushBack(worldListener);
}
