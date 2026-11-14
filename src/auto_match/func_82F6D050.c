extern char *fn_82F838B0(const char *s, int c);
extern unsigned long fn_82F6A3F0(const char *s, char **end, int radix);
extern int fn_82F686F8(unsigned long value, char *buf, unsigned int size, int radix);
extern int fn_82F664B0(char *dst, unsigned int size, const char *src);
extern void _invalid_parameter_noinfo(void);
extern __declspec(noreturn) void fn_82F63C78(const void *expr, const void *func, const void *file, unsigned int line, unsigned int reserved);

/* Bumps the base-32 extension after the last '.' of a temporary file name. */
int fn_82F6D050(char *name, unsigned int size, unsigned long limit)
{
    char text[8];
    unsigned long next;
    int ok;
    char *ext = fn_82F838B0(name, '.') + 1;

    ok = ext >= name && size > (unsigned int)(ext - name);
    if (!ok) {
        _invalid_parameter_noinfo();
        return -1;
    }
    next = fn_82F6A3F0(ext, 0, 32) + 1;
    if (next >= limit)
        return -1;
    if (fn_82F686F8(next, text, 8, 32) == 0) {
        if (fn_82F664B0(ext, size - (ext - name), text) == 0)
            return 0;
        fn_82F63C78(0, 0, 0, 0, 0);
    }
    fn_82F63C78(0, 0, 0, 0, 0);
}
