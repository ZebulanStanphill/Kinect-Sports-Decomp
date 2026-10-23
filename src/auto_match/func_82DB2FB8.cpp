// hkpKdTreeCollidableRaycaster scalar deleting destructor.
// hkpKdTreeCollidableRaycaster derives from the interface hkKdTreeCastCollector (RTTI) and has Havok's
// non-virtual class allocator, so deleting frees sizeof(hkpKdTreeCollidableRaycaster) = 0x18 bytes
// to the heap. The implicit destructor leaves only hkKdTreeCastCollector's vtable store.
// The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"

extern "C" void fn_8265CA20(void *p);   // global operator delete

class hkKdTreeCastCollector {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkKdTreeCastCollector() {}
};

class hkpKdTreeCollidableRaycaster : public hkKdTreeCastCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpKdTreeCollidableRaycaster);
    hkUint8 m_members[0x14];   // not needed here; sizeof is 0x18
};

void emitVtable_82DB2FB8(void *p) { new (p) hkpKdTreeCollidableRaycaster; }
