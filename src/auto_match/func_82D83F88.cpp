// hkpWorld::addWorldPostSimulationListener (Physics/Dynamics/World/hkpWorld.cpp): appends the listener to m_worldPostSimulationListeners.
#include "havok/hkBase.h"
#include "havok/hkpWorld.h"

void hkpWorld::addWorldPostSimulationListener(hkpWorldPostSimulationListener *worldListener)
{
    m_worldPostSimulationListeners.pushBack(worldListener);
}
