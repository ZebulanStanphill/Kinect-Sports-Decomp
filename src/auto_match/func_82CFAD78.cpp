// hkStdioStreamReader::rewindToMark (vtable slot +0x20): seeks back to m_mark (through the vtable).
#include "havok/hkBase.h"
#include "havok/hkStdioStreamReader.h"

hkResult hkStdioStreamReader::rewindToMark() { return seek(m_mark, STREAM_SET); }
