// hkpSymmetricAgentFlipBodyCollector scalar deleting destructor.
// hkpSymmetricAgentFlipBodyCollector derives from the interface hkpCdBodyPairCollector (RTTI) and has Havok's
// non-virtual class allocator, so deleting frees sizeof(hkpSymmetricAgentFlipBodyCollector) = 0xC bytes
// to the heap. The implicit destructor leaves only hkpCdBodyPairCollector's vtable store.
// The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"

extern "C" void fn_8265CA20(void *p);   // global operator delete

class hkpCdBodyPairCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpCdBodyPairCollector);
    virtual ~hkpCdBodyPairCollector() {}
    hkBool m_earlyOut;   // +0x4
};

class hkpSymmetricAgentFlipBodyCollector : public hkpCdBodyPairCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpSymmetricAgentFlipBodyCollector);
    hkUint8 m_members[0x4];   // not needed here; sizeof is 0xC
};

void emitVtable_82D53F00(void *p) { new (p) hkpSymmetricAgentFlipBodyCollector; }
