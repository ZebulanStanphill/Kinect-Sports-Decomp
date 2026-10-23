// Writes the header line of the monitor statistics table (Common/Base/Monitor/
// MonitorStreamAnalyzer): "Timer Name", one padded column per thread and SPU,
// the averages, into a string built by an hkOstream over an hkArray<char>,
// then hands it to the output stream and prints the nodes (fn_82CF1C18).
// hkOstream(hkArray<char> &) is renamed, while ~hkOstream keeps its fn_ name
// (fn_82CED958, ~100 C callers), so the stream is constructed in place in a
// local buffer and destroyed with an explicit call.
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

class hkOstream : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_STREAM);
    hkOstream(hkArray<char> &buf);
    virtual ~hkOstream();

protected:
    hkStreamWriter *m_writer;   // +0x8
};

struct StatsOptions {
    int m_firstColumn;        // +0x0
    int m_columnWidth;        // +0x4
    int m_unknown8;           // +0x8
    int m_unknownC;           // +0xC
    hkUint8 m_unknown10;      // +0x10
};

extern "C" {
void fn_82CED958(hkOstream *os);                                   // hkOstream::~hkOstream
void fn_82CEDE90(hkOstream *os, const char *fmt, ...);             // hkOstream::printf
void fn_82CEDAE8(hkOstream *os, char c);                           // hkOstream::operator<<(char)
void fn_82CEDB38(hkOstream *os, const char *s);                    // hkOstream::operator<<(const char *)
int fn_82CF0DC8(void *nodes, int depth, int a, hkUint8 b);
void fn_82CF1C18(hkOstream *os, void *nodes, int depth, int numThreads, int numSpus, StatsOptions *options);
}

static HK_FORCE_INLINE void padTo(hkOstream *os, hkArray<char> &buf, StatsOptions *options, int column)
{
    int pad = options->m_columnWidth * column - buf.getSize() + options->m_firstColumn;
    for (int i = 0; i < pad; i++)
        fn_82CEDAE8(os, ' ');
}

extern "C" void fn_82CF2010(void *nodes, int numThreads, int numSpus, hkOstream *outStream, StatsOptions *options)
{
    options->m_firstColumn = fn_82CF0DC8(nodes, 0, options->m_unknown8, options->m_unknown10);
    hkArray<char> buf;
    union {
        char storage[sizeof(hkOstream)];
        void *align;
    } osMem;
    new (osMem.storage) hkOstream(buf);
    hkOstream *os = reinterpret_cast<hkOstream *>(osMem.storage);
    fn_82CEDE90(os, "Timer Name");
    if (numThreads > 1 || numSpus > 0) {
        for (int i = 0; i < numThreads; i++) {
            padTo(os, buf, options, i);
            fn_82CEDE90(os, "Thread %d", i);
        }
        for (int i = 0; i < numSpus; i++) {
            padTo(os, buf, options, i + numThreads);
            fn_82CEDE90(os, "Spu %d", i);
        }
        int column = numThreads + numSpus;
        if (numThreads > 1) {
            padTo(os, buf, options, column);
            column++;
            fn_82CEDE90(os, "Average Cpu");
        }
        if (numSpus > 1) {
            padTo(os, buf, options, column);
            fn_82CEDE90(os, "Average Spu");
        }
    }
    fn_82CEDB38(outStream, buf.m_data);
    fn_82CEDE90(outStream, "\n\n");
    fn_82CF1C18(outStream, nodes, 0, numThreads, numSpus, options);
    fn_82CED958(os);
}
