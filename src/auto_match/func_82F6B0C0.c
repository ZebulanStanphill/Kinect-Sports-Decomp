extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);
extern int fn_82F6B058(const char *a, const char *b, unsigned int count);

int fn_82F6B0C0(const char *a, const char *b, unsigned int count)
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
    if (count > 0x7fffffff) {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return 0x7fffffff;
    }
    return fn_82F6B058(a, b, count);
}
