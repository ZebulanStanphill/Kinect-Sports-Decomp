// hkpDefaultToiResourceMgr::hkpDefaultToiResourceMgr() (Physics/Dynamics/World/Simulation/Continuous/
// hkpDefaultToiResourceMgr.cpp): a 128 KB default scratchpad.
#include "havok/hkBase.h"
#include "havok/hkpDefaultToiResourceMgr.h"

hkpDefaultToiResourceMgr::hkpDefaultToiResourceMgr()
{
    m_defaultScratchpadSize = 128 * 1024;
}
