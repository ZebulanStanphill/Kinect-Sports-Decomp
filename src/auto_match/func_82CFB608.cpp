// hkStdioStreamWriter::hkStdioStreamWriter (hkStdioStreamWriter.cpp): a
// writer over the CRT's stderr (2) or stdout (anything else), which it does
// not own. __iob_func is the CRT's __iob_func (FILE is 0x20 bytes).
#include "havok/hkBase.h"
#include "havok/hkStdioStreamWriter.h"

// C runtime functions
extern "C" {
char *__iob_func(void);   // __iob_func
}

hkStdioStreamWriter::hkStdioStreamWriter(int stdStream)
{
    m_owns = false;
    if (stdStream == 2)
        m_handle = __iob_func() + 0x40;   // stderr
    else
        m_handle = __iob_func() + 0x20;   // stdout
}
