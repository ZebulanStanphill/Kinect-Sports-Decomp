unsigned short __cdecl _byteswap_ushort(unsigned short v);
extern int fn_82EE5F60(void *s, void *buf, unsigned int size);
extern long fn_82EE5E28(void *s, int n);

long fn_82E57738(unsigned short *out, void *s)
{
    unsigned short v;
    long hr = fn_82EE5F60(s, &v, 2);
    if (hr >= 0) {
        *out = _byteswap_ushort(v);
        hr = fn_82EE5E28(s, 2);
    }
    return hr;
}
