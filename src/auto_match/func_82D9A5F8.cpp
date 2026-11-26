// hkpPhantom::addPhantomOverlapListener(hkpPhantomOverlapListener *) (Physics/Dynamics/Phantom/hkpPhantom.cpp):
// appends the listener to m_overlapListeners (+0x8C).
#include "havok/hkpPhantom.h"

void hkpPhantom::addPhantomOverlapListener(hkpPhantomOverlapListener *listener)
{
    m_overlapListeners.pushBack(listener);
}
