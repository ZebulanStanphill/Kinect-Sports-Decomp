// hkCrc32StreamWriter::hkCrc32StreamWriter(hkUint32 startCrc) (Common/Base/System/Io/Writer/Crc32/hkCrc32StreamWriter.h):
// hkReferencedObject's constructor (m_referenceCount = 1), the vtable, then the running CRC starts as ~startCrc.
// It keeps its fn_ name (a Matching unit calls it), so the constructor is called explicitly.
#include "havok/hkBase.h"
#include "havok/hkCrc32StreamWriter.h"

extern "C" hkCrc32StreamWriter *fn_82CFEBF0(hkCrc32StreamWriter *self, hkUint32 startCrc)
{
    self->hkCrc32StreamWriter::hkCrc32StreamWriter(startCrc);
    return self;
}
