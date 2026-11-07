typedef unsigned int size_t;

extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);
extern int fn_82F6E8F8(char *dst, const unsigned short *src, size_t n, void *loc);

int fn_82F6EBD0(size_t *pcount, char *dst, size_t size,
                const unsigned short *src, size_t count, void *loc)
{
    int ret = 0;
    size_t n;
    size_t len;
    int r;

    {
        int ok = !!((dst != 0 && size > 0) || (dst == 0 && size == 0));
        if (!ok) {
            *_errno() = 22;
            _invalid_parameter_noinfo();
            return 22;
        }
    }
    if (dst != 0) {
        *dst = 0;
    }
    if (pcount != 0) {
        *pcount = 0;
    }
    n = (count > size) ? size : count;
    {
        int ok = !!(n <= 0x7fffffff);
        if (!ok) {
            *_errno() = 22;
            _invalid_parameter_noinfo();
            return 22;
        }
    }
    r = fn_82F6E8F8(dst, src, n, loc);
    if (r == -1) {
        if (dst != 0) {
            *dst = 0;
        }
        return *_errno();
    }
    len = r + 1;
    if (dst != 0) {
        if (len > size) {
            if (count != (size_t)-1) {
                *dst = 0;
                {
                    int ok = !!(size > len);
                    if (!ok) {
                        *_errno() = 34;
                        _invalid_parameter_noinfo();
                        return 34;
                    }
                }
            }
            len = size;
            ret = 0x50;
        }
        dst[len - 1] = 0;
    }
    if (pcount != 0) {
        *pcount = len;
    }
    return ret;
}
