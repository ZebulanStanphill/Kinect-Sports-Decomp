extern void *memset(void *dst, int value, unsigned int size);
extern void *fn_8265C9E0(unsigned int size);
extern void fn_8265CA20(void *p);
extern int fn_829352D0(void *self, void *buf, unsigned int size, int kind, void *arg, int flags);

int fn_82934858(void *self, unsigned int count, void *arg)
{
    unsigned int n = count * 4;
    unsigned int *buf = (unsigned int *)fn_8265C9E0(n <= 0x3fffffff ? n * 4 : 0xffffffff);
    int hr;
    if (buf == 0) {
        hr = 0x8007000e;
    } else {
        memset(buf, 0, count * 16);
        hr = fn_829352D0(self, buf, count * 16, 6, arg, 0);
    }
    fn_8265CA20(buf);
    return hr;
}
