extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);
extern int __ascii_stricmp(const char *a, const char *b);

int _stricmp_l(const char *a, const char *b)
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
    return __ascii_stricmp(a, b);
}
