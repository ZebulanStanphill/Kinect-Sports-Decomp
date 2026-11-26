// hkPackfileData::~hkPackfileData() (Common/Serialize/Packfile/hkPackfileData.cpp): the user-written body runs the
// destructors of the loaded objects (fn_82E16580, kept under its fn_ name), frees the allocations and chunks and
// the name, then the members are destroyed in reverse order and hkBaseObject's vtable is stored last.
#include "havok/hkBase.h"
#include "havok/hkClassNameRegistry.h"

class hkPackfileData;

extern "C" void fn_82E16580(hkPackfileData *self);   // hkPackfileData::callDestructors

class hkResource : public hkReferencedObject {
public:
    struct Export {
        const char *name;
        void *data;
    };
    struct Import {
        const char *name;
        void **location;
    };
};

class hkPackfileData : public hkResource {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SERIALIZE);
    struct Chunk {
        void *pointer;
        int numBytes;
        int alignment;
    };
    hkPackfileData();
    ~hkPackfileData();

    void callDestructors() { fn_82E16580(this); }

    void *m_topLevelObject;                                  // +0x8
    char *m_name;                                            // +0xC
    hkPointerMap<void *, const hkClass *> m_trackedObjects;  // +0x10
    hkStringMap<const hkClass *> m_trackedTypes;             // +0x1C
    hkRefPtr<const hkClassNameRegistry> m_packfileClassRegistry;   // +0x2C
    hkBool m_destructorsEnabled;                             // +0x30
    hkArray<void *> m_memory;                                // +0x34
    hkArray<Chunk> m_chunks;                                 // +0x40
    hkArray<Export> m_exports;                               // +0x4C
    hkArray<Import> m_imports;                               // +0x58
};

hkPackfileData::~hkPackfileData()
{
    callDestructors();
    for (int i = 0; i < m_memory.getSize(); ++i)
        hkDeallocate(m_memory[i]);
    for (int i = 0; i < m_chunks.getSize(); ++i)
        hkDeallocateChunk<char>(static_cast<char *>(m_chunks[i].pointer), m_chunks[i].numBytes, HK_MEMORY_CLASS_SERIALIZE);
    hkDeallocate(m_name);
}
