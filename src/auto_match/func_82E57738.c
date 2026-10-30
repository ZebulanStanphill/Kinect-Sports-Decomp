unsigned short __cdecl _byteswap_ushort(unsigned short v);
extern int fn_82EE5F60(void *s, void *buf, int n);
extern void fn_82EE5E28(void *s, int n);

void fn_82E57738(unsigned short *out, void *s)
{
    unsigned short v;
    if (fn_82EE5F60(s, &v, 2) >= 0) {
        *out = _byteswap_ushort(v);
        fn_82EE5E28(s, 2);
    }
}
