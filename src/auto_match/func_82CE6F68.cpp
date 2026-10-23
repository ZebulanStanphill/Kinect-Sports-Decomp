// hkFreeListMemorySystem::~hkFreeListMemorySystem()
// (Common/Base/Memory/System/FreeList/hkFreeListMemorySystem.h): stores the
// vtable, clears the static instance pointer (lbl_8323B210, set by the
// constructor fn_82CE6FF0), destroys the 32 hkThreadMemory objects at +0xADC
// (0x130 bytes each, last to first: inlined ~hkThreadMemory, see
// func_82CE6AF8.cpp), the members at +0x99C (fn_82CF7638), +0x920 (an
// allocator with an implicit destructor: ~hkMemoryAllocator, fn_82CE6978) and
// +0x1C (fn_82CF93D0), and the hkMemoryBlockServer at +0x8 (inline, only its
// vtable store), then runs ~hkMemorySystem (fn_82CE7330).
// The function and the base and member destructors keep their fn_ names
// (Matching units call them: the deleting destructor fn_82CE7210 calls this
// one), so as in func_82E1BE88.cpp the base and the members are opaque here
// and the destructor destroys them by name, in destruction order. (Declaring
// them as real members with inline wrapper destructors also matches, but only
// with __declspec(novtable) on a wrapper hkMemorySystem, whose inline
// destructor would otherwise store its vtable before fn_82CE7330.)
#include "havok/hkBase.h"

class hkThreadMemory;
class hkFreeListMemorySystem;
extern "C" {
void fn_82CE7330(void *self);              // hkMemorySystem::~hkMemorySystem
void fn_82CE6978(void *self);              // hkMemoryAllocator::~hkMemoryAllocator
void fn_82CF74E8(hkThreadMemory *self);    // hkThreadMemory::releaseCachedMemory
void fn_82CF93D0(void *self);              // destructor of the member at +0x1C
void fn_82CF7638(void *self);              // destructor of the member at +0x99C
extern hkFreeListMemorySystem *lbl_8323B210;
}

class hkMemoryBlockServer {
public:
    HK_FORCE_INLINE virtual ~hkMemoryBlockServer() {}
    hkUint32 m_data[4];
};

class hkThreadMemory {
public:
    HK_DECLARE_PLACEMENT_ALLOCATOR();
    HK_FORCE_INLINE virtual ~hkThreadMemory()
    {
        releaseCachedMemory();
        fn_82CE6978(this);
    }
    HK_FORCE_INLINE void releaseCachedMemory() { fn_82CF74E8(this); }
    hkUint32 m_data[(0x130 - 4) / 4];
};

class hkFreeListMemorySystem {
public:
    HK_FORCE_INLINE virtual ~hkFreeListMemorySystem()
    {
        lbl_8323B210 = 0;
        hkThreadMemory *t = reinterpret_cast<hkThreadMemory *>(m_threadMemory) + 32;
        for (int i = 32; --i >= 0;)
            (--t)->hkThreadMemory::~hkThreadMemory();
        fn_82CF7638(m_99c);
        fn_82CE6978(m_920);
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
