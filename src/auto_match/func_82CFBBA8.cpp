#include "havok/hkString.h"

typedef char *va_list;
extern "C" void __cdecl __va_start(va_list *, ...);
extern "C" int fn_82F6E1B8(char *buf, const char *format, va_list args);

int hkString::sprintf(char *buf, const char *format, ...)
{
    va_list args;
    __va_start(&args, format);
    return fn_82F6E1B8(buf, format, args);
}
