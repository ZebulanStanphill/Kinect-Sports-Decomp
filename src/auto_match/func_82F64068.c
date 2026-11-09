#ifndef _VA_LIST_DEFINED
typedef char *va_list;
#define _VA_LIST_DEFINED
#endif

void __cdecl __va_start(va_list *ap, ...);
int fn_82F66778(char *buf, unsigned int size, unsigned int count, const char *fmt, void *locale, va_list ap);

int fn_82F64068(char *buf, unsigned int size, unsigned int count, const char *fmt, ...)
{
    va_list ap;
    __va_start(&ap, fmt);
    return fn_82F66778(buf, size, count, fmt, 0, ap);
}
