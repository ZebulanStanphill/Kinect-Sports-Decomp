// hkBufferedStreamWriter
// (Common/Base/System/Io/Writer/Buffered/hkBufferedStreamWriter.h): buffers
// writes to another stream, or writes into a fixed block of memory when it has
// no stream.
//
// Layout (0x1C bytes):
//   +0x0  hkStreamWriter  vtable ??_7hkBufferedStreamWriter@@6B@ (9 slots)
//   +0x8  m_stream        the stream written through, or HK_NULL
//   +0xC  m_buf           the buffer
//   +0x10 m_bufSize       bytes used (the write position in memory mode)
//   +0x14 m_bufCapacity
//   +0x18 m_ownBuffer
#ifndef HAVOK_HKBUFFEREDSTREAMWRITER_H
#define HAVOK_HKBUFFEREDSTREAMWRITER_H

#include "havok/hkStreamWriter.h"

class hkBufferedStreamWriter : public hkStreamWriter {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_STREAM);
    hkBufferedStreamWriter(hkStreamWriter *s, int bufSize);
    hkBufferedStreamWriter(void *mem, int memSize, hkBool memoryIsString);
    virtual ~hkBufferedStreamWriter();
    virtual hkBool isOk() const;
    virtual int write(const void *buf, int nbytes);
    virtual void flush();
    virtual hkBool seekTellSupported() const;
    virtual hkResult seek(int offset, SeekWhence whence);
    virtual int tell() const;

protected:
    int flushBuffer();

    hkStreamWriter *m_stream;   // +0x8
    char *m_buf;                // +0xC
    int m_bufSize;              // +0x10
    int m_bufCapacity;          // +0x14
    hkBool m_ownBuffer;         // +0x18
};

#endif
