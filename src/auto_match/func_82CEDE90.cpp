// hkOstream::printf (Common/Base/System/Io/OStream/hkOStream.cpp).
#include "havok/hkOstream.h"
#include "havok/hkString.h"

typedef char *va_list;

extern "C" void __cdecl __va_start(va_list *, ...);

void hkOstream::printf(const char *fmt, ...)
{
    va_list ap;
    char buf[10024];
    hkStreamWriter *writer;

    __va_start(&ap, fmt);
    hkString::vsnprintf(buf, 0x2728, fmt, ap);
    writer = m_writer;
    writer->write(buf, hkString::strLen(buf));
}
