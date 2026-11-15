typedef char *va_list;
extern void __cdecl __va_start(va_list *, ...);
extern void fn_828F5960(char *, unsigned int, const char *, va_list);
extern void fn_828FA8D8(void *, void *, int, const char *, ...);

int fn_82975B00(char *self, char *object, int kind, const char *format, ...)
{
    va_list arguments;
    char message[256];
    void *context;
    __va_start(&arguments, format);
    fn_828F5960(message, 256, format, arguments);
    context = 0;
    message[255] = 0;
    if (object != 0) {
        switch (*(int *)(object + 4)) {
        case 3:
            context = object + 0x10;
            break;
        case 6:
            context = *(char **)(object + 0x14) + 0x10;
            break;
        case 14:
            context = object + 0x30;
            break;
        }
    }
    fn_828FA8D8(*(void **)(self + 0xc4), context, kind, "%s", message);
    *(int *)(self + 0xd4) = 1;
    return 0;
}
