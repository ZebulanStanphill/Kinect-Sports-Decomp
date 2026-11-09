typedef char *va_list;
extern void __cdecl __va_start(va_list *, ...);
extern void fn_82F7DDD8(void);
extern int fn_82F67EC0(void (*)(void), void *, const char *, void *, va_list);
int fn_82F67FE8(void *dst, const char *fmt, ...) {
    va_list ap;
    __va_start(&ap, fmt);
    return fn_82F67EC0(fn_82F7DDD8, dst, fmt, 0, ap);
}
