// hkStdioStreamReader::seek (vtable slot +0x28): fseek of the file; a non-zero result is a failure.
#include "havok/hkBase.h"
#include "havok/hkStdioStreamReader.h"

extern "C" int fseek(void *f, int offset, int whence);

hkResult hkStdioStreamReader::seek(int offset, SeekWhence whence)
{
    return fseek(m_handle, offset, whence) != 0 ? HK_FAILURE : HK_SUCCESS;
}
