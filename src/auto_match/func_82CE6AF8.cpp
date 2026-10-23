// hkThreadMemory's scalar deleting destructor (??_GhkThreadMemory@@UAAPAXI@Z,
// Common/Base/Memory/Memory/FreeList/hkThreadMemory.h). hkThreadMemory has a
// placement allocator (the 32 instances live inside hkFreeListMemorySystem),
// so the deleting destructor ignores its flags and returns this. The inlined
// destructor stores the vtable, calls releaseCachedMemory() (vtable slot 13,
// fn_82CF74E8) and then the base destructor ~hkMemoryAllocator, fn_82CE6978,
// which keeps its fn_ name (Matching C units call it): the compiler would call
// ??1hkMemoryAllocator@@UAA@XZ, so the base is not declared here and the
// destructor calls fn_82CE6978 by name.
#include "havok/hkBase.h"

class hkThreadMemory;
extern "C" {
void fn_82CE6978(void *self);              // hkMemoryAllocator::~hkMemoryAllocator
void fn_82CF74E8(hkThreadMemory *self);    // hkThreadMemory::releaseCachedMemory
}

class hkThreadMemory {
public:
    HK_DECLARE_PLACEMENT_ALLOCATOR();
    HK_FORCE_INLINE virtual ~hkThreadMemory()
    {
        releaseCachedMemory();
        fn_82CE6978(this);
    }
    HK_FORCE_INLINE void releaseCachedMemory() { fn_82CF74E8(this); }
};

// Emits hkThreadMemory's vtable and with it the deleting destructor.
void emitVtable_82CE6AF8(hkThreadMemory *p)
{
    p->hkThreadMemory::~hkThreadMemory();
}
