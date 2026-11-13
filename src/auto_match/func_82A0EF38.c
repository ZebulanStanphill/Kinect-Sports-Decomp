extern void *fn_8265C940(int size, int flags);
extern void fn_8265C990(void *p, int flags);
extern void fn_82A0F090(void *self);
extern int fn_82A0F400(void *self, int a2, int a3, int a4, int a5, int a6, int a7,
                       int a8, int a9, int a10);

int fn_82A0EF38(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9,
                int a10, void **out)
{
    void *raw;
    void *obj;
    int hr;

    obj = 0;
    raw = fn_8265C940(0x90, 0x249c0000);
    if (raw != 0) {
        obj = (void *)(((unsigned int)raw + 0x10) & ~0xfu);
        ((void **)obj)[-1] = raw;
    }
    if (obj == 0) {
        return 0x8007000e;
    }
    fn_82A0F090(obj);
    hr = fn_82A0F400(obj, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    if (hr < 0) {
        fn_8265C990(((void **)obj)[-1], 0x249c0000);
        return hr;
    }
    *out = obj;
    return 0;
}
