typedef char *va_list;
extern void __cdecl __va_start(va_list *, ...);
extern int fn_82F66768(char *, unsigned int, const char *, va_list);
void fn_8266C020(char *out, const char *fmt, ...)
{
    va_list ap;
    __va_start(&ap, fmt);
    fn_82F66768(out, 0x104, fmt, ap);
}
