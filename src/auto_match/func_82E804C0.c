extern int fn_82E7EC68(unsigned short *self, int *out, int arg);
extern int fn_82E802B0(unsigned short *self, int value);

int fn_82E804C0(unsigned short *self, int arg)
{
    int value = 0;
    int hr;

    if ((*self & 0x1000) == 0 && *self != 0)
        return 0xc00d36ec;
    hr = fn_82E7EC68(self, &value, arg);
    if (hr >= 0)
        hr = fn_82E802B0(self, value);
    return hr;
}
