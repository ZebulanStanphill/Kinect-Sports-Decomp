#ifndef _VA_LIST_DEFINED
typedef char *va_list;
#define _VA_LIST_DEFINED
#endif

void __cdecl __va_start(va_list *ap, ...);
int fn_82F83890(void *dst, const char *fmt, void *locale, va_list ap);

int fn_82F6D000(void *dst, const char *fmt, ...)
{
    va_list ap;
    __va_start(&ap, fmt);
    return fn_82F83890(dst, fmt, 0, ap);
}
