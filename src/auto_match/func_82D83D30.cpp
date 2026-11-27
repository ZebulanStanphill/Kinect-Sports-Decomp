// hkpWorld::addConstraintListener (Physics/Dynamics/World/hkpWorld.cpp): appends the listener to m_constraintListeners.
#include "havok/hkBase.h"
#include "havok/hkpWorld.h"

void hkpWorld::addConstraintListener(hkpConstraintListener *worldListener)
{
    m_constraintListeners.pushBack(worldListener);
}
