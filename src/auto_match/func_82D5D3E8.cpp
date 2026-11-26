// hkpClosestCdPointCollector scalar deleting destructor.
// hkpClosestCdPointCollector derives from the interface hkpCdPointCollector (RTTI) and has Havok's
// non-virtual class allocator, so deleting frees sizeof(hkpClosestCdPointCollector) = 0x40 bytes
// to the heap. The implicit destructor leaves only hkpCdPointCollector's vtable store.
// The function at the end only makes the compiler emit the vtable.
#include "havok/hkpCdPointCollector.h"

class hkpClosestCdPointCollector : public hkpCdPointCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpClosestCdPointCollector);
    virtual void addCdPoint(const hkpCdPoint &point);
    virtual void reset();

    hkUint8 m_members[0x38];   // not needed here; sizeof is 0x40
};

void emitVtable_82D5D3E8(void *p) { new (p) hkpClosestCdPointCollector; }
