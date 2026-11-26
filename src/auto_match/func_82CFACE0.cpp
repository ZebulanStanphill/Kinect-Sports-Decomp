// hkStdioStreamReader::~hkStdioStreamReader (hkStdioStreamReader.cpp).
#include "havok/hkBase.h"
#include "havok/hkStdioStreamReader.h"

// C runtime functions
extern "C" {
void *fopen(const char *name, const char *mode);
int fclose(void *stream);
}

hkStdioStreamReader::~hkStdioStreamReader()
{
    if (m_handle)
        fclose(m_handle);
}
