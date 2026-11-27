// hkBufferedStreamReader::seekTellSupported (vtable slot +0x24): asks the wrapped stream.
#include "havok/hkBase.h"
#include "havok/hkBufferedStreamReader.h"

hkBool hkBufferedStreamReader::seekTellSupported() const { return m_stream->seekTellSupported(); }
