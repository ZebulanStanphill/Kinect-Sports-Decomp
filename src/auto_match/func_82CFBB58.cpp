#include "havok/hkString.h"

extern "C" int fn_82F6EDE8(char *buf, unsigned int count, const char *format, char *args);

int hkString::vsnprintf(char *buf, int count, const char *format, char *args)
{
    return fn_82F6EDE8(buf, count, format, args);
}
