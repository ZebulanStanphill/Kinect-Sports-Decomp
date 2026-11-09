typedef char *va_list;
extern void __cdecl __va_start(va_list *, ...);
extern int fn_82F7CB20(void *, const char *, void *, va_list);
extern int fn_82F67EC0(int (*)(void *, const char *, void *, va_list), void *, const char *, void *, va_list);
int fn_82F67F88(void *out, const char *fmt, ...)
{
    va_list ap;
    __va_start(&ap, fmt);
    return fn_82F67EC0(fn_82F7CB20,out,fmt,0,ap);
}
