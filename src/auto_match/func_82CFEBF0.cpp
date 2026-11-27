// hkCrc32StreamWriter::hkCrc32StreamWriter(hkUint32 startCrc) (Common/Base/System/Io/Writer/Crc32/hkCrc32StreamWriter.cpp):
// hkReferencedObject's constructor (m_referenceCount = 1), the vtable, then the running CRC starts as ~startCrc.
#include "havok/hkBase.h"
#include "havok/hkCrc32StreamWriter.h"

hkCrc32StreamWriter::hkCrc32StreamWriter(hkUint32 startCrc) { m_crc = ~startCrc; }
