// hkpFlagCdBodyPairCollector (Physics/Collide/Query/Collector/BodyPairCollector/hkpFlagCdBodyPairCollector.h),
// 0x8 bytes: records only whether a pair was found. ??_7hkpFlagCdBodyPairCollector@@6B@: the deleting
// destructor (82D5D450), addCdBodyPair (82D76310) and hkpCdBodyPairCollector's reset. The constructor
// clears m_earlyOut again after the base's: hkpBvAgent's three units (82D6DED8, 82D6E680, 82D6EA18) are written
// with it, and the other users' functions are the same with or without it (only the compiler's out-of-line copy
// of the constructor, which is not a function of the game, differs). Havok's own form is not known.
#ifndef HAVOK_HKPFLAGCDBODYPAIRCOLLECTOR_H
#define HAVOK_HKPFLAGCDBODYPAIRCOLLECTOR_H

#include "havok/hkpCdBodyPairCollector.h"

class hkpFlagCdBodyPairCollector : public hkpCdBodyPairCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpFlagCdBodyPairCollector);
    hkpFlagCdBodyPairCollector() { m_earlyOut = false; }
    virtual void addCdBodyPair(const hkpCdBody &bodyA, const hkpCdBody &bodyB);
};

#endif
