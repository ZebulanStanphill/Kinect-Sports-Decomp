/* memcpy_s: copy count bytes into a buffer of size bytes */
extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);
extern void *memcpy(void *dst, const void *src, unsigned int n);
extern void *memset(void *dst, int c, unsigned int n);

int fn_82F6A3F8(void *dst, unsigned int size, const void *src, unsigned int count)
{
    if (count == 0) {
        return 0;
    }
    if (dst == 0) {
        *_errno() = 22;
        _invalid_parameter_noinfo();
        return 22;
    }
    if (src != 0 && size >= count) {
        memcpy(dst, src, count);
        return 0;
    }
    memset(dst, 0, size);
    if (src == 0) {
        int e = 22;
        *_errno() = e;
        _invalid_parameter_noinfo();
        return e;
    }
    if (size < count) {
        int e = 34;
        *_errno() = e;
        _invalid_parameter_noinfo();
        return e;
    }
    return 22;
}
