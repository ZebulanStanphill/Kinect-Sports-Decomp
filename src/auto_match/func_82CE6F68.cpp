// hkFreeListMemorySystem::~hkFreeListMemorySystem()
// (Common/Base/Memory/System/FreeList/hkFreeListMemorySystem.h): stores the
// vtable, clears the static instance pointer (lbl_8323B210, set by the
// constructor fn_82CE6FF0), destroys the hkThreadMemory of the 32 thread data
// entries at +0xADC (0x130 bytes each, last to first: inlined ~hkThreadMemory,
// see hkThreadMemory.h), the members at +0x99C (fn_82CF7638), +0x920 (an
// allocator with an implicit destructor: ~hkMemoryAllocator) and
// +0x1C (fn_82CF93D0), and the hkMemoryBlockServer at +0x8 (inline, only its
// vtable store), then runs ~hkMemorySystem (fn_82CE7330). The +0x920 member is
// destroyed by a direct call of ~hkMemoryAllocator, without a vtable store of its own.
// The function and the base and member destructors keep their fn_ names
// (Matching units call them: the deleting destructor fn_82CE7210 calls this
// one), so as in func_82E1BE88.cpp the base and the members are opaque here
// and the destructor destroys them by name, in destruction order. (Declaring
// them as real members with inline wrapper destructors also matches, but only
// with __declspec(novtable) on a wrapper hkMemorySystem, whose inline
// destructor would otherwise store its vtable before fn_82CE7330.)
#include "havok/hkBase.h"
#include "havok/hkMemoryBlockServer.h"
#include "havok/hkThreadMemory.h"

class hkFreeListMemorySystem;
extern "C" {
void fn_82CE7330(void *self);              // hkMemorySystem::~hkMemorySystem
void fn_82CF93D0(void *self);              // destructor of the member at +0x1C
void fn_82CF7638(void *self);              // destructor of the member at +0x99C
extern hkFreeListMemorySystem *lbl_8323B210;
}

class hkFreeListMemorySystem {
public:
    // The per-thread data: the allocator and four words (see func_82CE6FF0.cpp).
    struct ThreadData {
        hkThreadMemory m_memory;     // +0x0
        hkUint32 m_rest[4];          // +0x120
    };
    HK_FORCE_INLINE virtual ~hkFreeListMemorySystem()
    {
        lbl_8323B210 = 0;
        ThreadData *t = reinterpret_cast<ThreadData *>(m_threadMemory) + 32;
        for (int i = 32; --i >= 0;)
            (--t)->m_memory.hkThreadMemory::~hkThreadMemory();
        fn_82CF7638(m_99c);
        reinterpret_cast<hkMemoryAllocator *>(m_920)->hkMemoryAllocator::~hkMemoryAllocator();
        fn_82CF93D0(m_1c);
        reinterpret_cast<hkMemoryBlockServer *>(m_server)->hkMemoryBlockServer::~hkMemoryBlockServer();
        fn_82CE7330(this);
    }
    hkUint32 m_pad4;
    hkUint32 m_server[5];                          // +0x8
    hkUint32 m_1c[(0x920 - 0x1C) / 4];             // +0x1C
    hkUint32 m_920[(0x99C - 0x920) / 4];           // +0x920
    hkUint32 m_99c[(0xADC - 0x99C) / 4];           // +0x99C
    hkUint32 m_threadMemory[32 * 0x130 / 4];       // +0xADC
};

extern "C" void fn_82CE6F68(hkFreeListMemorySystem *self)
{
    self->hkFreeListMemorySystem::~hkFreeListMemorySystem();
}
