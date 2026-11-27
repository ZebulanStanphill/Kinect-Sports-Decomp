// hkStdioStreamWriter::write (vtable slot +0x10): fwrite to the file; a failed write closes an owned file and
// clears the handle.
#include "havok/hkBase.h"
#include "havok/hkStdioStreamWriter.h"

extern "C" {
int fwrite(const void *, int, int, void *);
void fclose(void *);
}

int hkStdioStreamWriter::write(const void *buf, int nbytes)
{
    if (m_handle) {
        int n = fwrite(buf, 1, nbytes, m_handle);
        if (n <= 0) {
            if (m_handle && m_owns)
                fclose(m_handle);
            m_handle = HK_NULL;
        }
        return n;
    }
    return 0;
}
