// hkStdioStreamReader (Common/Base/System/Io/Reader/Stdio/hkStdioStreamReader.h), 0x14 bytes: a stream reader
// over a C runtime FILE.
// The constructor (82CFAC70) clears the mark to -1, opens the file "rb" and sets m_isOk from the handle; the
// destructor (82CFACE0) closes the file. The vtable (??_7hkStdioStreamReader@@6B@) gives the overrides, which keep
// their fn_ names: isOk 82CFAC08 (returns m_isOk), read 82CFABC0, markSupported 82CFAC18, setMark 82CFAD30
// (stores tell() in m_mark), rewindToMark 82CFAD78 (seeks back to it), seekTellSupported 82CFAC28, seek 82CFAC38
// and tell 82CFAC68 (ftell of m_handle). skip is hkStreamReader's. The member names other than m_isOk are
// invented.
#ifndef HAVOK_HKSTDIOSTREAMREADER_H
#define HAVOK_HKSTDIOSTREAMREADER_H

#include "havok/hkStreamReader.h"

class hkStdioStreamReader : public hkStreamReader {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_STREAM);
    hkStdioStreamReader(const char *nameIn);
    virtual ~hkStdioStreamReader();
    virtual hkBool isOk() const;
    virtual int read(void *buf, int nbytes);
    virtual hkBool markSupported() const;
    virtual hkResult setMark(int markLimit);
    virtual hkResult rewindToMark();
    virtual hkBool seekTellSupported() const;
    virtual hkResult seek(int offset, SeekWhence whence);
    virtual int tell() const;

protected:
    int m_mark;       // +0x8: the position setMark saved, -1 before
    void *m_handle;   // +0xC: the FILE
    hkBool m_isOk;    // +0x10
};

#endif
