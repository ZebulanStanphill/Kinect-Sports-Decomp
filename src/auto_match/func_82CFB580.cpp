// hkStdioStreamWriter::flush (vtable slot +0x14): fflush (fn_82F6BE90) of the file when there is one.
#include "havok/hkBase.h"
#include "havok/hkStdioStreamWriter.h"

extern "C" void fn_82F6BE90(void *f);   // fflush

void hkStdioStreamWriter::flush()
{
    if (m_handle)
        fn_82F6BE90(m_handle);
}
