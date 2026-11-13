extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);

int fn_82F664B0(char *dst, unsigned int size, const char *src)
{
    char *p;
    int valid;

    valid = dst != 0 && size != 0;
    if (!valid) {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return 0x16;
    }
    if (src == 0) {
        *dst = 0;
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return 0x16;
    }
    p = dst;
    while ((*p++ = *src++) != 0 && --size != 0) {
    }
    if (size == 0) {
        *dst = 0;
        *_errno() = 0x22;
        _invalid_parameter_noinfo();
        return 0x22;
    }
    return 0;
}
