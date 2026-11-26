// hkStdioStreamWriter::~hkStdioStreamWriter (hkStdioStreamWriter.cpp).
#include "havok/hkBase.h"
#include "havok/hkStdioStreamWriter.h"

// C runtime functions
extern "C" {
void *fopen(const char *name, const char *mode);
int fclose(void *stream);
}

hkStdioStreamWriter::~hkStdioStreamWriter()
{
    if (m_handle && m_owns)
        fclose(m_handle);
    m_handle = HK_NULL;
}
