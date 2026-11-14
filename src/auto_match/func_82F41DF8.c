extern unsigned int fn_82F64CE0(const unsigned short *s);
extern int fn_82A3F758(unsigned short *dst, unsigned int cch, const unsigned short *src);

static __forceinline int CopyString(unsigned short *dst, unsigned int cch, const unsigned short *src)
{
    int hr;
    if (cch > 0x7fffffff) {
        hr = 0x80070057;
    } else {
        hr = fn_82A3F758(dst, cch, src);
    }
    return hr;
}

int fn_82F41DF8(const unsigned short *src, unsigned short *dst, unsigned short *pcch)
{
    int hr = 0;
    unsigned short cch = pcch != 0 ? *pcch : 0;
    unsigned short needed;

    if (src == 0)
        return 0x80070057;
    needed = (unsigned short)(fn_82F64CE0(src) + 1);
    if (dst != 0) {
        if (cch >= needed) {
            hr = CopyString(dst, cch, src);
            if (hr < 0)
                goto done;
        } else {
            hr = (int)0xc00d36b1;
        }
    }
    cch = needed;
done:
    if ((hr >= 0 || hr == (int)0xc00d36b1) && pcch != 0)
        *pcch = cch;
    return hr;
}
