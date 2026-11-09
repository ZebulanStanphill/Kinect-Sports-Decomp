typedef char *va_list;
extern void __cdecl __va_start(va_list *, ...);
extern void fn_82B7C8D0(void *, const char *, va_list);
extern void fn_82B7C3A0(void *);
void fn_82B7C958(void *self, const char *fmt, ...)
{
    va_list ap;
    __va_start(&ap, fmt);
    fn_82B7C8D0(self,fmt,ap);
    fn_82B7C3A0(self);
}
