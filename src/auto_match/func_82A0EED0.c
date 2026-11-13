extern void *fn_8265C940(int size, int flags);

void *fn_82A0EED0(int size, int align)
{
    void *raw;
    void *obj;

    obj = 0;
    raw = fn_8265C940(size + align, 0x249c0000);
    if (raw != 0) {
        obj = (void *)(((unsigned int)raw + align) & ~(align - 1));
        ((void **)obj)[-1] = raw;
    }
    return obj;
}
