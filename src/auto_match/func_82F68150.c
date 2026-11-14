extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);
extern char *fn_82F68048(int errnum);
extern int fn_82F66368(char *dst, unsigned int size, const char *src, unsigned int count);
extern __declspec(noreturn) void fn_82F63C78(const void *expr, const void *func, const void *file, unsigned int line, unsigned int reserved);

int fn_82F68150(char *buffer, unsigned int size, int errnum)
{
    if (buffer == 0) {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return 0x16;
    }
    if (size == 0) {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return 0x16;
    }
    if (fn_82F66368(buffer, size, fn_82F68048(errnum), size - 1) != 0) {
        fn_82F63C78(0, 0, 0, 0, 0);
    }
    return 0;
}
