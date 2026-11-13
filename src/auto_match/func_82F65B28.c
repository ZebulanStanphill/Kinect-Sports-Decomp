extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);

int fn_82F65B28(unsigned short *dst, unsigned int size, const unsigned short *src)
{
    unsigned short *p;
    unsigned int available = size;
    int valid;

    valid = dst != 0 && size > 0;
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
    while (available > 0 && *p != 0) {
        p++;
        available--;
    }
    if (available == 0) {
        *dst = 0;
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return 0x16;
    }
    while ((*p++ = *src++) != 0 && --available != 0) {
    }
    if (available == 0) {
        *dst = 0;
        *_errno() = 0x22;
        _invalid_parameter_noinfo();
        return 0x22;
    }
    return 0;
}
