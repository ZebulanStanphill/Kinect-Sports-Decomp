// hkFreeListMemorySystem::hkFreeListMemorySystem() (Common/Base/Memory/System/FreeList/hkFreeListMemorySystem.cpp).
// It keeps its fn_ name because a game C unit (fn_82558278) calls it; the inline constructor runs through an
// explicit constructor call (MSVC accepts self->C::C()), which has no placement-new null check. Members whose
// constructors keep fn_ names (hkFreeListAllocator fn_82CF9730, fn_82CE72E8,
// fn_82CE5430) are opaque structs with inline wrapper constructors; the hkThreadMemory array is constructed
// by the compiler's inline array loop calling ??0hkThreadMemory@@QAA@XZ (fn_82CF7428, func_82CF7428.cpp).
#include "havok/hkBase.h"
#include "havok/hkSystemMemoryBlockServer.h"
#include "havok/hkMemorySystem.h"
#include "havok/hkThreadMemory.h"
#include "havok/hkSolverAllocator.h"

extern "C" {
void fn_82CF9730(void *self, hkMemoryBlockServer *server);   // hkFreeListAllocator(server)
void fn_82CE72E8(void *self);
void fn_82CE5430(void *self);
extern hkMemoryAllocator *lbl_8323B210;
}

// Opaque: its constructor keeps its fn_ name.
struct hkFreeListAllocator {
    HK_FORCE_INLINE hkFreeListAllocator(hkMemoryBlockServer *server) { fn_82CF9730(this, server); }
    void *m_vtable;
    hkUint8 m_data[0x900];
};

class hkLeakDetectAllocator : public hkMemoryAllocator {
public:
    HK_FORCE_INLINE hkLeakDetectAllocator() : m_x(HK_NULL) {}
    virtual void *blockAlloc(int numBytes);
    virtual void blockFree(void *p, int numBytes);
    virtual void getMemoryStatistics(MemoryStatistics &u);        // 82CF7CB0 (forwards to the object at +0x34)
    virtual int getAllocatedSize(const void *obj, int nbytes);    // 82CF7CC8 (the same)
    hkMemoryAllocator *m_child;      // +0x4
    hkArray<void *> m_allocs;        // +0x8
    void *m_x;                       // +0x14
    hkCriticalSection m_section;     // +0x18
    hkUint8 m_unknown34[0x18];       // +0x34: not named by this unit
};

struct Unk96C {
    HK_FORCE_INLINE Unk96C() { fn_82CE72E8(this); }
    int m_a, m_b;
};

struct Unk978 {
    HK_FORCE_INLINE Unk978() { fn_82CE5430(this); }
    int m_data[8];
};

class hkFreeListMemorySystem : public hkMemorySystem {
public:
    struct ThreadData {
        ThreadData() : m_name(HK_NULL), m_inUse(false), m_c(0) {}
        hkThreadMemory m_memory;     // +0x0
        const char *m_name;          // +0x120
        hkBool m_inUse;              // +0x124
        int m_c;                     // +0x128
        int m_d;                     // +0x12C
    };
    HK_FORCE_INLINE hkFreeListMemorySystem()
        : m_unknown4(0), m_server(0, 0), m_mainAllocator(&m_server)
    {
        lbl_8323B210 = (hkMemoryAllocator *)&m_mainAllocator;
        m_allocator = (hkMemoryAllocator *)&m_mainAllocator;
    }
    virtual ~hkFreeListMemorySystem();

    int m_unknown4;                          // +0x4
    hkSystemMemoryBlockServer m_server;      // +0x8
    hkFreeListAllocator m_mainAllocator;     // +0x1C
    hkLeakDetectAllocator m_leakDetect;      // +0x920
    Unk96C m_96c;                            // +0x96C
    hkMemoryAllocator *m_allocator;          // +0x974
    Unk978 m_978;                            // +0x978
    int m_998;                               // +0x998
    hkSolverAllocator m_solverAllocator;     // +0x99C
    ThreadData m_threadData[32];             // +0xADC
};

extern "C" hkFreeListMemorySystem *fn_82CE6FF0(hkFreeListMemorySystem *self)
{
    self->hkFreeListMemorySystem::hkFreeListMemorySystem();
    return self;
}
