// hkBufferedStreamWriter::hkBufferedStreamWriter(hkStreamWriter *s, int bufSize) (Common/Base/System/Io/Writer/
// Buffered/hkBufferedStreamWriter.cpp). It keeps its fn_ name because a Matching unit (func_82CE8088) calls it, so the
// fn_ wrapper runs the forced-inline constructor with MSVC's explicit constructor call (self->C::C(...)), which,
// unlike placement new, adds no null check.
#include "havok/hkBase.h"

class hkStreamWriter : public hkReferencedObject {
public:
    virtual hkBool isOk() const = 0;
    virtual int write(const void *buf, int nbytes) = 0;
    virtual void flush() {}                               // +0x14
};

class hkBufferedStreamWriter : public hkStreamWriter {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_STREAM);
    hkBufferedStreamWriter(hkStreamWriter *s, int bufSize);
    virtual ~hkBufferedStreamWriter();
    virtual hkBool isOk() const;
    virtual int write(const void *buf, int nbytes);
    virtual void flush();

protected:
    hkStreamWriter *m_stream;   // +0x8
    char *m_buf;                // +0xC
    int m_bufSize;              // +0x10
    int m_bufCapacity;          // +0x14
    hkBool m_ownBuffer;         // +0x18
};

HK_FORCE_INLINE hkBufferedStreamWriter::hkBufferedStreamWriter(hkStreamWriter *s, int bufSize)
    : m_stream(s), m_ownBuffer(true)
{
    if (m_stream)
        m_stream->addReference();
    m_buf = hkAlignedAllocate<char>(64, bufSize, HK_MEMORY_CLASS_STREAM);
    m_bufSize = 0;
    m_bufCapacity = bufSize;
}

extern "C" hkBufferedStreamWriter *fn_82CFB2D8(hkBufferedStreamWriter *self, hkStreamWriter *s, int bufSize)
{
    self->hkBufferedStreamWriter::hkBufferedStreamWriter(s, bufSize);
    return self;
}
