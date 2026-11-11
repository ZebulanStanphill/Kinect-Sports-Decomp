extern int fn_82BBF2C0(char *self, int a, int b);
extern int fn_82BBE320(char *p, int a, int z, int b);

int fn_82BBFA20(char *self, int a, int b)
{
    int hr = fn_82BBF2C0(self, a, b);
    if (hr >= 0)
        hr = fn_82BBE320(self + 8, a, 0, b);
    return hr;
}
