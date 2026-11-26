// hkCrc32StreamWriter::hkCrc32StreamWriter(hkUint32 startCrc) (Common/Base/System/Io/Writer/Crc32/hkCrc32StreamWriter.h):
// hkReferencedObject's constructor (m_referenceCount = 1), the vtable, then the running CRC starts as ~startCrc.
// It keeps its fn_ name (a Matching unit calls it), so the constructor is called explicitly.
#include "havok/hkBase.h"
#include "havok/hkStreamWriter.h"

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
