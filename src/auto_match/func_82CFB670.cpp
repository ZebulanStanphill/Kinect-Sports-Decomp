// hkStdioStreamWriter::hkStdioStreamWriter(const char *nameIn) (Common/Base/System/Io/Writer/Stdio/
// hkStdioStreamWriter.cpp): owns the file it opens "wb" (no file without a name).
#include "havok/hkBase.h"
#include "havok/hkStdioStreamWriter.h"

extern "C" void *fopen(const char *, const char *);

hkStdioStreamWriter::hkStdioStreamWriter(const char *nameIn)
{
    m_handle = HK_NULL;
    m_owns = true;
    if (nameIn)
        m_handle = fopen(nameIn, "wb");
}
