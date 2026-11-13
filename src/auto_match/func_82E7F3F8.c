extern int fn_82E7E9F8(unsigned int a, unsigned int b, void *out);

int fn_82E7F3F8(unsigned int a, unsigned int b, int *out)
{
    int r = 0;
    int hr;
    if (b == 0)
        return 0x80004003;
    if (out == 0)
        return 0x80004003;
    if (a == b)
        return 0x80004003;
    *out = 0;
    hr = fn_82E7E9F8(a, b, &r);
    if (hr >= 0)
        *out = 0 == r;
    return hr;
}
