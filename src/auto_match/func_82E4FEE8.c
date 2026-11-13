extern void *fn_82E4FE08(unsigned int size);
extern void *memcpy(void *d, const void *s, unsigned int n);

void *fn_82E4FEE8(unsigned int size, const void *src, long *hr)
{
    void *p = fn_82E4FE08(size);
    if (p != 0) {
        memcpy(p, src, size);
    } else if (hr != 0) {
        *hr = 0x80030008;
    }
    return p;
}
