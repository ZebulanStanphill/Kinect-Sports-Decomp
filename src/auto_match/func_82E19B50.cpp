// hkObjectCopier::copyObject (Common/Serialize/Copier/hkObjectCopier.cpp; the
// same code serves PackfileObjectCopier, identical-code folding): saves the
// object body and its extras through an hkOArchive on the stack, padding the
// output to 16 bytes after each, and reports whether the archive is still ok.
// The copier's own helpers keep their fn_ names.
#include "havok/hkBase.h"

#include "havok/hkStreamReader.h"

#include "havok/hkStreamWriter.h"

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
    int flushBuffer();

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

#include "havok/hkIArchive.h"

#include "havok/hkOArchive.h"

class hkRelocationInfo;
class hkObjectCopier;

extern "C" {
int fn_82E18720(hkObjectCopier *self, const void *dataIn, const hkClass &klassIn, hkOArchive &dataOut,
                const hkClass &klassOut);                                 // saveBody
void fn_82E182B0(hkStreamWriter *w, int align);                           // writePadding
void fn_82E19000(hkObjectCopier *self, const void *dataIn, const hkClass &klassIn, hkOArchive &dataOut,
                 const hkClass &klassOut, int objectStart, hkRelocationInfo &reloc, void *extra);   // saveExtras
}

class hkObjectCopier : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SERIALIZE);
    virtual hkResult copyObject(const void *dataIn, const hkClass &klassIn, hkStreamWriter *dataOut,
                                const hkClass &klassOut, hkRelocationInfo &reloc);

    hkUint8 m_layouts[0xC];   // +0x8 (not needed here)
    hkBool m_byteSwap;        // +0x14
};

hkResult hkObjectCopier::copyObject(const void *dataIn, const hkClass &klassIn, hkStreamWriter *dataOut,
                                    const hkClass &klassOut, hkRelocationInfo &reloc)
{
    hkOArchive dataArchive(dataOut, m_byteSwap);
    int objectStart = fn_82E18720(this, dataIn, klassIn, dataArchive, klassOut);
    fn_82E182B0(dataOut, 16);
    fn_82E19000(this, dataIn, klassIn, dataArchive, klassOut, objectStart, reloc, HK_NULL);
    fn_82E182B0(dataOut, 16);
    return dataArchive.isOk() ? HK_SUCCESS : HK_FAILURE;
}
