// hkpSymmetricAgentFlipCastCollector scalar deleting destructor (identical code also serves hkpSimpleClosestContactCollector).
// hkpSymmetricAgentFlipCastCollector derives from the interface hkpCdPointCollector (RTTI) and has Havok's
// non-virtual class allocator, so deleting frees sizeof(hkpSymmetricAgentFlipCastCollector) = 0x30 bytes
// to the heap. The implicit destructor leaves only hkpCdPointCollector's vtable store.
// The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"

extern "C" void fn_8265CA20(void *p);   // global operator delete

class hkpCdPointCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpCdPointCollector);
    virtual ~hkpCdPointCollector() {}
    hkReal m_earlyOutDistance;   // +0x4
};

class hkpSymmetricAgentFlipCastCollector : public hkpCdPointCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpSymmetricAgentFlipCastCollector);
    hkUint8 m_members[0x28];   // not needed here; sizeof is 0x30
};

void emitVtable_82D53E98(void *p) { new (p) hkpSymmetricAgentFlipCastCollector; }
