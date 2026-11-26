// hkpToiResourceMgr (Physics/Dynamics/World/Simulation/Continuous/ToiResourceMgr/hkpToiResourceMgr.h): the
// interface that hands the continuous simulation the memory and the limits for solving a time of impact.
// hkpDefaultToiResourceMgr (0x10 bytes, constructor fn_82DDE130) is the only implementation the game has.
// No unit names its virtual functions.
#ifndef HAVOK_HKPTOIRESOURCEMGR_H
#define HAVOK_HKPTOIRESOURCEMGR_H

#include "havok/hkBase.h"

class hkpToiResourceMgr : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpToiResourceMgr() {}
};

#endif
