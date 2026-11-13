typedef struct Str_82F41BD0 {
    char pad[0x16];
    unsigned short capacity;   /* 0x16 */
    unsigned short *buffer;    /* 0x18 */
} Str_82F41BD0;

extern unsigned int fn_82F64CE0(const unsigned short *s);
extern int fn_82F41B70(Str_82F41BD0 *self, unsigned short capacity);
extern int fn_82A3F758(unsigned short *dst, unsigned int cch, const unsigned short *src);

static __forceinline int StringCchCopy_82F41BD0(unsigned short *dst, unsigned int cch, const unsigned short *src)
{
    if (cch > 0x7fffffff)
        return 0x80070057;
    return fn_82A3F758(dst, cch, src);
}

int fn_82F41BD0(Str_82F41BD0 *self, const unsigned short *src)
{
    unsigned int n = fn_82F64CE0(src) + 1;
    int hr;
    if (n > 0xffff)
        return 0x80004005;
    hr = fn_82F41B70(self, (unsigned short)n);
    if (hr < 0)
        return hr;
    return StringCchCopy_82F41BD0(self->buffer, self->capacity, src);
}
