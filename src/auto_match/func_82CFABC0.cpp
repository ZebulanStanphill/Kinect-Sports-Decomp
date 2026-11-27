// hkStdioStreamReader::read (vtable slot +0x10): fread from the file; a read that returns nothing clears m_isOk.
#include "havok/hkBase.h"
#include "havok/hkStdioStreamReader.h"

extern "C" int fread(void *, int, int, void *);

int hkStdioStreamReader::read(void *buf, int nbytes)
{
    int n = fread(buf, 1, nbytes, m_handle);
    if (n <= 0)
        m_isOk = false;
    return n;
}
