// hkThreadMemory's scalar deleting destructor (??_GhkThreadMemory@@UAAPAXI@Z,
// Common/Base/Memory/Memory/FreeList/hkThreadMemory.h). hkThreadMemory has a
// placement allocator (the 32 instances live inside hkFreeListMemorySystem),
// so the deleting destructor ignores its flags and returns this. The inlined
// destructor stores the vtable, calls releaseCachedMemory() (vtable slot +0x34,
// 82CF74E8) and then the base destructor ~hkMemoryAllocator.
#include "havok/hkBase.h"
#include "havok/hkThreadMemory.h"

// Emits hkThreadMemory's vtable and with it the deleting destructor.
void emitVtable_82CE6AF8(hkThreadMemory *p)
{
    p->hkThreadMemory::~hkThreadMemory();
}
