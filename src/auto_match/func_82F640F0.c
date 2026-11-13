extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);
extern void *memmove(void *, const void *, unsigned int);

int fn_82F640F0(void *dst, unsigned int size, const void *src, unsigned int count)
{
    if (count == 0) {
        return 0;
    }
    if (dst == 0) {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return 0x16;
    }
    if (src == 0) {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return 0x16;
    }
    if (size < count) {
        *_errno() = 0x22;
        _invalid_parameter_noinfo();
        return 0x22;
    }
    memmove(dst, src, count);
    return 0;
}
