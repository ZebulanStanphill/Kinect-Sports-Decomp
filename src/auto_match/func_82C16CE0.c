extern long fn_82C16A98(int *self);
extern void *memset(void *, int, unsigned int);

long fn_82C16CE0(int *self)
{
    long hr = fn_82C16A98(self);
    if (hr >= 0) {
        memset(self, 0, 0x2d0);
        self[0x14 / 4] = 0;
        self[0xc / 4] = 1;
        self[0x20 / 4] = 0;
        self[0x24 / 4] = 0;
        self[0x28 / 4] = 0;
        self[0x34 / 4] = 2;
        self[0x38 / 4] = 0;
        self[0xd8 / 4] = 1;
        self[0xa4 / 4] = 2;
        self[0x2b4 / 4] = 0;
        self[0x2b8 / 4] = 1;
    }
    return hr;
}
