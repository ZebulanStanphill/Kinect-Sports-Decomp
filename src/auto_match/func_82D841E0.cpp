// hkpWorld::addWorldDeletionListener (Physics/Dynamics/World/hkpWorld.cpp): appends the listener to m_worldDeletionListeners.
#include "havok/hkBase.h"
#include "havok/hkpWorld.h"

void hkpWorld::addWorldDeletionListener(hkpWorldDeletionListener *worldListener)
{
    m_worldDeletionListeners.pushBack(worldListener);
}
