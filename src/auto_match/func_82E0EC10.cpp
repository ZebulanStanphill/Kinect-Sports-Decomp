// Writes the members of an object that the given registry does not know into a
// buffer: an hkBufferedStreamWriter over the memory, then for each member of
// the class that fn_82CEAFA8 does not find, seek to the member's offset
// (hkBufferedStreamWriter::seek, fn_82CFB098, called directly because the
// writer's type is known) and write it (fn_82CEB2D8). Part of Havok's
// serialization utilities. It needs C++ because hkBufferedStreamWriter's
// constructor and destructor are renamed; the hkClass functions keep their
// fn_ names.
#include "havok/hkBase.h"

class hkStreamReader : public hkReferencedObject {
public:
    virtual hkBool isOk() const = 0;
    virtual int read(void *buf, int nbytes) = 0;
};

class hkStreamWriter : public hkReferencedObject {
public:
    virtual hkBool isOk() const = 0;
    virtual int write(const void *buf, int nbytes) = 0;
    virtual void flush() {}                               // +0x14
};

// hkSingleton<hkFileSystem>::s_instance is lbl_8323B4A4.
class hkFileSystem : public hkReferencedObject {
public:
    virtual hkStreamReader *openReader(const char *name) = 0;   // +0xC
    virtual hkStreamWriter *openWriter(const char *name) = 0;   // +0x10
    static hkFileSystem &getInstance();
};
extern "C" hkFileSystem *lbl_8323B4A4;
inline hkFileSystem &hkFileSystem::getInstance() { return *lbl_8323B4A4; }

class hkMemoryStreamReader : public hkStreamReader {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_STREAM);
    enum MemoryType { MEMORY_COPY, MEMORY_TAKE, MEMORY_INPLACE };
    hkMemoryStreamReader(const void *mem, int memSize, MemoryType mt);
    virtual ~hkMemoryStreamReader();
    virtual hkBool isOk() const;
    virtual int read(void *buf, int nbytes);

protected:
    char *m_buf;            // +0x8
    int m_bufCurrent;       // +0xC
    int m_bufSize;          // +0x10
    int m_markPos;          // +0x14
    MemoryType m_memType;   // +0x18
};

extern "C" void fn_82CFAE20(void *self);   // hkBufferedStreamWriter::flushBuffer

class hkBufferedStreamWriter : public hkStreamWriter {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_STREAM);
    hkBufferedStreamWriter(hkStreamWriter *s, int bufSize);
    hkBufferedStreamWriter(void *mem, int memSize, hkBool memoryIsString);
    virtual ~hkBufferedStreamWriter();
    virtual hkBool isOk() const;
    virtual int write(const void *buf, int nbytes);
    virtual void flush();

protected:
    void flushBuffer() { fn_82CFAE20(this); }

    hkStreamWriter *m_stream;   // +0x8
    char *m_buf;                // +0xC
    int m_bufSize;              // +0x10
    int m_bufCapacity;          // +0x14
    hkBool m_ownBuffer;         // +0x18
};

extern "C" void fn_82CEE3C0(void *self);   // hkArrayStreamWriter::nullTerminate (a Matching unit calls it)

class hkArrayStreamWriter : public hkStreamWriter {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_STREAM);
    enum ArrayOwnership { ARRAY_TAKE, ARRAY_BORROW };
    hkArrayStreamWriter(hkArrayBase<char> *arr, ArrayOwnership o)
        : m_arr(arr), m_offset(arr->getSize()), m_ownerShip(o)
    {
        nullTerminate();
    }
    virtual hkBool isOk() const;
    virtual int write(const void *buf, int nbytes);
    void nullTerminate() { fn_82CEE3C0(this); }

    hkArrayBase<char> *m_arr;    // +0x8
    int m_offset;                // +0xC
    ArrayOwnership m_ownerShip;  // +0x10
};

class hkMemoryTrack;

class hkMemoryTrackStreamWriter : public hkStreamWriter {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_STREAM);
    enum TrackOwnership { TRACK_TAKE, TRACK_BORROW };
    hkMemoryTrackStreamWriter(hkMemoryTrack *track, TrackOwnership o)
        : m_track(track), m_ownerShip(o) {}
    virtual hkBool isOk() const;
    virtual int write(const void *buf, int nbytes);

    hkMemoryTrack *m_track;      // +0x8
    TrackOwnership m_ownerShip;  // +0xC
};

class hkClassMember {
public:
    const char *m_name;   // +0x0
    char pad04[0xE];
    hkUint16 m_offset;    // +0x12
};

extern "C" {
int fn_82CEB1A8(const hkClass *cls);                              // hkClass::getObjectSize
int fn_82CEAE80(const hkClass *cls);                              // hkClass::getNumMembers
const hkClassMember *fn_82CEAEA8(const hkClass *cls, int i);      // hkClass::getMember
const void *fn_82CEAFA8(const void *registry, const char *name);
int fn_82CFB098(hkBufferedStreamWriter *w, int offset, int whence);   // hkBufferedStreamWriter::seek
void fn_82CEB2D8(const hkClass *cls, int i, hkStreamWriter *w);
}

extern "C" void fn_82E0EC10(void *mem, const void *registry, const hkClass *cls)
{
    hkBufferedStreamWriter writer(mem, fn_82CEB1A8(cls), false);
    for (int i = 0; i < fn_82CEAE80(cls); i++) {
        const hkClassMember *m = fn_82CEAEA8(cls, i);
        if (fn_82CEAFA8(registry, m->m_name) == 0) {
            fn_82CFB098(&writer, m->m_offset, 0);
            fn_82CEB2D8(cls, i, &writer);
        }
    }
}
