// hkBufferedStreamReader (Common/Base/System/Io/Reader/Buffered/hkBufferedStreamReader.h), 0x24 bytes: a reader
// that buffers another reader and gives it marks.
// The constructor (82CFAA48) takes a reference on the wrapped stream and allocates the buffer 64-aligned; the
// destructor (82CFAAD8) releases both. hkNativeFileSystem::openReader (82CE7F80) wraps a stdio reader with the
// default buffer size, 0x1000.
// The vtable (??_7hkBufferedStreamReader@@6B@, 13 slots) gives the overrides, which keep their fn_ names:
// isOk 82CFA7F0, read 82CFA6B0, skip 82CFA770, markSupported 82CFA860, setMark 82CFA878, rewindToMark 82CFA8A0,
// seekTellSupported 82CFA8C0, seek 82CFA900 and tell 82CFA930, then a slot of its own at +0x30 (82CFA5F0), which
// skip calls when the buffer runs out: it refills the buffer from the stream. Its name is invented.
// The names of the Buffer members are invented from what the functions do with them: setMark (82CFA878) stores
// the current position in markPos and the limit in markLimit and fails when the limit exceeds the capacity;
// rewindToMark (82CFA8A0) goes back to markPos when it is not negative.
#ifndef HAVOK_HKBUFFEREDSTREAMREADER_H
#define HAVOK_HKBUFFEREDSTREAMREADER_H

#include "havok/hkStreamReader.h"

class hkBufferedStreamReader : public hkStreamReader {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_STREAM);
    hkBufferedStreamReader(hkStreamReader *s, int bufSize = 0x1000);
    virtual ~hkBufferedStreamReader();
    virtual hkBool isOk() const;
    virtual int read(void *buf, int nbytes);
    virtual int skip(int nbytes);
    virtual hkBool markSupported() const;
    virtual hkResult setMark(int markLimit);
    virtual hkResult rewindToMark();
    virtual hkBool seekTellSupported() const;
    virtual hkResult seek(int offset, SeekWhence whence);
    virtual int tell() const;
    virtual int refillBuffer();   // +0x30

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
    Buffer m_buf;               // +0xC
};

#endif
