// hkpDefaultToiResourceMgr::hkpDefaultToiResourceMgr() (Physics/Dynamics/World/Simulation/Continuous/
// hkpDefaultToiResourceMgr.cpp): a 128 KB default scratchpad.
#include "havok/hkBase.h"

class hkpToiResourceMgr : public hkReferencedObject {
public:
    hkpToiResourceMgr() {}
};

class hkpDefaultToiResourceMgr : public hkpToiResourceMgr {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpDefaultToiResourceMgr();

    int m_scratchpadCapacity;      // +0x8, set when the scratchpad is allocated
    int m_defaultScratchpadSize;   // +0xC
};

hkpDefaultToiResourceMgr::hkpDefaultToiResourceMgr()
{
    m_defaultScratchpadSize = 128 * 1024;
}
