// Havok serialization helper (keeps its fn_ name): copies the objects selected by `indices` into one new
// heap block. Each object is written with a PackfileObjectCopier (an hkObjectCopier between the host layout
// rules) into an hkArray<char> through an hkOstream, its offset recorded in the output array; then the block
// is allocated and reported to the tracker (memory class 5), the offsets are turned into pointers, the local
// fixups applied and the global fixups reported (objectPointedBy).
//
// hkObjectCopier's constructor takes its flags as a class by value (hkFlags<FlagValues, int>, default
// FLAG_NONE); the default-argument temporary is what the original keeps in memory (stw 0 at 0x50 before
// the loop, its address in r21, lwz r6, 0(r21) per call).
#include "havok/hkBase.h"
#include "havok/hkFlags.h"

class hkClass;
class hkStreamWriter;
class hkRelocationInfo;
enum hkResult { HK_SUCCESS = 0, HK_FAILURE = 1 };

extern "C" {
void fn_82CED958(void *self);                                          // hkOstream::~hkOstream
void fn_82E19DB0(void *self, void *other);                             // hkStructureLayout::LayoutRules copy (out of line)
void fn_82CEA160(void *self, hkMemoryAllocator *alloc, void *key, int value);   // hkMapBase<hkUlong, hkUlong>::insert
void fn_82E1A688(void *self);                                          // hkRelocationInfo::~hkRelocationInfo
void fn_82CFC050(void *dst, const void *src, int n);                   // hkString::memCpy
extern char lbl_83187414[];                                            // hkStructureLayout::HostLayoutRules
}

// Constructor renamed (??0hkOstream, func_82CEE1B0), destructor kept as fn_82CED958.
class hkOstream {
public:
    hkOstream(hkArray<char> &buffer);
    ~hkOstream() { fn_82CED958(this); }

    void *m_vtable;
    int m_memSizeAndRefCount;
    hkStreamWriter *m_writer;   // +0x8
};

// hkRelocationInfo (0x34 bytes): local, global, finish and import fixups, then the import name pool.
struct Relocation {
    struct Local { int m_fromOffset, m_toOffset; };
    struct Global { int m_fromOffset; void *m_toAddress; int m_pad[2]; };
    Relocation() : m_pool(0) {}
    ~Relocation() { fn_82E1A688(this); }

    hkArrayBase<int> m_local, m_global, m_finish, m_imports;
    int m_pool;
};

class hkStructureLayout {
public:
    struct LayoutRules {
        LayoutRules(void *p) { fn_82E19DB0(this, p); }
        char m_values[4];
    };
};

// Common/Serialize/Copier/hkObjectCopier.h (0x18 bytes).
class hkObjectCopier : public hkReferencedObject {
public:
    enum FlagValues { FLAG_NONE = 0 };
    typedef hkFlags<FlagValues, int> ObjectCopierFlags;

    hkObjectCopier(const hkStructureLayout::LayoutRules &layoutIn, const hkStructureLayout::LayoutRules &layoutOut,
                   ObjectCopierFlags flags = FLAG_NONE);
    virtual ~hkObjectCopier();
    virtual hkResult copyObject(const void *dataIn, const hkClass &klassIn, hkStreamWriter *dataOut,
                                const hkClass &klassOut, hkRelocationInfo &reloc);

    hkStructureLayout::LayoutRules m_layoutIn;    // +0x8
    hkStructureLayout::LayoutRules m_layoutOut;   // +0xC
    ObjectCopierFlags m_flags;                    // +0x10
    hkBool m_byteSwap;                            // +0x14
};

// In an anonymous namespace in the game (??_7PackfileObjectCopier@?A0x9721bf3b@@6B@, renamed).
class PackfileObjectCopier : public hkObjectCopier {
public:
    PackfileObjectCopier(const hkStructureLayout::LayoutRules &layoutIn, const hkStructureLayout::LayoutRules &layoutOut)
        : hkObjectCopier(layoutIn, layoutOut)
    {
    }
};

struct Object {
    void *m_object;
    const hkClass *m_class;
};

struct Offset {
    int m_offset;
    const hkClass *m_class;
};

// hkObjectUpdateTracker: addChunk at +0x10, objectPointedBy at +0x14.
class Tracker {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void addAllocation(void *p);
    virtual void addChunk(void *p, int n, int memoryClass);
    virtual void objectPointedBy(void *newObject, void *fromWhere);
};

extern "C" char *fn_82E0F818(hkArrayBase<Object> *objects, hkArrayBase<Offset> *offsets, hkArrayBase<int> *indices,
                             Tracker *tracker)
{
    hkArray<char> buffer;
    hkOstream stream(buffer);
    Relocation reloc;
    hkMap<void *, int> objectStart;
    for (int i = 0; i < indices->m_size; i++) {
        int index = indices->m_data[i];
        Object *obj = &objects->m_data[index];
        hkStructureLayout::LayoutRules layoutOut(lbl_83187414);
        hkStructureLayout::LayoutRules layoutIn(lbl_83187414);
        PackfileObjectCopier copier(layoutIn, layoutOut);
        const hkClass *klass = offsets->m_data[index].m_class;
        offsets->m_data[index].m_offset = buffer.m_size;
        void *data = obj->m_object;
        int pos = buffer.m_size;
        fn_82CEA160(&objectStart, &hkMemoryRouter::getInstance().heap(), data, pos);
        copier.hkObjectCopier::copyObject(obj->m_object, *obj->m_class, stream.m_writer, *klass, (hkRelocationInfo &)reloc);
    }
    if (buffer.m_size) {
        int size = buffer.m_size;
        char *result = (char *)hkMemoryRouter::getInstance().heap().blockAlloc(size);
        tracker->addChunk(result, buffer.m_size, 5);
        fn_82CFC050(result, buffer.m_data, buffer.m_size);
        for (int i = 0; i < indices->m_size; i++)
            offsets->m_data[indices->m_data[i]].m_offset += (int)result;
        for (int i = 0; i < reloc.m_local.m_size; i++) {
            Relocation::Local *l = (Relocation::Local *)reloc.m_local.m_data + i;
            *(int *)(result + l->m_fromOffset) = l->m_toOffset + (int)result;
        }
        for (int i = 0; i < reloc.m_global.m_size; i++) {
            Relocation::Global *g = (Relocation::Global *)reloc.m_global.m_data + i;
            tracker->objectPointedBy(g->m_toAddress, result + g->m_fromOffset);
        }
        return result;
    }
    return 0;
}
