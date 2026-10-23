// Game code that loads a packfile embedded in a resource: finds the entry of
// type 5, reads it through an hkIArchive over the memory and returns the
// hkRootLevelContainer. It needs C++ because hkIArchive's constructor and
// destructor are renamed (??0hkIArchive@@QAA@PBXHVhkBool@@@Z, ??1hkIArchive@@UAA@XZ).
// The packfile reader is used as an opaque object with its fn_ functions, as
// the matching fn_825A54A8 does.
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

class hkIArchive : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE_CLASS);
    hkIArchive(hkStreamReader *sb, hkBool byteswap);
    hkIArchive(const char *filename, hkBool byteswap);
    hkIArchive(const void *mem, int memSize, hkBool byteswap);
    virtual ~hkIArchive();

protected:
    hkStreamReader *m_streamReader;   // +0x8
    hkBool m_byteSwap;                // +0xC
};

extern "C" {
int *fn_825A2410(int *p);
void fn_82E0B980(void *reader);              // packfile reader constructor
void fn_82E0C7A0(void *reader);              // packfile reader destructor
int fn_82E0D7E8(void *reader, hkStreamReader *sr);
void fn_82E10A30(void *reader, unsigned int v);
void *fn_82E12AC8(void *reader, const char *className);
hkReferencedObject *fn_82E0C868(void *reader);
hkStreamReader *fn_82CED0A0(hkIArchive *ar);   // hkIArchive::getStreamReader
extern unsigned int lbl_8323FDE4;
}

struct PackfileReader {
    HK_FORCE_INLINE PackfileReader() { fn_82E0B980(this); }
    HK_FORCE_INLINE ~PackfileReader() { fn_82E0C7A0(this); }
    char m_storage[0x80];
};

struct Blob {
    const void *data;
    unsigned int size;
};

struct Entry {
    int type;
    Blob *data;
};

struct Obj {
    Entry *entries;
    unsigned int count;
    int f8;
    int fc;
    int f10;
    int sub14;
};

static Blob *find(Obj *o, int type)
{
    unsigned int i;
    for (i = 0; i < o->count; i++) {
        if (o->entries[i].type == type)
            return o->entries[i].data;
    }
    return 0;
}

extern "C" void *fn_826034A0(Obj *o)
{
    Blob *b = find(o, 5);
    if (b != 0 && b->size != 0) {
        hkIArchive ar(b->data, b->size, false);
        PackfileReader reader;
        fn_82E0D7E8(&reader, fn_82CED0A0(&ar));
        fn_82E10A30(&reader, lbl_8323FDE4);
        void *root = fn_82E12AC8(&reader, "hkRootLevelContainer");
        hkReferencedObject *data = fn_82E0C868(&reader);
        data->addReference();
        *fn_825A2410(&o->sub14) = (int)data;
        return root;
    }
    return 0;
}
