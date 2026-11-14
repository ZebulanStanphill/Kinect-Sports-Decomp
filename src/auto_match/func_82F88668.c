extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);
extern int fn_82F66368(unsigned char *dst, unsigned int size, const unsigned char *src, unsigned int count);

int fn_82F88668(unsigned char *dst, unsigned int size, const unsigned char *src, unsigned int count)
{
    int ok;
    if (count == 0 && dst == 0 && size == 0) {
        return 0;
    }
    ok = dst != 0 && size != 0;
    if (!ok) {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return 0x16;
    }
    if (count == 0) {
        *dst = 0;
        return 0;
    }
    if (src == 0) {
        *dst = 0;
        ok = src != 0;
        if (!ok) {
            *_errno() = 0x16;
            _invalid_parameter_noinfo();
            return 0x16;
        }
    }
    return fn_82F66368(dst, size, src, count);
}
