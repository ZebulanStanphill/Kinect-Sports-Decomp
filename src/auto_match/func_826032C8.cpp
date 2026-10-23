// Game code that loads two packfiles embedded in a resource (the physics data
// and the physics system) through hkIArchive objects over memory, then marks
// the object (state 5) when one of the system's rigid bodies has property
// 0x2001. It needs C++ because hkIArchive's constructor and destructor are
// renamed (??0hkIArchive@@QAA@PBXHVhkBool@@@Z, ??1hkIArchive@@UAA@XZ). The
// packfile reader is used as an opaque object with its fn_ functions, as the
// matching fn_825A54A8 does.
#include "havok/hkBase.h"
inline void *operator new(unsigned int,void *p) throw() { return p; }

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

struct hkSimpleProperty {
    hkUint32 m_key;
    hkUint32 m_alignmentPadding;
    hkUint64 m_value;
};

struct RigidBody {
    char pad[0x78];
    hkSimpleProperty *m_properties;   // +0x78
    int m_numProperties;              // +0x7C

    bool hasProperty(hkUint32 key) const
    {
        for (int i = 0; i < m_numProperties; i++) {
            if (m_properties[i].m_key == key)
                return true;
        }
        return false;
    }
};

struct PhysicsSystem {
    char pad[8];
    RigidBody **m_rigidBodies;   // +0x8
    int m_numRigidBodies;        // +0xC
};

struct Blobs {
    const void *data0;
    unsigned int size0;
    const void *data1;
    unsigned int size1;
};

struct Obj {
    char pad[0xC];
    int state;               // +0xC
    void *physicsData;       // +0x10
    int sub14;               // +0x14
    PhysicsSystem *system;   // +0x18
};

extern "C" Blobs *fn_825A4E80(Obj *o);

extern "C" void fn_826032C8(Obj *o)
{
    union ReaderStorage { void *align; char data[sizeof(PackfileReader)]; } storage;
    Blobs *b = fn_825A4E80(o);
    if (b == 0)
        return;
    if (b->size0 != 0) {
        hkIArchive ar(b->data0, b->size0, false);
        PackfileReader &reader = *new (storage.data) PackfileReader;
        fn_82E0D7E8(&reader, fn_82CED0A0(&ar));
        fn_82E10A30(&reader, lbl_8323FDE4);
        o->physicsData = fn_82E12AC8(&reader, "hkpPhysicsData");
        hkReferencedObject *d = fn_82E0C868(&reader);
        d->addReference();
        d->addReference();
        *fn_825A2410(&o->sub14) = (int)d;
        reader.~PackfileReader();
    }
    if (b->size1 != 0) {
        hkIArchive ar(b->data1, b->size1, false);
        PackfileReader &reader = *new (storage.data) PackfileReader;
        fn_82E0D7E8(&reader, fn_82CED0A0(&ar));
        o->system = (PhysicsSystem *)fn_82E12AC8(&reader, "hkpPhysicsSystem");
        hkReferencedObject *d = fn_82E0C868(&reader);
        d->addReference();
        d->addReference();
        *fn_825A2410(&o->sub14) = (int)d;
        if (o->state == 3) {
            PhysicsSystem *s = o->system;
            for (int i = 0; i < s->m_numRigidBodies; i++) {
                if (s->m_rigidBodies[i]->hasProperty(0x2001)) {
                    o->state = 5;
                    break;
                }
            }
        }
        reader.~PackfileReader();
    }
}
