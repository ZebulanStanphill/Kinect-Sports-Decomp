extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern unsigned short *fn_82E47870(void *, int);
extern unsigned int fn_82F64CE0(unsigned int);

int fn_82E483C8(char *self, int a, unsigned int *out)
{
    int hr = 0;
    unsigned short *p;
    unsigned int n;
    RtlEnterCriticalSection(self + 4);
    p = fn_82E47870(self, a);
    if (p != 0) {
        if (*p == 0x1f) {
            n = fn_82F64CE0(*(unsigned int *)(p + 4));
            if (n >= 0xffffffffU) {
                hr = 0x8007000e;
            } else {
                *out = n;
            }
        } else {
            hr = 0xc00d36bd;
        }
    } else {
        hr = 0xc00d36e6;
    }
    RtlLeaveCriticalSection(self + 4);
    return hr;
}
