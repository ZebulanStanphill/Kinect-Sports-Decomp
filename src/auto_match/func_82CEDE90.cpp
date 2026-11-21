// hkOstream::printf (Common/Base/System/Io/OStream/hkOStream.cpp).
#include "havok/hkOstream.h"
#include "havok/hkString.h"

typedef char *va_list;

extern "C" void __cdecl __va_start(va_list *, ...);
extern "C" int fn_82CFBB58(char *buf, int size, const char *fmt, va_list ap);

void hkOstream::printf(const char *fmt, ...)
{
    va_list ap;
    char buf[10024];
    hkStreamWriter *writer;

    __va_start(&ap, fmt);
    fn_82CFBB58(buf, 0x2728, fmt, ap);
    writer = m_writer;
    writer->write(buf, hkString::strLen(buf));
}
