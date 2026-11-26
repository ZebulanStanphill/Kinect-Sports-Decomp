// hkpDefaultToiResourceMgr (Physics/Dynamics/World/Simulation/Continuous/ToiResourceMgr/hkpDefaultToiResourceMgr.h),
// 0x10 bytes: the TOI resource manager a continuous simulation makes for itself (82DB6028). The game's hkClass
// (initialiser 83133C28) gives the parent (hkReferencedObject in the reflection), the size and no reflected
// members. The constructor is out of line (82DDE130: the default scratchpad size, 128 KB, at +0xC); the
// scratchpad's capacity at +0x8 is set when the scratchpad is allocated. The destructor is implicit (slot 0 of
// ??_7hkpDefaultToiResourceMgr@@6B@ is a deleting destructor folded with hkpShape's). The vtable's slots +0xC to
// +0x18 (82DDE150, 82DDE128, 82DDE120, 82DDE1E0) override hkpToiResourceMgr's functions, which hkpToiResourceMgr.h
// does not declare; 82DDE238 and 82DDE0C8 override hkReferencedObject's getClassType and calcContentStatistics.
#ifndef HAVOK_HKPDEFAULTTOIRESOURCEMGR_H
#define HAVOK_HKPDEFAULTTOIRESOURCEMGR_H

#include "havok/hkBase.h"
#include "havok/hkpToiResourceMgr.h"

class hkpDefaultToiResourceMgr : public hkpToiResourceMgr {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpDefaultToiResourceMgr();

    int m_scratchpadCapacity;      // +0x8, set when the scratchpad is allocated
    int m_defaultScratchpadSize;   // +0xC
};

#endif
