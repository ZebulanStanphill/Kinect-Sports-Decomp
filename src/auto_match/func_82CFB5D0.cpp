// hkStdioStreamWriter::seek (vtable slot +0x1C): fseek of the file; a non-zero result is a failure.
#include "havok/hkBase.h"
#include "havok/hkStdioStreamWriter.h"

extern "C" int fseek(void *f, int offset, int whence);

hkResult hkStdioStreamWriter::seek(int offset, SeekWhence whence)
{
    return fseek(m_handle, offset, whence) != 0 ? HK_FAILURE : HK_SUCCESS;
}
