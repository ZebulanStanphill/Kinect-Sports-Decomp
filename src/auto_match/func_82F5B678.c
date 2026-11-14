extern void *fn_82630040(unsigned int size, unsigned int align, int flags);

static __forceinline long Alloc(void **p)
{
    *p = fn_82630040(0x50, 8, 1);
    return *p != 0 ? 0 : 0x8007000e;
}

int fn_82F5B678(void **out)
{
    int hr;

    hr = Alloc(&out[0]);
    if (hr < 0)
        return 0x80004005;
    hr = Alloc(&out[1]);
    if (hr < 0)
        return 0x80004005;
    return 0;
}
