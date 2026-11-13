extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);
extern int strcmp(const char *, const char *);

int fn_82F6F7F0(const char *a, const char *b)
{
    if (a == 0) {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return 0x7fffffff;
    }
    if (b == 0) {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return 0x7fffffff;
    }
    return strcmp(a, b);
}
