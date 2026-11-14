unsigned int strlen(const char *s);
extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);

unsigned int fn_82F64D58(unsigned short *dst, const char *src, unsigned int n)
{
    unsigned int count = 0;
    if (dst != 0) {
        if (n == 0) {
            return 0;
        }
        *dst = 0;
    }
    if (src == 0) {
        *_errno() = 22;
        _invalid_parameter_noinfo();
        return 0xffffffff;
    }
    if (dst != 0) {
        while (count < n) {
            *dst = (unsigned char)src[count];
            if (src[count] == 0) {
                return count;
            }
            count++;
            dst++;
        }
        return count;
    }
    return strlen(src);
}
