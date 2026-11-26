// hkpFlagCdBodyPairCollector scalar deleting destructor.
// hkpFlagCdBodyPairCollector derives from the interface hkpCdBodyPairCollector (RTTI) and has Havok's
// non-virtual class allocator, so deleting frees sizeof(hkpFlagCdBodyPairCollector) = 0x8 bytes
// to the heap. The implicit destructor leaves only hkpCdBodyPairCollector's vtable store.
// The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkpCdBodyPairCollector.h"

class hkpFlagCdBodyPairCollector : public hkpCdBodyPairCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpFlagCdBodyPairCollector);
    virtual void addCdBodyPair(const hkpCdBody &bodyA, const hkpCdBody &bodyB);
};

void emitVtable_82D5D450(void *p) { new (p) hkpFlagCdBodyPairCollector; }
