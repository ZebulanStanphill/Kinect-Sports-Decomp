typedef char *va_list;

extern void __cdecl __va_start(va_list *, ...);

/* Logging stub: formats nothing in this build. */
void fn_826A9138(void *self, const char *fmt, ...)
{
    va_list ap;
    __va_start(&ap, fmt);
}
