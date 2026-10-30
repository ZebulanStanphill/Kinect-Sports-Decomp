// snprintf-style formatting into a buffer of `size` bytes, through fn_82F668C8
// (a _vsnprintf_s-like function) with a count of size - 1.

#ifndef _VA_LIST_DEFINED
typedef char *va_list;
#define _VA_LIST_DEFINED
#endif

void __cdecl __va_start(va_list *ap, ...);
int fn_82F668C8(char *buf, int size, int count, const char *fmt, va_list ap);

int fn_82526C70(char *buf, int size, const char *fmt, ...)
{
    va_list ap;
    __va_start(&ap, fmt);
    return fn_82F668C8(buf, size, size - 1, fmt, ap);
}

