// hkStdioStreamWriter::isOk (vtable slot +0xC): the file handle is not null.
#include "havok/hkBase.h"
#include "havok/hkStdioStreamWriter.h"

hkBool hkStdioStreamWriter::isOk() const { return m_handle != HK_NULL; }
