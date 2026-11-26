// hkStdioStreamReader::hkStdioStreamReader(const char *) (Common/Base/System/Io/Reader/Stdio/hkStdioStreamReader.cpp).
#include "havok/hkBase.h"
#include "havok/hkStdioStreamReader.h"

// C runtime functions
extern "C" {
void *fopen(const char *name, const char *mode);
int fclose(void *stream);
}

hkStdioStreamReader::hkStdioStreamReader(const char *nameIn)
    : m_mark(-1), m_isOk(true)
{
    m_handle = fopen(nameIn, "rb");
    m_isOk = m_handle != HK_NULL;
}
