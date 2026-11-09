#ifndef _VA_LIST_DEFINED
typedef char *va_list;
#define _VA_LIST_DEFINED
#endif

void __cdecl __va_start(va_list *ap, ...);
int fn_82F66768(char *buf, int size, const char *fmt, va_list ap);

void fn_82830D10(char *buf, const char *fmt, ...)
{
    va_list ap;
    __va_start(&ap, fmt);
    fn_82F66768(buf, 0x100, fmt, ap);
}
