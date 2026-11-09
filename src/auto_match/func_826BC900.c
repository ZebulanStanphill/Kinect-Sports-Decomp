#ifndef _VA_LIST_DEFINED
typedef char *va_list;
#define _VA_LIST_DEFINED
#endif

void __cdecl __va_start(va_list *ap, ...);
int fn_82F668C8(char *buf, int size, int count, const char *fmt, va_list ap);

int fn_826BC900(char *buf, int size, const char *fmt, ...)
{
    va_list ap;
    __va_start(&ap, fmt);
    return fn_82F668C8(buf, size, -1, fmt, ap);
}
