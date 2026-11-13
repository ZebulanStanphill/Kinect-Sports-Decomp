typedef char *va_list;
extern void __cdecl __va_start(va_list *, ...);
extern void fn_82F6E1B8(char *buf, const char *fmt, va_list ap);
extern char lbl_8320A650[0x104];

void fn_82822670(const char *fmt, ...)
{
    if (fmt != 0) {
        va_list ap;
        __va_start(&ap, fmt);
        fn_82F6E1B8(lbl_8320A650, fmt, ap);
    } else {
        lbl_8320A650[0] = 0;
    }
}
