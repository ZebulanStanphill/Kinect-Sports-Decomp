// hkpSymmetricAgentFlipCollector scalar deleting destructor.
// hkpSymmetricAgentFlipCollector derives from the interface hkpCdPointCollector (RTTI) and has Havok's
// non-virtual class allocator, so deleting frees sizeof(hkpSymmetricAgentFlipCollector) = 0x8 bytes
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

class hkpSymmetricAgentFlipCollector : public hkpCdPointCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpSymmetricAgentFlipCollector);
};

void emitVtable_82D53E30(void *p) { new (p) hkpSymmetricAgentFlipCollector; }
