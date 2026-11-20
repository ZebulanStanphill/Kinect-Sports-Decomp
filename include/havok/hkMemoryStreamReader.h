// hkMemoryStreamReader (Common/Base/System/Io/Reader/Memory/hkMemoryStreamReader.h).
// Size 0x1C. The memory type controls whether destruction frees the buffer.
#ifndef HAVOK_HKMEMORYSTREAMREADER_H
#define HAVOK_HKMEMORYSTREAMREADER_H

#include "havok/hkStreamReader.h"

class hkMemoryStreamReader : public hkStreamReader {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_STREAM);
    enum MemoryType { MEMORY_COPY, MEMORY_TAKE, MEMORY_INPLACE };

    hkMemoryStreamReader(const void *mem, int memSize, MemoryType type);
    virtual ~hkMemoryStreamReader();
    virtual hkBool isOk() const;
    virtual int read(void *buf, int nbytes);
    virtual int skip(int nbytes);
    virtual hkBool markSupported() const;
    virtual hkResult setMark(int markLimit);
    virtual hkResult rewindToMark();
    virtual hkBool seekTellSupported() const;
    virtual hkResult seek(int offset, SeekWhence whence);
    virtual int tell() const;

protected:
    char *m_buf;            // +0x8
    int m_bufCurrent;       // +0xC
    int m_bufSize;          // +0x10
    int m_markPos;          // +0x14
    MemoryType m_memType;   // +0x18
};

#endif
