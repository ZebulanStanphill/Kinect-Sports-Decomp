// hkKdTreeCollidableRayBundleCaster scalar deleting destructor.
// hkKdTreeCollidableRayBundleCaster derives from the interface hkKdTreeBundleCastCollector (RTTI) and has Havok's
// non-virtual class allocator, so deleting frees sizeof(hkKdTreeCollidableRayBundleCaster) = 0x14 bytes
// to the heap. The implicit destructor leaves only hkKdTreeBundleCastCollector's vtable store.
// The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"

extern "C" void fn_8265CA20(void *p);   // global operator delete

class hkKdTreeBundleCastCollector {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkKdTreeBundleCastCollector() {}
};

class hkKdTreeCollidableRayBundleCaster : public hkKdTreeBundleCastCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkKdTreeCollidableRayBundleCaster);
    hkUint8 m_members[0x10];   // not needed here; sizeof is 0x14
};

void emitVtable_830969B0(void *p) { new (p) hkKdTreeCollidableRayBundleCaster; }
