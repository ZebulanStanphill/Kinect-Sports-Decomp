// hkBufferedStreamReader::markSupported (vtable slot +0x18): there is a buffer.
#include "havok/hkBase.h"
#include "havok/hkBufferedStreamReader.h"

hkBool hkBufferedStreamReader::markSupported() const { return m_buf.capacity != 0; }
