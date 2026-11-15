typedef char *va_list;
extern void __cdecl __va_start(va_list *, ...);
extern void fn_828F5960(char *, unsigned int, const char *, va_list);
extern void *fn_82903B88(void *);
extern void fn_828FA8D8(void *, void *, int, const char *, ...);

int fn_82904258(void **self, void *object, int kind, const char *format, ...)
{
    va_list arguments;
    char message[256];
    void *entry;
    ((int *)self)[0x13] = 1;
    __va_start(&arguments, format);
    fn_828F5960(message, 256, format, arguments);
    message[255] = 0;
    fn_828FA8D8((char *)*self + 0x18, fn_82903B88(object), kind, "%s", message);
    return 0;
}
