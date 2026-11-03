// StateImpl_82685620: an unnamed GFxState (state type 0x10) that owns a GFx heap
// named "_Mesh_Cache" and two objects allocated on it. Placeholder named after
// its destructor; the bases follow the code (GFxState's vtable is stored by its
// inline destructor, GRefCountImplCore's destructor is out of line).
//
// GRefCountImplCore and GFxState are Scaleform's; only what this class uses is
// declared. The members are plain pointers (the destructor releases them in its
// body): members with destructors of their own change the constructor's code.

#ifndef GAME_STATEIMPL_82685620_H
#define GAME_STATEIMPL_82685620_H

extern "C" {
void *fn_8267C2D8(void *heap, const char *name, const void *desc); // GMemoryHeap::CreateHeap
void *fn_8267B890(void *heap, unsigned int size, unsigned int unk);  // GMemoryHeap::Alloc
void fn_8267C488(void *self);  // GRefCountImplCore::~GRefCountImplCore
void fn_8267C498(void *p);     // releases a reference-counted object
void fn_8267BC98(void *heap);  // releases a heap
void fn_8267BE38(void *block); // Scaleform's operator delete
void *fn_826EEFE8(void *self, void *heap);
void *fn_82685D28(void *self, void *heap);
extern void *lbl_831E7E64; // the global GMemoryHeap
}

// GMemoryHeap::HeapDesc.
struct HeapDesc_82685620 {
    unsigned int flags;
    unsigned int minAlign;
    unsigned int granularity;
    unsigned int reserve;
    unsigned int threshold;
    unsigned int limit;
    unsigned int heapId;
    unsigned int arena;

    __forceinline HeapDesc_82685620(unsigned int f = 0, unsigned int align = 16, unsigned int gran = 0x2000,
                                    unsigned int res = 0x2000, unsigned int thr = 0xFFFFFFFF, unsigned int lim = 0,
                                    unsigned int id = 0, unsigned int ar = 0)
        : flags(f), minAlign(align), granularity(gran), reserve(res), threshold(thr), limit(lim), heapId(id),
          arena(ar)
    {
    }
};

class __declspec(novtable) GRefCountImplCore {
public:
    static void operator delete(void *block) { fn_8267BE38(block); }

    __forceinline GRefCountImplCore() : refCount(1) {}
    virtual __forceinline ~GRefCountImplCore() { fn_8267C488(this); }

    int refCount;
};

class GFxState : public GRefCountImplCore {
public:
    __forceinline GFxState(unsigned int type) : stateType(type) {}
    virtual __forceinline ~GFxState() {}

    unsigned int stateType;
};

class StateImpl_82685620 : public GFxState {
public:
    // The flag selects heap flag 0x1000.
    __forceinline StateImpl_82685620(bool flag);
    virtual ~StateImpl_82685620();

    void *heap;
    void *unk10; // 0x3B4 bytes, constructed by fn_826EEFE8
    void *unk14; // 0x8C bytes, constructed by fn_82685D28
};

__forceinline StateImpl_82685620::StateImpl_82685620(bool flag) : GFxState(0x10), heap(0), unk10(0), unk14(0)
{
    HeapDesc_82685620 desc(flag ? 0x1000 : 0, 0x20, 0x10000, 0);
    desc.heapId = 5;
    heap = fn_8267C2D8(lbl_831E7E64, "_Mesh_Cache", &desc);
    void *m = fn_8267B890(heap, 0x3B4, 0);
    unk10 = m ? fn_826EEFE8(m, heap) : 0;
    m = fn_8267B890(heap, 0x8C, 0);
    unk14 = m ? fn_82685D28(m, heap) : 0;
}

#endif
