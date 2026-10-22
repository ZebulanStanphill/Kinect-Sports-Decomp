typedef struct Self {
    int owner;
    void *impl;
    int f8;
    int fc;
    int f10;
    int f14;
    char sub[0x7c - 0x18];
    int f7c;
} Self;

extern void *fn_8265C940(int size, int flags);
extern void fn_82A0F0D0(void *sub, int a, int b);
extern void fn_82A0F220(Self *self);
extern void fn_82A10100(void *impl);
extern int fn_82A19C80(void *impl, int a2, int a3, int a4, int a5, int a6,
                       int a9, int a10, int a7, int a8);

int fn_82A0F400(Self *self, int a2, int a3, int a4, int a5, int a6, int a7,
                int a8, int a9, int a10)
{
    void *raw;
    void *impl;
    int hr;

    self->owner = a2;
    impl = 0;
    raw = fn_8265C940(0x2a28, 0x249c0000);
    if (raw != 0) {
        impl = (void *)(((unsigned int)raw + 0x10) & ~0xfu);
        ((void **)impl)[-1] = raw;
    }
    self->impl = impl;
    if (impl == 0) {
        return 0x8007000e;
    }
    fn_82A10100(impl);
    hr = fn_82A19C80(self->impl, a2, a3, a4, a5, a6, a9, a10, a7, a8);
    if (hr < 0) {
        fn_82A0F220(self);
        return hr;
    }
    self->f8 = a7;
    self->fc = a8;
    self->f10 = a9;
    self->f14 = a10;
    fn_82A0F0D0(self->sub, a7, a8);
    self->f7c = 1;
    return 0;
}
