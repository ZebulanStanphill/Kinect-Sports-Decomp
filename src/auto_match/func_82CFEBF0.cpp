// hkCrc32StreamWriter::hkCrc32StreamWriter(hkUint32 startCrc) (Common/Base/System/Io/Writer/Crc32/hkCrc32StreamWriter.h):
// hkReferencedObject's constructor (m_referenceCount = 1), the vtable, then the running CRC starts as ~startCrc.
// It keeps its fn_ name (a Matching unit calls it), so the constructor is called explicitly.
#include "havok/hkBase.h"

// hkStreamWriter (Common/Base/System/Io/Writer/hkStreamWriter.h): 9 vtable slots.
class hkStreamWriter : public hkReferencedObject {
public:
    enum SeekWhence { STREAM_SET = 0, STREAM_CUR = 1, STREAM_END = 2 };
    hkStreamWriter() {}
    virtual ~hkStreamWriter() {}
    virtual hkBool isOk() const = 0;
    virtual int write(const void *buf, int nbytes) = 0;
    virtual void flush() {}
    virtual hkBool seekTellSupported() const;
    virtual int seek(int offset, SeekWhence whence);
    virtual int tell() const;
};

class hkCrc32StreamWriter : public hkStreamWriter {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_STREAM);
    hkCrc32StreamWriter(hkUint32 startCrc = 0) { m_crc = ~startCrc; }
    virtual int write(const void *buf, int nbytes);
    virtual hkBool isOk() const;

    hkUint32 m_crc;   // +0x8
};

extern "C" hkCrc32StreamWriter *fn_82CFEBF0(hkCrc32StreamWriter *self, hkUint32 startCrc)
{
    self->hkCrc32StreamWriter::hkCrc32StreamWriter(startCrc);
    return self;
}
