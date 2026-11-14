extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);

int fn_82F66368(char *dst, unsigned int size, const char *src, unsigned int count)
{
    char *p;
    unsigned int available;
    int valid;

    if (count == 0 && dst == 0 && size == 0) {
        return 0;
    }
    valid = dst != 0 && size > 0;
    if (!valid) {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return 0x16;
    }
    if (count == 0) {
        *dst = 0;
        return 0;
    }
    valid = src != 0;
    if (!valid) {
        *dst = 0;
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return 0x16;
    }
    p = dst;
    available = size;
    if (count == (unsigned int)-1) {
        while ((*p++ = *src++) != 0 && --available != 0) {
        }
    } else {
        while ((*p++ = *src++) != 0 && --available != 0 && --count != 0) {
        }
        if (count == 0) {
            *p = 0;
        }
    }
    if (available == 0) {
        if (count == (unsigned int)-1) {
            dst[size - 1] = 0;
            return 0x50;
        }
        *dst = 0;
        *_errno() = 0x22;
        _invalid_parameter_noinfo();
        return 0x22;
    }
    return 0;
}
