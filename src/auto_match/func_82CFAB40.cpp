// hkBufferedStreamReader scalar deleting destructor, generated from the destructor below (hkBufferedStreamReader.cpp).
#include "havok/hkBase.h"

class hkStreamReader : public hkReferencedObject {
public:
    virtual hkBool isOk() const = 0;
    virtual int read(void *buf, int nbytes) = 0;
};

class hkBufferedStreamReader : public hkStreamReader {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_STREAM);
    hkBufferedStreamReader(hkStreamReader *s, int bufSize);
    virtual ~hkBufferedStreamReader();
    virtual hkBool isOk() const;
    virtual int read(void *buf, int nbytes);

    struct Buffer {
        char *begin;      // +0xC
        int current;      // +0x10
        int size;         // +0x14
        int capacity;     // +0x18
        int markPos;      // +0x1C
        int markLimit;    // +0x20
    };

protected:
    hkStreamReader *m_stream;   // +0x8
    Buffer m_buf;
};

hkBufferedStreamReader::~hkBufferedStreamReader()
{
    m_stream->removeReference();
    hkAlignedDeallocate<char>(m_buf.begin);
}
