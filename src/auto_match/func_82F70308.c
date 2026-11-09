typedef char *va_list;
extern void __cdecl __va_start(va_list *, ...);
extern void fn_82F84408(void);
extern int fn_82F70248(void (*)(void), void *, const char *, void *, va_list);
int fn_82F70308(void *dst, const char *fmt, ...) {
    va_list ap;
    __va_start(&ap, fmt);
    return fn_82F70248(fn_82F84408, dst, fmt, 0, ap);
}
