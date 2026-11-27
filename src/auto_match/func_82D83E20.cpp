// hkpWorld::addPhantomListener (Physics/Dynamics/World/hkpWorld.cpp): appends the listener to m_phantomListeners.
#include "havok/hkBase.h"
#include "havok/hkpWorld.h"

void hkpWorld::addPhantomListener(hkpPhantomListener *worldListener)
{
    m_phantomListeners.pushBack(worldListener);
}
