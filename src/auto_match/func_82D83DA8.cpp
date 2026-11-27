// hkpWorld::addEntityListener (Physics/Dynamics/World/hkpWorld.cpp): appends the listener to m_entityListeners.
#include "havok/hkBase.h"
#include "havok/hkpWorld.h"

void hkpWorld::addEntityListener(hkpEntityListener *worldListener)
{
    m_entityListeners.pushBack(worldListener);
}
