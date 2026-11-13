extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);
extern int fn_82F899E8(const char *a, const char *b);

int fn_82F89A38(const char *a, const char *b)
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
    return fn_82F899E8(a, b);
}
