// hkpFlagCdBodyPairCollector (Physics/Collide/Query/Collector/BodyPairCollector/hkpFlagCdBodyPairCollector.h),
// 0x8 bytes: records only whether a pair was found. ??_7hkpFlagCdBodyPairCollector@@6B@: the deleting
// destructor (82D5D450), addCdBodyPair (82D76310) and hkpCdBodyPairCollector's reset. The constructor adds
// nothing to the base's (which clears m_earlyOut).
#ifndef HAVOK_HKPFLAGCDBODYPAIRCOLLECTOR_H
#define HAVOK_HKPFLAGCDBODYPAIRCOLLECTOR_H

#include "havok/hkpCdBodyPairCollector.h"

class hkpFlagCdBodyPairCollector : public hkpCdBodyPairCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpFlagCdBodyPairCollector);
    virtual void addCdBodyPair(const hkpCdBody &bodyA, const hkpCdBody &bodyB);
};

#endif
