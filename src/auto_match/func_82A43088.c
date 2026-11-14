extern char lbl_83219D50[];
extern void fn_82A3FE48(void *lock);
extern void fn_82A3FEE0(void *lock);
extern void *fn_82A3FF60(void *heap, unsigned int size, unsigned int tag, int flags);
extern void *fn_82A4CE50(void *mem);

int fn_82A43088(void **out)
{
    int hr;
    void *mem;
    void *obj;

    fn_82A3FE48(lbl_83219D50);
    if (out == 0) {
        hr = 0x80004003;
    } else {
        mem = fn_82A3FF60(lbl_83219D50, 0x2c, 0x2097000a, 0);
        obj = mem ? fn_82A4CE50(mem) : 0;
        hr = obj ? 0 : 0x8007000e;
        if (hr >= 0)
            *out = obj;
    }
    fn_82A3FEE0(lbl_83219D50);
    return hr;
}
